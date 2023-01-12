using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerUpgradeModule : MonoBehaviour
{
    //[field: SerializeField] public List<UpgradeModuleObject> equipedModules = new List<UpgradeModuleObject>();

    //[field: SerializeField] public List<UpgradeModuleObject> moduleInventory = new List<UpgradeModuleObject>();

    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private PlayerWeapon playerWeapon;

    [Space]

    [SerializeField] private GameObject moduleItemPrefab;
    [SerializeField] private Transform moduleInventoryParent;

    /// <sumamry>
    /// 현재 장착중인 모듈을 게임 시작할때 스탯에 적용함
    /// </summary>
    public void AddUpgradeModulesToPlayerStat()
    {
        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            foreach (UpgradeModuleObject module in data.equipedModules)
            {
                foreach (UpgradeModuleScripableObject obj in UpgradeModuleDropManager.instance.moduleDatas)
                {
                    if (module.module == obj.module)
                    {
                        obj.ApplyUpgradeModule(playerWeapon, (int)module.tier);
                        break;
                    }
                }
            }
        }
    }

    public void UnapplyModuleStat()
    {
        playerWeapon.moduleDamage.ClearAllModifier();
    }

    /// <summary>
    /// 인벤토리 새로고침
    /// </summary>
    public void RefreshInventory()
    {

    }

    /// <summary>
    /// 모듈 판매
    /// </summary>
    public void SellModule()
    {
        RefreshInventory();
    }
}

