using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/ArmorUp", order = int.MaxValue)]
public class ShipPlateUpgrade : UpgradeModuleScripableObject
{
    public static readonly float[] shipPlateValue = { 1, 2, 4, 8, 16 };

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("방어력 증가 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        MonoBehaviour.print("방어력 증가 스탯 적용해제");
    }
}
