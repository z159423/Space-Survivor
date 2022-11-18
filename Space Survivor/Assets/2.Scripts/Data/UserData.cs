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

    public List<int> clearedStageNumber = new List<int>();
}
