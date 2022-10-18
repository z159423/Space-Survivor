using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization;

public class CrystalSlot : MonoBehaviour
{

    public int crystalValue = 100;
    public string crystalString = "";

    private void Awake() {
        crystalString = crystalValue.ToString();
    }
    
    public void SelectThis()
    {
        LevelUpManager.instance.playerStat.GetCrystal(crystalValue);
        LevelUpManager.instance.EndUpgrade();
    }
}
