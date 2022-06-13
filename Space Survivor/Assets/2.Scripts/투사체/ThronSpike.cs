using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThronSpike : MonoBehaviour
{

    [SerializeField] private Transform player;
    [SerializeField] private float rotateSpeed = 1f;
    [SerializeField] private Vector3 rotateDir = new Vector3(0, 0, 1);

    [SerializeField] private TrailRenderer trailRenderer;
    [SerializeField] private ProjectileLogic projectileLogic;


    void Update()
    {
        transform.transform.RotateAround(player.position, rotateDir, rotateSpeed * Time.deltaTime);
    }

    public void ChangePosition(int projectileCount, int thisCount)
    {

        player = GetComponent<ProjectileLogic>().GetPlayerWeapon().transform;
        transform.SetParent(player);

        transform.localPosition = new Vector3(0, 60, 0);

        int angle = (360 / projectileCount);

        transform.RotateAround(player.position, new Vector3(0, 0, 1), angle * (thisCount + 1));

        trailRenderer.Clear();
    }

    private void OnDisable()
    {
        if(!projectileLogic.GetPlayerWeapon().CheckProjectileContainQueue(projectileLogic))
        {
            projectileLogic.OffProjectile();
        }
        
    }
}
