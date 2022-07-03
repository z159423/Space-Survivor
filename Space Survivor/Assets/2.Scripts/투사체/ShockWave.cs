using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShockWave : MonoBehaviour
{
    [SerializeField] private Stat damage = new Stat();
    [SerializeField] private Stat damageRadius = new Stat();
    [SerializeField] private int knockbackForce;

    public void AddRadius(float addRadius)
    {
        damageRadius.AddFloatModifier(addRadius);
    }

    private void OnEnable()
    {
        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        Utility.Explode(transform.position, damage.GetFinalStatValue(), damageRadius.GetFinalStatValue(), knockbackForce, VFXType.none, cameraShakeInstance);
    }
}
