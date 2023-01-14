using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/MaxHp", order = int.MaxValue)]
public class MaxHpUpModule : UpgradeModuleScripableObject
{
    public static readonly float[] maxHpValue = { 50, 100, 150, 200, 250 };

    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        player.module_MaxHp.AddFloatModifier(maxHpValue[(int)tier]);

        MonoBehaviour.print("최대 체력 증가 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("최대 체력 증가 스탯 적용해제");
    }
}
