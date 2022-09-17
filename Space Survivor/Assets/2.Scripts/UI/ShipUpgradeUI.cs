using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Localization;
using UnityEngine.ResourceManagement.AsyncOperations;

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

    [Space]

    public ShipUpgradeSlot[] shipUpgradeSlot;

    [Space]

    public GameObject upgradeNode;
    public GameObject shipUpgradeSelectSlot;
    public Transform shipUpgradeSelectSlotParent;
    public ShipList shipList;

    private void OnEnable()
    {
        if (currentShipObject == null)
            currentShipObject = GameManager.instance.currentShip;

        SelectShip(currentShipObject);
    }

    private void Start()
    {
        for (int i = 0; i < shipList.shipList.Count; i++)
        {
            var slot = Instantiate(shipUpgradeSelectSlot, shipUpgradeSelectSlotParent);
            slot.GetComponent<ShipUpgradeSelectSlot>().InitShip(shipList.shipList[i], this);
        }
    }

    public void SelectShip(ShipObject shipObject)
    {
        currentShipObject = shipObject;

        shipImage.sprite = shipObject.shipImage;

        hpStat.text = shipObject.baseMaxHp.GetBaseValue().ToString();
        damageStat.text = shipObject.baseDamage.GetBaseValue().ToString();
        speedStat.text = shipObject.baseMoveSpeed.GetBaseValue().ToString();

        for (int i = 0; i < shipObject.shipUpgradeModuleList.Count; i++)
        {
            if (shipObject.shipUpgradeModuleList[i].currentUpgrade > 0)
            {
                switch (shipObject.shipUpgradeModuleList[i].upgradeType)
                {
                    case ShipUpgradeType.Health:
                        hpStat.text = hpStat.text + "(" + (shipObject.shipUpgradeModuleList[i].currentUpgrade * shipObject.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                        break;

                    case ShipUpgradeType.Damage:
                        damageStat.text = damageStat.text + "(" + (shipObject.shipUpgradeModuleList[i].currentUpgrade * shipObject.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                        break;

                    case ShipUpgradeType.Speed:
                        speedStat.text = speedStat.text + "(" + (shipObject.shipUpgradeModuleList[i].currentUpgrade * shipObject.shipUpgradeModuleList[i].statUpgradeValueForLevel).ToString() + ")";
                        break;
                }
            }

            SetUpgradeSlots(shipObject.shipUpgradeModuleList[i], shipObject);
            
        }

        if (UserDataManager.instance.CheckPlayerHaveShip(shipObject.shipCode))
        {
            shipUnlockButton.SetActive(false);
        }
        else
        {
            shipUnlockButton.SetActive(true);
        }

        StartCoroutine(ChangeShipNameText());

        IEnumerator ChangeShipNameText()
        {
            var keyName = shipObject.shipCode;

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

    private void SetUpgradeSlots(ShipUpgradeModules modules, ShipObject currentShipObject)
    {
        for (int i = 0; i < shipUpgradeSlot.Length; i++)
        {
            if (shipUpgradeSlot[i].upgradeType == modules.upgradeType)
            {
                shipUpgradeSlot[i].shipObject = currentShipObject;

                int upgradeCost = modules.currentUpgrade * modules.upgradeCostForLevel;
                shipUpgradeSlot[i].upgradeCostText.text = upgradeCost.ToString();

                if (UserDataManager.instance.currentUserData.crystal >= upgradeCost)
                    shipUpgradeSlot[i].upgradeButton.SetActive(true);
                else
                    shipUpgradeSlot[i].upgradeButton.SetActive(false);

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
}
