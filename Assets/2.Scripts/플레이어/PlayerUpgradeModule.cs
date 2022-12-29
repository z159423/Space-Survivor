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

    public void AddUpgradeModulesToPlayerStat()
    {
        for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules.Count; i++)
        {
            UserDataManager.instance.currentUserData.equipedModules[i].ApplyUpgradeModule(playerWeapon);
        }
    }

    public void UnapplyModuleStat()
    {
        playerWeapon.moduleDamage.ClearAllModifier();
    }

    /// <summary>
    /// 새로운 모듈 획득
    /// </summary>
    public void GetNewModule(UpgradeModuleObject newModule)
    {
        UserDataManager.instance.currentUserData.moduleInventory.Add(newModule);

        var newModuleItem = Instantiate(moduleItemPrefab, moduleInventoryParent);
        newModuleItem.GetComponent<ModuleItem>().SetModuleInfo(newModule);

        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

        RefreshInventory();
    }

    /// <summary>
    /// 모듈 장착
    /// </summary>
    public void EquipModule(GameObject moduleItem)
    {
        var module = moduleItem.GetComponent<UpgradeModuleObject>();

        RefreshInventory();
    }

    /// <summary>
    /// 모듈 장착 해제
    /// </summary>
    public void UnEquipModule()
    {

        RefreshInventory();
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

