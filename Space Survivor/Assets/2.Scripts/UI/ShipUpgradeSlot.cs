using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShipUpgradeSlot : MonoBehaviour
{
    public ShipUpgradeType upgradeType;

    public ShipObject shipObject;
    public List<GameObject> upgradeNodeList = new List<GameObject>();
    public Transform upgradeNodeParent;

    public TextMeshProUGUI upgradeCostText;
    public GameObject upgradeButton;
    public GameObject costPanel;
    public GameObject maxPanel;

    public ShipUpgradeUI shipUpgradeUI;

    public void OnClickShipModuleUpgrade()
    {
        ShipObjectData data = UserDataManager.instance.GetShipData_currentVersion(shipObject.shipCode);

        for (int i = 0; i < data.shipUpgradeModuleList.Count; i++)
        {
            if (data.shipUpgradeModuleList[i].upgradeType == upgradeType)
            {
                data.shipUpgradeModuleList[i].UpgradeThisModule(data);
            
                UserDataManager.instance.ChangeShipData(data);

                UserDataManager.instance.AddCrystalValue(-data.shipUpgradeModuleList[i].GetUpgradeCost());

                shipUpgradeUI.SetUpgradeModuleSlot(data, shipObject);
            }
        }
    }
}
