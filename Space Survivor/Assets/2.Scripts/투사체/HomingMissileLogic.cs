using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissileLogic : MonoBehaviour
{
    [SerializeField] private bool homingProjecile = false;
    [SerializeField] private Transform homingProjectileTarget;
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float rotateSpeed = 200f;

    [Space]

    [SerializeField] private bool findTargetOnStart = true;
    [SerializeField] private bool findTargetOnMissingTarget = true;
    [SerializeField] private float findTargetRange = 100f;

    [Space]

    [SerializeField] private Rigidbody2D rigid;
    [SerializeField] private ProjectileLogic projectileLogic;


    private void OnEnable()
    {
        //transform.rotation = projectileLogic.GetPlayerWeapon().transform.rotation;

        if (findTargetOnStart)
        {
            FindTarget();
        }
    }


    // Update is called once per frame
    void FixedUpdate()
    {
        if(homingProjecile)
        {
            if (findTargetOnMissingTarget && homingProjectileTarget == null)
                FindTarget();

            if (homingProjectileTarget != null)
            {
                if(!homingProjectileTarget.gameObject.activeSelf)
                    FindTarget();

                Vector2 dir = Utility.GetDirection(rigid.position, homingProjectileTarget.position);

                float rotateAmount = Vector3.Cross(dir, transform.up).z;

                rigid.angularVelocity = -rotateAmount * rotateSpeed;

                rigid.velocity = transform.up * moveSpeed;
            }
            else
            {
                rigid.velocity = transform.up * moveSpeed;
            }
        }
    }

    private void FindTarget()
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, findTargetRange);

        float closestDist = float.PositiveInfinity;

        for (int i = 0; i < colliders.Length; i++)
        {
            if(colliders[i].TryGetComponent<EnemyStat>(out EnemyStat enemy))
            {
                var dist = Vector3.Distance(transform.position, enemy.transform.position);

                if(dist < closestDist)
                {
                    closestDist = dist;
                    homingProjectileTarget = enemy.transform;
                }
            }
        }
    }
}
