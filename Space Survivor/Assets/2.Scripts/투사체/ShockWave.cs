using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShockWave : MonoBehaviour
{
    [SerializeField] private Stat damage = new Stat();
    [SerializeField] private float damageRadius = 3f;
    [SerializeField] private int knockbackForce;


    private void OnEnable()
    {
        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        Utility.Explode(transform.position, damage.GetFinalStatValue(), damageRadius, knockbackForce, VFXType.none, cameraShakeInstance);
    }
}
