using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnergyShield : MonoBehaviour
{
    private ProjectileLogic projectileLogic;

    public float invinsibleTime = 1f;
    public float shieldReloadTime = 5f;
    public bool shieldActive = false;

    private void OnEnable()
    {
        Invoke("GiveShield", 0.1f);
    }

    private void GiveShield()
    {


        var playerStat = GetComponent<ProjectileLogic>().playerWeapon.playerStat;

        if (playerStat.maxShieldStack < GetComponent<ProjectileLogic>().weaponObject.projectileAmount)
            playerStat.GetShield(GetComponent<ProjectileLogic>().weaponObject.currenWhileParticle);
        //playerStat
    }
}
