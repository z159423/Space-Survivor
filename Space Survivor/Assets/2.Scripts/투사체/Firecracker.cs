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

    public void AddExplodeRadius(float radius)
    {
        explodeRadius += radius;
    }


    IEnumerator Explode()
    {
        yield return new WaitForSeconds(explodeTime);

        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        Utility.Explode(transform.position,explodeDamage.GetFinalStatValue(), explodeRadius, knockbackForce, vfxType, cameraShakeInstance);

        projectileLogic.OffProjectile();
    }

    public VFXType GetVFXType()
    {
        return vfxType;
    }
}
