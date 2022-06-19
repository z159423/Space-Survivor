using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeaponSlot : MonoBehaviour
{
    public WeaponObject weaponObject;
    [SerializeField] private Image weaponImage;

    [Space]

    [SerializeField] private Transform weaponUpgradeNodeParent;
    [SerializeField] private GameObject weaponUpgradeNode;

    public void SetWeapon(WeaponObject weapon)
    {
        weaponObject = weapon;
        weaponImage.sprite = weapon.weaponImage;
    }

    public void AddUpgradeNode()
    {
        Instantiate(weaponUpgradeNode, weaponUpgradeNodeParent);
    }
}
