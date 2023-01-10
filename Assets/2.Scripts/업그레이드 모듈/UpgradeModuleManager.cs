using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Diagnostics;
using System;
using System.Linq;
using UnityEngine.UI;

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

    [SerializeField] private GameObject sellPanel;
    [SerializeField] private TextMeshProUGUI costText;
    [SerializeField] private Button sellYesBtn;
    public static readonly float[] UpgradeModuleTierDropPercent = { 10000, 800, 20, 5, 1 };

    //public List<UpgradeModuleObject> TestequipedModules = new List<UpgradeModuleObject>();
    //public List<UpgradeModuleObject> TestmoduleInventory = new List<UpgradeModuleObject>();

    [Space]

    [SerializeField] private UpgradeModuleObject swapingModule;


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
            GetNewModule(GenerateRandomModule().GetUpgradeModuleObject());
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
        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            foreach (UpgradeModuleObject obj in data.equipedModules)
            {
                if (obj != null)
                {

                    if (obj.type != UpgradeModuleType.None && obj.key != "")
                    {
                        for (int j = 0; j < playerModuleEquips.Length; j++)
                        {
                            if (playerModuleEquips[j].data.slotType == obj.type)
                                playerModuleEquips[j].EquipModuleAsNumber(modulePrefab, obj.GetUpgradeModuleObject(), j);
                        }
                    }
                }
            }
        }

        // for (int e = 0; e < UserDataManager.instance.currentUserData.equipModuleSaveDatas.Length; e++)
        // {
        //     for (int i = 0; i < UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules.Length; i++)
        //     {
        //         if (UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].type != UpgradeModuleType.None
        //          && UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].key != "")
        //         {
        //             for (int j = 0; j < playerModuleEquips.Length; j++)
        //             {
        //                 if (playerModuleEquips[j].data.slotType == UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].type)
        //                     playerModuleEquips[j].EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipModuleSaveDatas[e].equipedModules[i].GetUpgradeModuleObject(), j);
        //             }
        //         }
        //     }
        // }

        // for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Attack.Length; i++)
        // {
        //     if (UserDataManager.instance.currentUserData.equipedModules_Attack[i].type != UpgradeModuleType.None && UserDataManager.instance.currentUserData.equipedModules_Attack[i].key != "")
        //         playerModuleEquip_Attack.EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipedModules_Attack[i].GetUpgradeModuleObject(), i);
        // }

        // for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Defence.Length; i++)
        // {
        //     if (UserDataManager.instance.currentUserData.equipedModules_Defence[i].type != UpgradeModuleType.None && UserDataManager.instance.currentUserData.equipedModules_Defence[i].key != "")
        //         playerModuleEquip_Defence.EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipedModules_Defence[i].GetUpgradeModuleObject(), i);
        // }

        // for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Movement.Length; i++)
        // {
        //     if (UserDataManager.instance.currentUserData.equipedModules_Movement[i].type != UpgradeModuleType.None && UserDataManager.instance.currentUserData.equipedModules_Movement[i].key != "")
        //         playerModuleEquip_Movement.EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipedModules_Movement[i].GetUpgradeModuleObject(), i);
        // }

        // for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Special.Length; i++)
        // {
        //     if (UserDataManager.instance.currentUserData.equipedModules_Special[i].type != UpgradeModuleType.None && UserDataManager.instance.currentUserData.equipedModules_Special[i].key != "")
        //         playerModuleEquip_Special.EquipModuleAsNumber(modulePrefab, UserDataManager.instance.currentUserData.equipedModules_Special[i].GetUpgradeModuleObject(), i);
        // }
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

        // switch (module.module.type)
        // {
        //     case UpgradeModuleType.AttackType:
        //         success = playerModuleEquip_Attack.EquipModule(modulePrefab, module.module.GetUpgradeModuleObject());
        //         if (success)
        //         {
        //             for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Attack.Length; i++)
        //             {
        //                 if (UserDataManager.instance.currentUserData.equipedModules_Attack[i].type == UpgradeModuleType.None)
        //                 {
        //                     UserDataManager.instance.currentUserData.equipedModules_Attack[i] = module.module.GetUpgradeModuleObject();
        //                     break;
        //                 }
        //             }
        //         }
        //         else
        //         {

        //         }
        //         break;

        //     case UpgradeModuleType.DefenceType:
        //         success = playerModuleEquip_Defence.EquipModule(modulePrefab, module.module.GetUpgradeModuleObject());
        //         if (success)
        //         {
        //             for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Defence.Length; i++)
        //             {
        //                 if (UserDataManager.instance.currentUserData.equipedModules_Defence[i].type == UpgradeModuleType.None)
        //                 {
        //                     UserDataManager.instance.currentUserData.equipedModules_Defence[i] = module.module.GetUpgradeModuleObject();
        //                     break;
        //                 }
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.MovementType:
        //         success = playerModuleEquip_Movement.EquipModule(modulePrefab, module.module.GetUpgradeModuleObject());
        //         if (success)
        //         {
        //             for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Movement.Length; i++)
        //             {
        //                 if (UserDataManager.instance.currentUserData.equipedModules_Movement[i].type == UpgradeModuleType.None)
        //                 {
        //                     UserDataManager.instance.currentUserData.equipedModules_Movement[i] = module.module.GetUpgradeModuleObject();
        //                     break;
        //                 }
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.SpecialType:
        //         success = playerModuleEquip_Special.EquipModule(modulePrefab, module.module.GetUpgradeModuleObject());
        //         if (success)
        //         {
        //             for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Special.Length; i++)
        //             {
        //                 if (UserDataManager.instance.currentUserData.equipedModules_Special[i].type == UpgradeModuleType.None)
        //                 {
        //                     UserDataManager.instance.currentUserData.equipedModules_Special[i] = module.module.GetUpgradeModuleObject();
        //                     break;
        //                 }
        //             }
        //         }
        //         break;
        // }

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
                        data.equipedModules[j] = null;
                        break;
                    }
                }
                break;
            }
        }

        // for(int i = 0; i < UserDataManager.instance.currentUserData.equipModuleSaveDatas.Length; i++)
        // {
        //     if(UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].CheckingCurrentEquipModuleData(module.module.type))
        //     {
        //         for(int j = 0; j < UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules.Length; j++)
        //         {
        //             if(UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules[j].key == module.module.key)
        //             {
        //                 UserDataManager.instance.currentUserData.equipModuleSaveDatas[i].equipedModules[j] = null;
        //                 break;
        //             }
        //         }
        //         break;
        //     }
        // }

        // switch (module.module.type)
        // {
        //     case UpgradeModuleType.AttackType:

        //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Attack.Length; i++)
        //         {
        //             if (UserDataManager.instance.currentUserData.equipedModules_Attack[i].key == module.module.key)
        //             {
        //                 UserDataManager.instance.currentUserData.equipedModules_Attack[i] = null;

        //                 break;
        //             }
        //         }

        //         for (int i = 0; i < playerModuleEquip_Attack.data.equipItems.Length; i++)
        //         {
        //             if (playerModuleEquip_Attack.data.equipItems[i] != null)
        //             {
        //                 if (playerModuleEquip_Attack.data.equipItems[i].module.key == module.module.key)
        //                 {
        //                     playerModuleEquip_Attack.data.equipItems[i] = null;
        //                     break;
        //                 }
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.DefenceType:
        //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Defence.Length; i++)
        //         {
        //             if (UserDataManager.instance.currentUserData.equipedModules_Defence[i].key == module.module.key)
        //             {
        //                 UserDataManager.instance.currentUserData.equipedModules_Defence[i] = null;

        //                 break;
        //             }
        //         }

        //         for (int i = 0; i < playerModuleEquip_Defence.data.equipItems.Length; i++)
        //         {
        //             if (playerModuleEquip_Defence.data.equipItems[i] != null)
        //             {
        //                 if (playerModuleEquip_Defence.data.equipItems[i].module.key == module.module.key)
        //                 {
        //                     playerModuleEquip_Defence.data.equipItems[i] = null;
        //                     break;
        //                 }
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.MovementType:
        //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Movement.Length; i++)
        //         {
        //             if (UserDataManager.instance.currentUserData.equipedModules_Movement[i].key == module.module.key)
        //             {
        //                 UserDataManager.instance.currentUserData.equipedModules_Movement[i] = null;

        //                 break;
        //             }
        //         }

        //         for (int i = 0; i < playerModuleEquip_Movement.data.equipItems.Length; i++)
        //         {
        //             if (playerModuleEquip_Movement.data.equipItems[i] != null)
        //             {
        //                 if (playerModuleEquip_Movement.data.equipItems[i].module.key == module.module.key)
        //                 {
        //                     playerModuleEquip_Movement.data.equipItems[i] = null;
        //                     break;
        //                 }
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.SpecialType:
        //         for (int i = 0; i < UserDataManager.instance.currentUserData.equipedModules_Special.Length; i++)
        //         {
        //             if (UserDataManager.instance.currentUserData.equipedModules_Special[i].key == module.module.key)
        //             {
        //                 UserDataManager.instance.currentUserData.equipedModules_Special[i] = null;

        //                 break;
        //             }
        //         }

        //         for (int i = 0; i < playerModuleEquip_Special.data.equipItems.Length; i++)
        //         {
        //             if (playerModuleEquip_Special.data.equipItems[i] != null)
        //             {
        //                 if (playerModuleEquip_Special.data.equipItems[i].module.key == module.module.key)
        //                 {
        //                     playerModuleEquip_Special.data.equipItems[i] = null;
        //                     break;
        //                 }
        //             }
        //         }
        //         break;
        // }

        Destroy(module.gameObject);

        ActiveModuleDetailPanel();
    }

    /// <summary>
    /// 랜덤 모듈 생성
    /// </summary>
    public IUpgradeModule GenerateRandomModule()
    {
        IUpgradeModule module = null;
        UpgradeModules modules = (UpgradeModules)UnityEngine.Random.Range(1, System.Enum.GetValues(typeof(UpgradeModules)).Length);

        switch (modules)
        {
            case UpgradeModules.DamageUp:
                module = new DamageUpModule();
                break;

            case UpgradeModules.ArmorUp:
                module = new ShipPlateUpgrade();
                break;

            case UpgradeModules.MovespeedUp:
                module = new MoveSpeedModule();
                break;

            default:

                UnityEngine.Debug.LogError("생성 할 수 있는 모듈 스크립트가 없습니다.");

                break;

        }

        UpgradeModuleTier tier = (UpgradeModuleTier)(Utility.GetRandomProb(UpgradeModuleTierDropPercent)) + 1;

        switch (modules)
        {
            case UpgradeModules.DamageUp:

                module.SetModuleInfo(UpgradeModuleType.AttackType, modules, tier, Guid.NewGuid().ToString());

                break;

            case UpgradeModules.ArmorUp:

                module.SetModuleInfo(UpgradeModuleType.DefenceType, modules, tier, Guid.NewGuid().ToString());

                break;

            case UpgradeModules.MovespeedUp:

                module.SetModuleInfo(UpgradeModuleType.MovementType, modules, tier, Guid.NewGuid().ToString());

                break;

            default:

                UnityEngine.Debug.LogError("적용 가능한 모듈 정보가 없습니다.");

                break;
        }

        return module;
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
        swapingModule = swapModule;

        foreach (UserData.EquipModuleSaveData data in UserDataManager.instance.currentUserData.equipModuleSaveDatas)
        {
            if (data.CheckingCurrentEquipModuleData(type))
            {
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

        // switch (type)
        // {
        //     case UpgradeModuleType.AttackType:
        //         tempModule = UserDataManager.instance.currentUserData.equipedModules_Attack[num];

        //         UserDataManager.instance.currentUserData.equipedModules_Attack[num] = swapingModule;

        //         for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        //         {
        //             if (swapingModule.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
        //             {
        //                 UserDataManager.instance.currentUserData.moduleInventory[i] = tempModule;
        //                 break;
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.DefenceType:
        //         tempModule = UserDataManager.instance.currentUserData.equipedModules_Defence[num];

        //         UserDataManager.instance.currentUserData.equipedModules_Defence[num] = swapingModule;

        //         for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        //         {
        //             if (swapingModule.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
        //             {
        //                 UserDataManager.instance.currentUserData.moduleInventory[i] = tempModule;
        //                 break;
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.MovementType:
        //         tempModule = UserDataManager.instance.currentUserData.equipedModules_Movement[num];

        //         UserDataManager.instance.currentUserData.equipedModules_Movement[num] = swapingModule;

        //         for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        //         {
        //             if (swapingModule.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
        //             {
        //                 UserDataManager.instance.currentUserData.moduleInventory[i] = tempModule;
        //                 break;
        //             }
        //         }
        //         break;

        //     case UpgradeModuleType.SpecialType:
        //         tempModule = UserDataManager.instance.currentUserData.equipedModules_Special[num];

        //         UserDataManager.instance.currentUserData.equipedModules_Special[num] = swapingModule;

        //         for (int i = 0; i < UserDataManager.instance.currentUserData.moduleInventory.Count; i++)
        //         {
        //             if (swapingModule.key == UserDataManager.instance.currentUserData.moduleInventory[i].key)
        //             {
        //                 UserDataManager.instance.currentUserData.moduleInventory[i] = tempModule;
        //                 break;
        //             }
        //         }
        //         break;

        //     default:
        //         UnityEngine.Debug.LogError("교체할 타입이 없습니다.");

        //         break;
        // }

        SwapModeOff();
    }

    public void SwapModeOn(UpgradeModuleType type)
    {
        foreach (UpgradeModuleEquipment equipment in playerModuleEquips)
        {
            if (equipment.data.slotType == type)
            {
                equipment.SwapModeOn();
                break;
            }
        }

        // switch (type)
        // {
        //     case UpgradeModuleType.AttackType:
        //         playerModuleEquip_Attack.SwapModeOn();
        //         break;

        //     case UpgradeModuleType.DefenceType:
        //         playerModuleEquip_Attack.SwapModeOn();
        //         break;

        //     case UpgradeModuleType.MovementType:
        //         playerModuleEquip_Attack.SwapModeOn();
        //         break;

        //     case UpgradeModuleType.SpecialType:
        //         playerModuleEquip_Attack.SwapModeOn();
        //         break;

        //     default:
        //         UnityEngine.Debug.LogError("교체할 타입이 없습니다.");

        //         break;
        // }
    }

    public void SwapModeOff()
    {
        swapingModule = null;

        foreach (UpgradeModuleEquipment equipment in playerModuleEquips)
        {
            equipment.SwapModeOff();
        }

        // playerModuleEquip_Attack.SwapModeOff();
        // playerModuleEquip_Defence.SwapModeOff();
        // playerModuleEquip_Movement.SwapModeOff();
        // playerModuleEquip_Special.SwapModeOff();

    }
}
