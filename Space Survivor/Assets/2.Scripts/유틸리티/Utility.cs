using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

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

    public static Transform GetRandomTargetInRadius(Transform origin, float radius)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(origin.position, radius);

        List<EnemyStat> enemyList = new List<EnemyStat>();

        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].TryGetComponent<EnemyStat>(out EnemyStat enemy))
            {
                enemyList.Add(enemy);
            }
        }

        if (enemyList.Count > 0)
            return enemyList[UnityEngine.Random.Range(0, enemyList.Count)].transform;
        else
            return null;
    }

    public static void Explode(Vector2 center, float damage, float radius, int knockbackForce, VFXType vfxType, EZCameraShake.CameraShakeInstance cameraShakeInstance = null)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(center, radius);

        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].TryGetComponent<EnemyStat>(out EnemyStat enemy))
            {
                enemy.TakeDamage(Utility.RountToInt(damage));
                enemy.Knockback(center, -knockbackForce);
            }
        }

        VFXGenerator.instance.GenerateVFX(vfxType, center);


        if (cameraShakeInstance != null)
            EZCameraShake.CameraShaker.Instance.Shake(cameraShakeInstance);
    }

    public static int RountToInt(float value)
    {
        return Mathf.RoundToInt(value);
    }

    public static bool PercentageCalculator(int percent, int maxValue)
    {
        var random = UnityEngine.Random.Range(0, maxValue);

        if (percent > random)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static TimeSpan GetTimeDiff(DateTime time)
    {
        //print(DateTime.Now + " - " +  time);
        TimeSpan timeDiff = DateTime.Now - time;

        return timeDiff;
    }

    public static string GetFormatedStringFromSecond(int second)
    {
        int min = second / 60;
        int hour = min / 60;
        int sec = second % 60;

        return hour + " : " + min + " : " + sec;
    }
}
