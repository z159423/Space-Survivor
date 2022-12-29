using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[System.Serializable]
public class UserData
{
    public int crystal = 0;

    public string testString = "";

    public bool RemoveAds = false;

    public List<ShipObjectData> playerHaveShip = new List<ShipObjectData>();

    public string usingShipTrialTime = "2000-01-01 01:01:01";
    public string usingFreeCrystalTime = "2000-01-01 01:01:01";

    public string version;

    public List<int> clearedStageNumber = new List<int>();

    public List<UpgradeModuleObject> equipedModules = new List<UpgradeModuleObject>();

    public List<UpgradeModuleObject> moduleInventory = new List<UpgradeModuleObject>();

    /// <summary>
    /// 코드로 소지한 함선 가져오기
    /// </summary>
    public ShipObjectData GetShipDataFromPlayerHaveShip(string code)
    {
        foreach (ShipObjectData data in playerHaveShip)
        {
            if (data.shipCode.Equals(code))
                return data;
        }

        Debug.LogWarning(code + " 이 코드에 해당하는 소지중인 함선이 없습니다.");

        foreach (ShipObject ship in GameManager.instance.shipList.shipList)
        {
            if (ship.shipObjectData.shipCode.Equals(code))
                return ship.shipObjectData;
        }

        return playerHaveShip[0];
    }
}
