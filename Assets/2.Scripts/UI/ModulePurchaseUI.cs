using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ModulePurchaseUI : MonoBehaviour
{
    public const int oneModuleCost = 50;
    public const int tenModuleCost = 450;

    [SerializeField] TextMeshProUGUI crystalText;

    [Space]
    [SerializeField] TextMeshProUGUI oneModuleCostText;
    [SerializeField] TextMeshProUGUI tenModuleCostText;

    private void OnEnable()
    {
        UserDataManager.instance.crystalTextList.Add(crystalText);

        crystalText.text = UserDataManager.instance.currentUserData.crystal.ToString();
        oneModuleCostText.text = oneModuleCost.ToString();
        tenModuleCostText.text = tenModuleCost.ToString();
    }

    private void OnDestroy()
    {
        UserDataManager.instance.crystalTextList.Remove(crystalText);
    }

    public void CloseUI()
    {
        Destroy(gameObject);
    }

    public void CallFreeModuleRVAds()
    {

    }

    public void PurchaseOneModule()
    {
        if (UserDataManager.instance.currentUserData.crystal < oneModuleCost)
            return;

        UserDataManager.instance.AddCrystalValue(-oneModuleCost);

        var newModule = UpgradeModuleManager.instance.GenerateRandomModule();

        List<UpgradeModuleObject> newModules = new List<UpgradeModuleObject>();

        newModules.Add(newModule);
        UserDataManager.instance.currentUserData.moduleInventory.Add(newModule);

        OpenModuleBoxUnboxingUI(newModules);
    }

    public void PurchaseTenModule()
    {
        if (UserDataManager.instance.currentUserData.crystal < tenModuleCost)
            return;

        UserDataManager.instance.AddCrystalValue(-tenModuleCost);

        List<UpgradeModuleObject> newModules = new List<UpgradeModuleObject>();

        for (int i = 0; i < 10; i++)
        {
            var newModule = UpgradeModuleManager.instance.GenerateRandomModule();
            UserDataManager.instance.currentUserData.moduleInventory.Add(newModule);
            newModules.Add(newModule);
        }

        OpenModuleBoxUnboxingUI(newModules);
    }

    public void OpenModuleBoxUnboxingUI(List<UpgradeModuleObject> modules)
    {
        var ui = Resources.Load<GameObject>("UI/GainModues");
        var obj = Instantiate(ui, GameManager.instance.MainUIParent);

        obj.GetComponent<ModuleUnboxingUI>().Init(modules);
    }

}
