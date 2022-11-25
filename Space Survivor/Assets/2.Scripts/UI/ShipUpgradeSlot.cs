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
        //로컬 데이터
        ShipObjectData data = UserDataManager.instance.GetShipData(shipObject.shipObjectData.shipCode);
        //최신 버전의 데이터
        ShipObjectData data_lastestVersion = UserDataManager.instance.GetShipData_currentVersion(shipObject.shipObjectData.shipCode);

        for (int i = 0; i < data.shipUpgradeModuleList.Count; i++)
        {
            if (data.shipUpgradeModuleList[i].upgradeType == upgradeType)
            {
                //로컬에 있는 함선 업그레이드
                data.UpgradeShipData(upgradeType, data_lastestVersion);

                data.shipUpgradeModuleList[i].UpgradeThisModule(data);

                UserDataManager.instance.ChangeShipData(data);

                UserDataManager.instance.AddCrystalValue(-data.shipUpgradeModuleList[i].GetUpgradeCost());

                shipUpgradeUI.SetUpgradeModuleSlot(data, shipObject);
            }
        }
    }
}
