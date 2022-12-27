using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerUpgradeModule : MonoBehaviour
{
    [field: SerializeField] public static List<UpgradeModuleObject> equipedModules = new List<UpgradeModuleObject>();

    [SerializeField] private static PlayerStat playerStat;
    [SerializeField] private static PlayerWeapon playerWeapon;


    public static void AddUpgradeModulesToPlayerStat()
    {
        for (int i = 0; i < equipedModules.Count; i++)
        {
            equipedModules[i].ApplyUpgradeModule(playerWeapon);
        }
    }

    public static void UnapplyModuleStat()
    {
        playerWeapon.moduleDamage.ClearAllModifier();
    }
}

