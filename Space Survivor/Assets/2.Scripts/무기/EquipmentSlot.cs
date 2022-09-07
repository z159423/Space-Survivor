using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EquipmentSlot : MonoBehaviour
{
    public IEquipment weaponObject;
    [SerializeField] private Image weaponImage;

    [Space]

    [SerializeField] private Transform weaponUpgradeNodeParent;
    [SerializeField] private GameObject weaponUpgradeNode;
    public WeaponCoolTimeImage weaponCoolTimeImage;

    public void SetEquipment(IEquipment weapon)
    {
        weaponObject = weapon;
        weaponImage.sprite = weapon.GetEquipmentIamge();
    }

    public void AddUpgradeNode()
    {
        Instantiate(weaponUpgradeNode, weaponUpgradeNodeParent);
    }
}
