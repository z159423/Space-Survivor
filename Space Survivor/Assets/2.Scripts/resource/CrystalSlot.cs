using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalSlot : MonoBehaviour
{

    public int crystalValue = 100;
    
    public void SelectThis()
    {
        LevelUpManager.instance.playerStat.GetCrystal(crystalValue);
        LevelUpManager.instance.EndUpgrade();
    }
}
