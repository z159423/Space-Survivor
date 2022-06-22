using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public ProjectileType type;

    public void EnQueueThisItem()
    {
        ProjectileGenerator.instance.EnQueueProjectile(type, gameObject);
        gameObject.SetActive(false);
    }
}
