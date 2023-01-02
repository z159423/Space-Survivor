using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;



public class UpgradeModuleManager : MonoBehaviour
{
    [SerializeField] private GameObject upgradeModuleUI;

    [Space]
    [Header("업그레이드 모듈 디테일")]
    [SerializeField] private GameObject upgradeModuleDetailUI;
    [SerializeField] private Image upgradeModuleImage;
    [SerializeField] private TextMeshProUGUI upgradeModuleName;
    [SerializeField] private TextMeshProUGUI upgradeModuleTier;
    
    [SerializeField] private TextMeshProUGUI upgradeModuleNormalStat;
    [SerializeField] private TextMeshProUGUI upgradeModuleMagicStat;
    [SerializeField] private TextMeshProUGUI upgradeModuleRareStat;
    [SerializeField] private TextMeshProUGUI upgradeModuleUniqueStat;
    [SerializeField] private TextMeshProUGUI upgradeModuleLegendaryStat;

    [SerializeField] private GameObject sellBtn;
    [SerializeField] private GameObject equipBtn;
    [SerializeField] private GameObject UpgradeBtn;
    

    public static UpgradeModuleManager instance;

    private void Awake() {
        instance = this;
    }

    public void ActiveUpgradeModuleUI()
    {
        upgradeModuleUI.SetActive(!upgradeModuleUI.activeSelf);
    }

    public void ActiveUpgradeModuleDetail(UpgradeModuleObject moduleObject)
    {
        upgradeModuleName.text = moduleObject.type.ToString();
        upgradeModuleTier.text = moduleObject.tier.ToString();

        switch(moduleObject.tier)
        {
            case UpgradeModuleTier.Normal :

            break;

            case UpgradeModuleTier.Magic :

            break;

            case UpgradeModuleTier.Rare :

            break;

            case UpgradeModuleTier.Unique :

            break;

            case UpgradeModuleTier.Legendary :

            break;

            
        }
        

        upgradeModuleDetailUI.SetActive(true);
    }

    public void UnactiveUpgradeModuleDetail()
    {
        upgradeModuleDetailUI.SetActive(false);
    }

    /// <summary>
    /// 
    /// </summary>
    public void GenerateInventoryAndEquipList()
    {
        // 인벤토리 업글 모듈 생성
        for(int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        {
            
        }

        // 장착중인 업글 모듈 생성
        for(int i = 0; i < UserDataManager.instance.currentUserData.equipedModules.Count; i++)
        {

        }
    }
}
