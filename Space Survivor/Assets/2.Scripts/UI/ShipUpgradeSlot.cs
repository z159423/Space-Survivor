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

    public void OnClickShipModuleUpgrade()
    {
        for (int i = 0; i < shipObject.shipUpgradeModuleList.Count; i++)
        {
            if (shipObject.shipUpgradeModuleList[i].upgradeType == upgradeType)
                shipObject.shipUpgradeModuleList[i].UpgradeThisModule();

        }
    }
}
