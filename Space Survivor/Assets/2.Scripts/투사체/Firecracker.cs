using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Firecracker : MonoBehaviour
{
    [SerializeField] private Stat explodeDamage = new Stat();
    [SerializeField] private float explodeTime;
    [SerializeField] private float explodeRadius;
    [SerializeField] private int knockbackForce;
    [SerializeField] private VFXType vfxType;

    [Space]

    [SerializeField] private ProjectileLogic projectileLogic;

    private void OnEnable()
    {
        StartCoroutine(Explode());
    }


    IEnumerator Explode()
    {
        yield return new WaitForSeconds(explodeTime);

        Utility.Explode(transform.position,explodeDamage.GetFinalStatValue(), explodeRadius, knockbackForce, vfxType);

        projectileLogic.OffProjectile();
    }
}
