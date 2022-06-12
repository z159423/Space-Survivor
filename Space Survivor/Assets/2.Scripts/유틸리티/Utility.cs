using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utility : MonoBehaviour
{
    public static Vector2 GetDirection(Vector2 origin, Vector2 target)
    {
        return (target - origin).normalized;
    }

    public static Transform FindNearEnemy(Transform origin, float radius)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(origin.position, radius);

        float closestDist = float.PositiveInfinity;

        Transform closestTarget = null;

        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].TryGetComponent<EnemyStat>(out EnemyStat enemy))
            {
                var dist = Vector3.Distance(origin.position, enemy.transform.position);

                if (dist < closestDist)
                {
                    closestDist = dist;
                    closestTarget = enemy.transform;
                }
            }
        }

        return closestTarget;
    }

    public static void Explode(Vector2 center , float damage, float radius,int knockbackForce, VFXType vfxType)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(center, radius);

        for(int i = 0; i < colliders.Length; i++)
        {
            if(colliders[i].TryGetComponent<EnemyStat>(out EnemyStat enemy))
            {
                enemy.TakeDamage(Utility.RountToInt(damage));
                enemy.Knockback(center,knockbackForce);
            }
        }

        VFXGenerator.instance.GenerateVFX(vfxType, center);
        //CinemachineShake.Instance.ShakeCamera(3f, .3f);
        EZCameraShake.CameraShaker.Instance.ShakeOnce(4f, 4f, .2f, 1f);
    }

    public static int RountToInt(float value)
    {
        return Mathf.RoundToInt(value);
    }
}
