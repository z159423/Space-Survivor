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
        for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Attack.Length; i++)
        {
            UserDataManager.instance.currentUserData.equipedModules_Attack[i].ApplyUpgradeModule(playerWeapon);
        }

        for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Defence.Length; i++)
        {
            UserDataManager.instance.currentUserData.equipedModules_Defence[i].ApplyUpgradeModule(playerWeapon);
        }

        for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Movement.Length; i++)
        {
            UserDataManager.instance.currentUserData.equipedModules_Movement[i].ApplyUpgradeModule(playerWeapon);
        }

        for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Special.Length; i++)
        {
            UserDataManager.instance.currentUserData.equipedModules_Special[i].ApplyUpgradeModule(playerWeapon);
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

