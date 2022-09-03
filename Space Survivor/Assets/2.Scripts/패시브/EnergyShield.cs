using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new EnergyShield Stat", menuName = "Scriptable Object/Equipment/New EnergyShield Stat", order = int.MaxValue)]
public class EnergyShield : ScriptableObject, IPassiveEquipment
{


    public float invinsibleTime = 1f;
    public float shieldReloadTime = 5f;
    public int shieldStackAmount = 1;

    public GameObject shieldPrefab;
    public GameObject currentShieldObject;

    public void UpgradePassive(UpgradeModule upgradeModule)
    {

    }

    public void GetPassiveEffect(PlayerStat playerStat)
    {
        GiveShield(playerStat);
    }

    public IEnumerator StartWhilePassiveEffect()
    {
        yield return null;
    }

    private void GiveShield(PlayerStat playerStat)
    {
        if (playerStat.maxShieldStack < shieldStackAmount)
        {
            if(currentShieldObject == null)
            currentShieldObject = Instantiate(shieldPrefab, playerStat.transform);

            playerStat.GetShield(currentShieldObject);
        }
            
        //playerStat
    }

    public void SetCoroutine(Coroutine coroutine)
    {

    }

    public void ClearPassive()
    {
        
    }
}
