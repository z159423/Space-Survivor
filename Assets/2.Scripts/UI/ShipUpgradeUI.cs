using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Localization;
using UnityEngine.ResourceManagement.AsyncOperations;
using DG.Tweening;

public class ShipUpgradeUI : MonoBehaviour
{
    public ShipObject currentShipObject;

    [Space]

    public Image shipImage;
    public TextMeshProUGUI shipName;

    [Space]

    public TextMeshProUGUI hpStat;
    public TextMeshProUGUI damageStat;
    public TextMeshProUGUI speedStat;
    public GameObject shipUnlockButton;
    public TextMeshProUGUI shopCostText;

    [Space]

    public ShipUpgradeSlot[] shipUpgradeSlot;

    [Space]

    public GameObject upgradeNode;
    public GameObject shipUpgradeSelectSlot;
    public Transform shipUpgradeSelectSlotParent;
    public ShipList shipList;

    [Space]

    [SerializeField] private GameObject shipSelectNextBtn;
    [SerializeField] private GameObject shipSelectPreviousBtn;

    private int shipSelectPageNum;
    private int currentShipSelectPageNum = 0;
    private List<GameObject> shipSelectNodeList = new List<GameObject>();

    private void OnEnable()
    {
        if (currentShipObject == null)
            currentShipObject = GameManager.instance.currentShip;

        SelectShip(currentShipObject);
    }

    private void Start()
    {
        shipSelectPageNum = shipList.shipList.Count / 3;

        GenerateShipSelectNode();

        UserDataManager.onChangeCrystalValue += InitShipBuyButton;
    }

    private void Update()
    {
        shipImage.transform.Rotate(new Vector3(0, 0, 1) * Time.deltaTime * 20);
    }

    public void SelectShip(ShipObject shipObject)
    {
        currentShipObject = shipObject;

        ShipObjectData data = UserDataManager.instance.GetShipData(shipObject.shipObjectData.shipCode);

        shipImage.sprite = UserDataManager.instance.GetShipImage(data.shipCode); //data.shipImage;

        //hpStat.text = data.baseMaxHp.GetBaseValue().ToString();
        //damageStat.text = data.baseDamage.GetBaseValue().ToString();
        //speedStat.text = data.baseMoveSpeed.GetBaseValue().ToString();

        SetUpgradeModuleSlot(data, shipObject);

        shopCostText.text = data.shipCost.ToString();

        InitShipBuyButton();

        if (UserDataManager.instance.currentUserData.crystal >= currentShipObject.shipObjectData.shipCost)
            shipUnlockButton.GetComponent<Button>().interactable = true;
        else
            shipUnlockButton.GetComponent<Button>().interactable = false;

        StartCoroutine(ChangeShipNameText());

        IEnumerator ChangeShipNameText()
        {
            var keyName = data.shipCode;

            var localizedString = new LocalizedString("Ship", keyName);

            var stringOperation = localizedString.GetLocalizedStringAsync();

            while (true)
            {
                if (stringOperation.IsDone && stringOperation.Status == AsyncOperationStatus.Succeeded)
                {
                    string str = stringOperation.Result;
                    shipName.text = str;

                    break;
                }
                yield return null;
            }
        }
    }

    //함선 구매버튼 활성화 여부
    private void InitShipBuyButton()
    {
        if (UserDataManager.instance.CheckPlayerHaveShip(currentShipObject.shipObjectData.shipCode))
        {
            shipUnlockButton.SetActive(false);
        }
        else
        {
            shipUnlockButton.SetActive(true);
        }
    }

    public void SetUpgradeModuleSlot(ShipObjectData data, ShipObject shipObject)
    {
        var currentShipData = UserDataManager.instance.GetShipData_currentVersion(data.shipCode);

        for (int i = 0; i < data.shipUpgradeModuleList.Count; i++)
        {
            switch (data.shipUpgradeModuleList[i].upgradeType)
            {
                case ShipUpgradeType.Health:
                    hpStat.text = data.baseMaxHp.GetBaseValue().ToString() + "(+" + (data.shipUpgradeModuleList[i].currentUpgrade * currentShipData.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                    break;

                case ShipUpgradeType.Damage:
                    damageStat.text = data.baseDamage.GetBaseValue().ToString() + "(+" + (data.shipUpgradeModuleList[i].currentUpgrade * currentShipData.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                    break;

                case ShipUpgradeType.Speed:
                    speedStat.text = data.baseMoveSpeed.GetBaseValue().ToString() + "(+" + (data.shipUpgradeModuleList[i].currentUpgrade * currentShipData.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                    break;
            }


            SetUpgradeSlots(UserDataManager.instance.GetShipData(data.shipCode).GetCurrentModule(data.shipUpgradeModuleList[i].upgradeType), shipObject);

        }
    }

    private void SetUpgradeSlots(ShipUpgradeModules modules, ShipObject currentShip)
    {

        for (int i = 0; i < shipUpgradeSlot.Length; i++)
        {
            if (shipUpgradeSlot[i].upgradeType == modules.upgradeType)
            {
                shipUpgradeSlot[i].shipObject = currentShip;

                //최신버전의 업그레이드 정보 가져오기
                var currentVersionShipData = UserDataManager.instance.GetShipData_currentVersion(currentShip.shipObjectData.shipCode);
                var currentVersionUpgradeModule = currentVersionShipData.GetModule(modules.upgradeType);

                int upgradeCost = (modules.currentUpgrade + 1) * modules.upgradeCostForLevel;
                shipUpgradeSlot[i].upgradeCostText.text = upgradeCost.ToString();

                if (UserDataManager.instance.currentUserData.crystal >= upgradeCost && UserDataManager.instance.CheckPlayerHaveShip(currentShip.shipObjectData.shipCode)
                && UserDataManager.instance.currentUserData.crystal >= upgradeCost && modules.currentUpgrade < currentVersionUpgradeModule.maxUpgrade)
                {
                    shipUpgradeSlot[i].upgradeButton.SetActive(true);
                }
                else
                {
                    shipUpgradeSlot[i].upgradeButton.SetActive(false);
                }

                if (modules.currentUpgrade < currentVersionUpgradeModule.maxUpgrade)
                {
                    shipUpgradeSlot[i].costPanel.SetActive(true);
                    shipUpgradeSlot[i].maxPanel.SetActive(false);
                }
                else
                {
                    shipUpgradeSlot[i].costPanel.SetActive(false);
                    shipUpgradeSlot[i].maxPanel.SetActive(true);
                }

                for (int z = 0; z < shipUpgradeSlot[i].upgradeNodeList.Count; z++)
                {
                    Destroy(shipUpgradeSlot[i].upgradeNodeList[z]);
                }
                shipUpgradeSlot[i].upgradeNodeList.Clear();

                for (int z = 0; z < modules.currentUpgrade; z++)
                {
                    shipUpgradeSlot[i].upgradeNodeList.Add(Instantiate(upgradeNode, shipUpgradeSlot[i].upgradeNodeParent));
                }
            }
        }
    }

    public void BuyShip()
    {
        if (currentShipObject.shipObjectData.shipCost > UserDataManager.instance.currentUserData.crystal
        || UserDataManager.instance.CheckPlayerHaveShip(currentShipObject.shipObjectData.shipCode))
            return;

        var newShipData = Instantiate(currentShipObject);

        UserDataManager.instance.currentUserData.playerHaveShip.Add(newShipData.shipObjectData);

        SelectShip(currentShipObject);

        UserDataManager.instance.AddCrystalValue(-currentShipObject.shipObjectData.shipCost);

        AudioManager.instance.GenerateAudioAndPlaySFX("upgrade3", transform.position);
    }

    public void OnClickShipSelectNextBtn()
    {
        currentShipSelectPageNum++;
        GenerateShipSelectNode();
    }

    public void OnClickShipSelectPreviousBtn()
    {
        currentShipSelectPageNum--;
        GenerateShipSelectNode();
    }

    /// <summary>
    /// 함선 선택 버튼들 생성, 한 페이지당 최대 3개의 버튼이 생성됨
    /// </summary>
    public void GenerateShipSelectNode()
    {
        for (int i = 0; i < shipSelectNodeList.Count; i++)
        {
            Destroy(shipSelectNodeList[i]);
        }

        shipSelectNodeList.Clear();

        for (int i = 0; i < shipList.shipList.Count - (3 * currentShipSelectPageNum) && i < 3; i++)
        {
            var slot = Instantiate(shipUpgradeSelectSlot, shipUpgradeSelectSlotParent);
            slot.GetComponent<ShipUpgradeSelectSlot>().InitShip(Instantiate(shipList.shipList[i + (3 * currentShipSelectPageNum)]), this);

            shipSelectNodeList.Add(slot);
        }

        UpdateUI();
    }

    public void UpdateUI()
    {
        if (currentShipSelectPageNum < shipSelectPageNum)
        {
            shipSelectNextBtn.SetActive(true);
        }
        else
            shipSelectNextBtn.SetActive(false);

        if (0 < currentShipSelectPageNum)
        {
            shipSelectPreviousBtn.SetActive(true);
        }
        else
            shipSelectPreviousBtn.SetActive(false);
    }
}
