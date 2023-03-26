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
        AudioManager.instance.PlaySFX("click2");
        Destroy(gameObject);
    }

    public void CallFreeModuleRVAds()
    {
        IEnumerator reward_()
        {
            yield return null;

            UpgradeModuleManager.instance.GetNewModule(UpgradeModuleManager.instance.GenerateRandomModule());
        }

        RewardedInterstitialAdCaller.ShowRv(reward_());
        // RewardedInterstitialAdCaller.instance.CallRV(() => { UpgradeModuleManager.instance.GetNewModule(UpgradeModuleManager.instance.GenerateRandomModule()); });
        AudioManager.instance.PlaySFX("click2");
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

        AudioManager.instance.PlaySFX("click2");

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

        AudioManager.instance.PlaySFX("click2");

        OpenModuleBoxUnboxingUI(newModules);
    }

    public void OpenModuleBoxUnboxingUI(List<UpgradeModuleObject> modules)
    {
        var ui = Resources.Load<GameObject>("UI/GainModues");
        var obj = Instantiate(ui, GameManager.instance.MainUIParent);

        obj.GetComponent<ModuleUnboxingUI>().Init(modules);
    }

}
