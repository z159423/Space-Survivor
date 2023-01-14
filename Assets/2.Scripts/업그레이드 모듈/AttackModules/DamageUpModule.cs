using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/DamageUpModule", order = int.MaxValue)]
public class DamageUpModule : UpgradeModuleScripableObject
{
    public static readonly float[] damageUpValues = { 2, 4, 8, 16, 25 };

    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        player.module_Damage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("데미지업 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("데미지업 모듈 스탯 적용해제");
    }
}
