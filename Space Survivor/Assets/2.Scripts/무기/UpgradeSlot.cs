using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpgradeSlot : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI moduleName;
    [SerializeField] private TextMeshProUGUI moduleDetail;
    [SerializeField] private TextMeshProUGUI moduleLevel;

    [Space]

    public WeaponObject weaponObject;

    public void InitSlot(WeaponObject weaponObject)
    {
        this.weaponObject = weaponObject;

        moduleName.text = weaponObject.type.ToString();

        if(LevelUpManager.instance.RequestPlayerWeapon(weaponObject.type) == null)
        {
            moduleLevel.text = "새로운 무기!";
        }
        else
        {
            moduleLevel.text = LevelUpManager.instance.RequestWeaponLevel(weaponObject.type).ToString() + "/" + LevelUpManager.instance.RequestMaxWeaponLevel(weaponObject.type).ToString();
        }
    }

    public void SelectUpgrade()
    {
        LevelUpManager.instance.SelectUpgrade(weaponObject);
    }
}
