using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerUpgradeModule : MonoBehaviour
{
    [field: SerializeField] public List<UpgradeModuleObject> equipedModules = new List<UpgradeModuleObject>();

    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private PlayerWeapon playerWeapon;

    public void AddUpgradeModulesToPlayerStat()
    {
        for (int i = 0; i < equipedModules.Count; i++)
        {
            equipedModules[i].ApplyUpgradeModule(playerWeapon);
        }
    }

    public void UnapplyModuleStat()
    {
        playerWeapon.moduleDamage.ClearAllModifier();
    }
}

