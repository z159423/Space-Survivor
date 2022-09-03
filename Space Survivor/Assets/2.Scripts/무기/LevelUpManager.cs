using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LevelUpManager : MonoBehaviour
{
    [SerializeField] private GameObject UpgradeUI;
    [SerializeField] private Transform UpgradeSlotParent;

    [Space]

    [SerializeField] private Transform weaponSlotParent;
    [SerializeField] private GameObject weaponSlot;

    [Space]

    [SerializeField] private PlayerWeapon playerWeapon;
    public PlayerStat playerStat;

    [SerializeField] private GameObject upgradePanelPrefab;
    [SerializeField] private GameObject crystalPanelPrefab;


    [Space]

    [SerializeField] private int maxWeaponCount = 6;
    [SerializeField] private int maxPassiveCount = 4;

    [Space]

    [SerializeField] private List<WeaponObject> obtainableWeapons = new List<WeaponObject>();

    private List<Equipment> obtainableEquipment = new List<Equipment>();

    private List<WeaponObject> currentObtainableList = new List<WeaponObject>();
    private List<GameObject> currentUpgradePanel = new List<GameObject>();
    private List<GameObject> crystalPanel = new List<GameObject>();


    public static LevelUpManager instance;

    private void Awake()
    {
        instance = this;
    }

    public void StartWeaponUpgrade()
    {
        MakeWeaponsList();

        UpgradeUI.SetActive(true);

        Time.timeScale = 0;
    }

    public void EndUpgrade()
    {
        UpgradeUI.SetActive(false);

        for (int i = 0; i < currentUpgradePanel.Count; i++)
        {
            Destroy(currentUpgradePanel[i]);
        }

        for (int i = 0; i < crystalPanel.Count; i++)
        {
            Destroy(crystalPanel[i]);
        }

        crystalPanel.Clear();

        currentUpgradePanel.Clear();
        currentObtainableList.Clear();

        Time.timeScale = 1;
    }

    private void MakeWeaponsList()
    {
        //획득 가능한 무기들 추가
        currentObtainableList.AddRange(obtainableWeapons);

        obtainableEquipment.AddRange(obtainableEquipment);

        var maxWeapons = playerWeapon.GetMaxLevelWeaponList();

        //이미 만랩인 무기 리스트에서 제거
        for (int i = 0; i < maxWeapons.Count; i++)
        {
            for (int j = 0; j < currentObtainableList.Count; j++)
            {
                if (currentObtainableList[j].type == maxWeapons[i].type)
                    currentObtainableList.Remove(currentObtainableList[j]);
            }
        }

        //만약 무기 슬롯이 꽉차면 새로운 무기가 등장하지 않게 리스트에서 삭제
        if (playerWeapon.weaponPool.Count >= maxWeaponCount)
        {
            for (int i = 0; i < currentObtainableList.Count; i++)
            {
                if (!playerWeapon.GetIsWeaponHave(currentObtainableList[i].type))
                {
                    //Debug.LogError(currentObtainableList[i].type);
                    currentObtainableList.Remove(currentObtainableList[i]);
                    i--;
                }

            }
        }

        //새로운 업그레이드 슬롯 생성
        for (int i = 0; i < 3; i++)
        {
            if (currentObtainableList.Count <= 0)
            {
                var crystal = Instantiate(crystalPanelPrefab, UpgradeSlotParent);
                crystalPanel.Add(crystal);
                continue;
            }


            var panel = Instantiate(upgradePanelPrefab, UpgradeSlotParent);
            var randomWeaponObject = currentObtainableList[Random.Range(0, currentObtainableList.Count)];
            panel.GetComponent<UpgradeSlot>().InitSlot(randomWeaponObject);
            StartCoroutine(panel.GetComponent<UpgradeSlot>().GetLocalizedWeaponTextAsynce());
            currentObtainableList.Remove(randomWeaponObject);
            currentUpgradePanel.Add(panel);
        }

    }

    public void SelectUpgrade(WeaponObject weaponObject)
    {
        playerWeapon.UpgradeWeapon(weaponObject);

        playerStat.AfterUpgrade();
        EndUpgrade();
    }

    public WeaponObject RequestPlayerWeapon(WeaponType type)
    {
        return playerWeapon.GetCurrentWeapon(type);
    }

    public int RequestWeaponLevel(WeaponType type)
    {
        return playerWeapon.GetWeaponLevel(type);
    }

    public int RequestMaxWeaponLevel(WeaponType type)
    {
        return playerWeapon.GetMaxWeaponLevel(type);
    }

    public void AddNewWeaponImage(WeaponObject weaponObject, List<WeaponSlot> slotList)
    {
        var slot = Instantiate(weaponSlot, weaponSlotParent);

        slotList.Add(slot.GetComponent<WeaponSlot>());

        slot.GetComponent<WeaponSlot>().SetWeapon(weaponObject);
    }

    public void AddUpgradeNode(WeaponObject weaponObject)
    {
        var weaponSlots = weaponSlotParent.GetComponentsInChildren<WeaponSlot>();

        for (int i = 0; i < weaponSlots.Length; i++)
        {
            if (weaponSlots[i].weaponObject.type == weaponObject.type)
            {
                weaponSlots[i].AddUpgradeNode();
            }
        }
    }

    public void ClearWeaponImages()
    {
        Transform[] childList = gameObject.GetComponentsInChildren<Transform>();

        if (childList != null)
        {
            for (int i = 1; i < childList.Length; i++)
            {
                if (childList[i] != transform)
                    Destroy(childList[i].gameObject);
            }
        }
    }
}
