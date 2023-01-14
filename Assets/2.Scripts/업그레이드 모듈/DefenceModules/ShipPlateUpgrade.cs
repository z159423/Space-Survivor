using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/ArmorUp", order = int.MaxValue)]
public class ShipPlateUpgrade : UpgradeModuleScripableObject
{
    public static readonly float[] armorValue = { 2, 4, 6, 8, 10 };

    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        player.module_Armor.AddFloatModifier(armorValue[(int)tier]);

        MonoBehaviour.print("방어력 증가 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("방어력 증가 스탯 적용해제");
    }
}
