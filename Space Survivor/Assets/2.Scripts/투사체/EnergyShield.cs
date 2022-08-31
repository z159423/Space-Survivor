using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnergyShield : MonoBehaviour
{
    private ProjectileLogic projectileLogic;

    public float invinsibleTime = 1f;
    public float shieldReloadTime = 5f;
    public bool shieldActive = false;

    private void GetShield()
    {
        projectileLogic = GetComponent<ProjectileLogic>();

        projectileLogic.playerWeapon
    }
}
