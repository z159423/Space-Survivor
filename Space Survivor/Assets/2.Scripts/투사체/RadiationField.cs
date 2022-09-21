using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadiationField : MonoBehaviour
{
    [SerializeField] private Stat damage = new Stat();
    [SerializeField] private Stat damageRadius = new Stat();
    [SerializeField] private int knockbackForce;

    [Space]

    [SerializeField] private ProjectileLogic projectileLogic;

    public void AddRadius(float addRadius)
    {
        damageRadius.AddFloatModifier(addRadius);
    }

    private void OnEnable()
    {
        if (projectileLogic.playerWeapon == null)
            return;

        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        float currentDamage = (damage.GetFinalStatValue()
         + projectileLogic.playerWeapon.playerShipData.baseDamage.GetFinalStatValueAsInt()
         + projectileLogic.GetDamage().GetFinalStatValueAsInt())
          * projectileLogic.playerWeapon.additionalDamage.GetFinalStatValue();

        Utility.Explode(transform.position, currentDamage, damageRadius.GetFinalStatValue(), knockbackForce, VFXType.none, cameraShakeInstance);
    }
}
