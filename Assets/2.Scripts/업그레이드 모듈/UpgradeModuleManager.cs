using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Diagnostics;
using System;
using System.Linq;
using UnityEngine.UI;
using Sirenix.OdinInspector;

public class UpgradeModuleManager : MonoBehaviour
{
    [SerializeField] private GameObject upgradeModulePanel;

    [Space]

    [SerializeField] private UpgradeModuleEquipment[] playerModuleEquips;
    //[SerializeField] private UpgradeModuleEquipment playerModuleEquip_Attack;
    //[SerializeField] private UpgradeModuleEquipment playerModuleEquip_Defence;
    //[SerializeField] private UpgradeModuleEquipment playerModuleEquip_Movement;
    //[SerializeField] private UpgradeModuleEquipment playerModuleEquip_Special;

    [Space]

    [SerializeField] private GameObject detailPanel;

    [Space]

    [SerializeField] private TextMeshProUGUI detail_Name;
    [SerializeField] private TextMeshProUGUI detail_Tier;
    [SerializeField] private TextMeshProUGUI detail_Stat_Normal;
    [SerializeField] private TextMeshProUGUI detail_Stat_Magic;
    [SerializeField] private TextMeshProUGUI detail_Stat_Rare;
    [SerializeField] private TextMeshProUGUI detail_Stat_Unique;
    [SerializeField] private TextMeshProUGUI detail_Stat_Legendary;

    [Space]

    [SerializeField] private GameObject sellBtn;
    [SerializeField] private GameObject upgradeBtn;
    [SerializeField] private GameObject equipBtn;
    [SerializeField] private GameObject unequipBtn;

    [Space]

    [SerializeField] private Transform playerModuleInventoryParent;
    [SerializeField] private Transform playerModuleEquipParent;


    [SerializeField] private GameObject modulePrefab;

    [Space]

    [TitleGroup("Upgrade")][SerializeField] GameObject moduleUpgradePanel;
    [TitleGroup("Upgrade")][SerializeField] Transform moduleUpgradeInventoryParent;
    [TitleGroup("Upgrade")][SerializeField] Button moduleUpgradeBtn;
    [Space]
    [TitleGroup("Upgrade")][SerializeField] UpgradeModuleObject moduleUpgrade1;
    [TitleGroup("Upgrade")][SerializeField] Image moduleUpgrade1Image;
    [TitleGroup("Upgrade")][SerializeField] UpgradeModuleObject moduleUpgrade2;
    [TitleGroup("Upgrade")][SerializeField] Image moduleUpgrade2Image;
    [TitleGroup("Upgrade")][SerializeField] UpgradeModuleObject moduleUpgrade3;
    [TitleGroup("Upgrade")][SerializeField] Image moduleUpgrade3Image;
    //[TitleGroup("Upgrade")][SerializeField] GameObject moduleUpgradePanel;

    [Space]

    [SerializeField] private GameObject sellPanel;
    [SerializeField] private TextMeshProUGUI costText;
    [SerializeField] private Button sellYesBtn;
    public static readonly float[] UpgradeModuleTierDropPercent = { 10000, 800, 20, 5, 1 };

    //public List<UpgradeModuleObject> TestequipedModules = new List<UpgradeModuleObject>();
    //public List<UpgradeModuleObject> TestmoduleInventory = new List<UpgradeModuleObject>();

    [Space]

    [SerializeField] private UpgradeModuleObject swapingModule;
    [SerializeField] private UpgradeModuleObject selectedModule;



    public static UpgradeModuleManager instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        GenerateInventoryModulePrefabs();
        GenerateEquipModulePrefabs();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
            GetNewModule(GenerateRandomModule());
    }

    /// <summary>
    /// 게임 시작시 인벤토리 모듈 프리팹 생성
    /// </summary>
    public void GenerateInventoryModulePrefabs()
    {
        print(UserDataManager.instance.currentUserData.moduleInventory.Count);

        for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        {
            var module = Instantiate(modulePrefab, Vector3.zero, Quaternion.identity, playerModuleInventoryParent).GetComponent<ModuleItem>();

            module.InitModule(UserDataManager.instance.currentUserData.moduleInventory[i].GetUpgradeModuleObject(), inventory: true);
        }
    }

    /// <summary>
    /// 게임 시작시 장착중인 모듈 프리팹 생성
    /// </summary>
    public void GenerateEquipModulePrefabs()
    {
        for (int e = 0; e < UserDataManager.instance.currentUserData.equipModuleSaveDatas.Length; e++)
        {
            for (int i = 0; i < UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules.Length; i++)
            {
                if (UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].type != UpgradeModuleType.None
                 && UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].key != "")
                {
                    for (int j = 0; j < playerModuleEquips.Length; j++)
                    {
                        if (playerModuleEquips[j].data.slotType == UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].type)
                            playerModuleEquips[j].EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].GetUpgradeModuleObject(), i);
                    }
                }
            }
        }
    }

    /// <summary>
    /// 모듈 메뉴
    /// </summary>
    public void ActiveUpgradeModulePanel()
    {
        upgradeModulePanel.SetActive(!upgradeModulePanel.activeSelf);
    }

    /// <summary>
    /// 모듈 설명창 열기
    /// </summary>
    public void OpenModuleUpgradeDetail(ModuleItem item)
    {
        //이름 티어 현지화
        detail_Name.text = item.module.module.ToString();
        detail_Tier.text = item.module.tier.ToString();

        //해당 모듈 스탯 현지화


        //버튼 활성화 여부 인벤에 있으면 장착 버튼 활성화 장비중이면 장착해제 버튼 활성화
        if (item.inventory)
        {
            equipBtn.SetActive(true);
            equipBtn.GetComponent<Button>().onClick.RemoveAllListeners();
            equipBtn.GetComponent<Button>().onClick.AddListener(() => EquipModule(item));
            unequipBtn.SetActive(false);
        }
        else if (item.equip)
        {
            equipBtn.SetActive(false);
            unequipBtn.GetComponent<Button>().onClick.RemoveAllListeners();
            unequipBtn.GetComponent<Button>().onClick.AddListener(() => UnEquipModule(item));
            unequipBtn.SetActive(true);
        }

        sellBtn.GetComponent<Button>().onClick.RemoveAllListeners();
        sellBtn.GetComponent<Button>().onClick.AddListener(() => OnClickModuleSellBtn(item));

        ActiveModuleDetailPanel();

        selectedModule = item.module.GetUpgradeModuleObject();
    }

    /// <summary>
    /// 모듈 설명창 열기
    /// </summary>
    public void ActiveModuleDetailPanel()
    {
        detailPanel.SetActive(!detailPanel.activeSelf);
    }

    /// <summary>
    /// 모듈 장착
    /// </summary>
    public void EquipModule(ModuleItem module)
    {
        bool success = false;

        for (int i = 0; i < UserDataManager.instance.currentUserData.equipModuleSaveDatas.Length; i++)
        {
            if (UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].CheckingCurrentEquipModuleData(module.module.type))
            {
                for (int j = 0; j < playerModuleEquips.Length; j++)
                {
                    if (playerModuleEquips[j].data.slotType == module.module.type)
                    {
                        success = playerModuleEquips[j].EquipModule(modulePrefab, module.module.GetUpgradeModuleObject());
                        break;
                    }
                }

                for (int j = 0; j < UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules.Length; j++)
                {
                    if (UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules[j].type == UpgradeModuleType.None)
                    {
                        UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules[j] = module.module.GetUpgradeModuleObject();
                        break;
                    }
                }
            }
        }

        if (success)
        {
            for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
            {
                if (UserDataManager.instance.currentUserData.moduleInventory[i].key == module.module.key)
                {
                    UserDataManager.instance.currentUserData.moduleInventory.RemoveAt(i);
                    Destroy(module.gameObject);

                    break;
                }
            }
        }
        else
        {
            SwapModeOn(module.module.GetUpgradeModuleObject());
        }

        ActiveModuleDetailPanel();
    }

    /// <summary>
    /// 모듈 장착 해제
    /// </summary>
    public void UnEquipModule(ModuleItem module)
    {
        GetNewModule(module.module.GetUpgradeModuleObject());

        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            if (data.CheckingCurrentEquipModuleData(module.module.type))
            {
                for (int j = 0; j < data.equipedModules.Length; j++)
                {
                    if (data.equipedModules[j].key == module.module.key)
                    {
                        data.equipedModules[j] = new UpgradeModuleObject();
                        break;
                    }
                }
                break;
            }
        }

        Destroy(module.gameObject);

        ActiveModuleDetailPanel();
    }

    /// <summary>
    /// 랜덤 모듈 생성
    /// </summary>
    public UpgradeModuleObject GenerateRandomModule()
    {

        UpgradeModules modules = (UpgradeModules)UnityEngine.Random.Range(1, System.Enum.GetValues(typeof(UpgradeModules)).Length);

        UpgradeModuleTier tier = (UpgradeModuleTier)(Utility.GetRandomProb(UpgradeModuleTierDropPercent)) + 1;

        UpgradeModuleObject moduleObject = null;

        foreach (UpgradeModuleScripableObject upgradeModule in UpgradeModuleDropManager.instance.moduleDatas)
        {
            if (upgradeModule.module == modules)
            {
                moduleObject = new UpgradeModuleObject(upgradeModule.type, upgradeModule.module, tier);
                break;
            }
        }

        if (moduleObject == null)
            UnityEngine.Debug.LogError("해당하는 모듈의 정보를 찾지 못했습니다.");

        return moduleObject;
    }

    /// <summary>
    /// 새로운 모듈 획득
    /// </summary>
    public void GetNewModule(UpgradeModuleObject newModule)
    {
        UserDataManager.instance.currentUserData.moduleInventory.Add(newModule);

        var newModuleItem = Instantiate(modulePrefab, playerModuleInventoryParent);
        newModuleItem.GetComponent<ModuleItem>().InitModule(newModule, inventory: true);

        print("새로운 모듈 획득 : " + newModule.module + " | " + newModule.tier + " | " + newModule.type + " | " + newModule.key);

        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);
    }

    /// <summary>
    /// 플레이어의 모듈 정보에 변화가 생겼을때 저장하는 함수
    /// </summary>
    public void OnChangeUpgardeModuleSystem()
    {
        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);
    }

    public void ActiveModuleSellPanel()
    {
        sellPanel.SetActive(!sellPanel.activeSelf);
    }

    public void OnClickModuleSellBtn(ModuleItem item)
    {
        costText.text = item.module.GetSellCost().ToString();

        sellYesBtn.onClick.RemoveAllListeners();
        sellYesBtn.onClick.AddListener(() => SellModule(item));

        ActiveModuleSellPanel();
    }

    public void SellModule(ModuleItem item)
    {
        UserDataManager.instance.AddCrystalValue(item.module.GetSellCost());

        if (item.inventory)
        {
            for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
            {
                if (item.module.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
                {
                    UserDataManager.instance.currentUserData.moduleInventory.RemoveAt(i);
                    break;
                }
            }
        }
        else if (item.equip)
        {
            foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
            {
                if (data.CheckingCurrentEquipModuleData(item.module.type))
                {
                    for (int i = 0; i < data.equipedModules.Length; i++)
                    {
                        if (data.equipedModules[i].key == item.module.key)
                        {
                            data.equipedModules[i] = null;
                            break;
                        }
                    }

                    break;
                }
            }

            // switch (item.module.type)
            // {
            //     case UpgradeModuleType.AttackType:
            //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Attack.Length; i++)
            //         {
            //             if (item.module.key == UserDataManager.instance.currentUserData.equipedModules_Attack[i].key)
            //             {
            //                 UserDataManager.instance.currentUserData.equipedModules_Attack[i] = null;
            //                 break;
            //             }
            //         }

            //         break;

            //     case UpgradeModuleType.DefenceType:
            //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Defence.Length; i++)
            //         {
            //             if (item.module.key == UserDataManager.instance.currentUserData.equipedModules_Defence[i].key)
            //             {
            //                 UserDataManager.instance.currentUserData.equipedModules_Defence[i] = null;
            //                 break;
            //             }
            //         }
            //         break;

            //     case UpgradeModuleType.MovementType:
            //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Movement.Length; i++)
            //         {
            //             if (item.module.key == UserDataManager.instance.currentUserData.equipedModules_Movement[i].key)
            //             {
            //                 UserDataManager.instance.currentUserData.equipedModules_Movement[i] = null;
            //                 break;
            //             }
            //         }
            //         break;

            //     case UpgradeModuleType.SpecialType:
            //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Special.Length; i++)
            //         {
            //             if (item.module.key == UserDataManager.instance.currentUserData.equipedModules_Special[i].key)
            //             {
            //                 UserDataManager.instance.currentUserData.equipedModules_Special[i] = null;
            //                 break;
            //             }
            //         }
            //         break;

            //     default:
            //         UnityEngine.Debug.LogError("판매할 수 없는 모듈 타입입니다.");
            //         break;
            // }
        }

        Destroy(item.gameObject);

        ActiveModuleSellPanel();
        ActiveModuleDetailPanel();
    }

    public void SwapModule(UpgradeModuleType type, int num, UpgradeModuleObject swapModule)
    {
        UpgradeModuleObject tempModule = null;

        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            if (data.CheckingCurrentEquipModuleData(type))
            {
                tempModule = data.equipedModules[num];

                data.equipedModules[num] = swapingModule;

                for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
                {
                    if (swapingModule.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
                    {
                        UserDataManager.instance.currentUserData.moduleInventory[i] = tempModule;
                        break;
                    }
                }
                break;
            }
        }

        foreach (UpgradeModuleEquipment equipment in playerModuleEquips)
        {
            equipment.ClearItems();
        }

        var items = playerModuleInventoryParent.GetComponentsInChildren<ModuleItem>();

        for (int i = 0; i < items.Length; i++)
        {
            Destroy(items[i].gameObject);
        }

        GenerateInventoryModulePrefabs();
        GenerateEquipModulePrefabs();

        SwapModeOff();
    }

    public void SwapModeOn(UpgradeModuleObject moduleObject)
    {
        foreach (UpgradeModuleEquipment equipment in playerModuleEquips)
        {
            if (equipment.data.slotType == moduleObject.type)
            {
                swapingModule = moduleObject;
                equipment.SwapModeOn();
                break;
            }
        }

    }

    public void SwapModeOff()
    {
        swapingModule = null;

        foreach (UpgradeModuleEquipment equipment in playerModuleEquips)
        {
            equipment.SwapModeOff();
        }
    }


    public void OnClickModuleUpgradeBtn()
    {
        ClearModuleUpgradeInventory();

        moduleUpgrade1 = selectedModule;

        var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
        var find = scriptableObjects.Find(f => f.ID == (int)selectedModule.module);
        moduleUpgrade1Image.sprite = find?.moduleIcon;

        ActiveModuleUpgradePanel();
        GenerateModuleUpgradeInventory();
    }

    public void ActiveModuleUpgradePanel()
    {
        moduleUpgradePanel.gameObject.SetActive(!moduleUpgradePanel.activeSelf);
    }

    public void GenerateModuleUpgradeInventory()
    {
        foreach (UpgradeModuleObject module in UserDataManager.instance.currentUserData.moduleInventory)
        {
            if (moduleUpgrade1.key != module.key)
            {
                var slot = Instantiate(modulePrefab, moduleUpgradeInventoryParent).GetComponent<ModuleItem>();
                slot.InitModule(module);
                slot.moduleUpgradeCoverImage.gameObject.SetActive(true);
            }
        }
    }

    public void ClearModuleUpgradeInventory()
    {
        var inventory = moduleUpgradeInventoryParent.GetComponentsInChildren<ModuleItem>();

        for (int i = 0; i < inventory.Length; i++)
        {
            Destroy(inventory[i].gameObject);
        }

        moduleUpgrade1 = null;
        moduleUpgrade1Image.sprite = null;

        moduleUpgrade2 = null;
        moduleUpgrade2Image.sprite = null;

        moduleUpgrade3 = null;
        moduleUpgrade3Image.sprite = null;

    }

    public void ModuleUpgrade()
    {
        if (moduleUpgrade1.module != moduleUpgrade2.module ||
         moduleUpgrade2.module != moduleUpgrade3.module ||
         moduleUpgrade1.module != moduleUpgrade3.module)
        {
            UnityEngine.Debug.LogError("모듈들의 종류가 다릅니다.");
            ActiveModuleUpgradePanel();
            return;
        }

        if (moduleUpgrade1.type != moduleUpgrade2.type ||
        moduleUpgrade2.type != moduleUpgrade3.type ||
        moduleUpgrade1.type != moduleUpgrade3.type)
        {
            UnityEngine.Debug.LogError("모듈들의 타입이 다릅니다.");
            ActiveModuleUpgradePanel();
            return;
        }

        moduleUpgrade1.TierUpThisModule();
        DeleteModule(moduleUpgrade2);
        DeleteModule(moduleUpgrade3);
        ActiveModuleUpgradePanel();
    }

    ///<summary>
    /// 인벤토리 또는 장비중인 모듈 삭제
    ///</summary>
    public void DeleteModule(UpgradeModuleObject module)
    {
        //장비창 검색
        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            for (int i = 0; i < data.equipedModules.Length; i++)
            {
                if (data.equipedModules[i].key == module.key)
                {
                    data.equipedModules[i] = null;

                    return;
                }
            }
        }

        //인벤토리 검색
        for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        {
            if (UserDataManager.instance.currentUserData.moduleInventory[i].key == module.key)
            {
                UserDataManager.instance.currentUserData.moduleInventory.RemoveAt(i);
                return;
            }
        }
    }

    public bool SelectModuleUpgradeSlot(ModuleItem item)
    {
        if (moduleUpgrade2 == null)
        {
            moduleUpgrade2 = item.module.GetUpgradeModuleObject();

            var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
            var find = scriptableObjects.Find(f => f.ID == (int)item.module.GetUpgradeModuleObject().module);
            moduleUpgrade2Image.sprite = find?.moduleIcon;

            fillSelectedSlot();
            return true;
        }

        if (moduleUpgrade3 == null)
        {
            moduleUpgrade3 = item.module.GetUpgradeModuleObject();

            var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
            var find = scriptableObjects.Find(f => f.ID == (int)item.module.GetUpgradeModuleObject().module);
            moduleUpgrade3Image.sprite = find?.moduleIcon;

            fillSelectedSlot();
            return true;
        }

        void fillSelectedSlot()
        {
            if (moduleUpgrade2 != null && moduleUpgrade3 != null)
                moduleUpgradeBtn.interactable = true;
            else
                moduleUpgradeBtn.interactable = false;
        }
        return false;
    }
}
