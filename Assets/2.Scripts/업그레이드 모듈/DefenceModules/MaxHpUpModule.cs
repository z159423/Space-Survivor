using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/MaxHp", order = int.MaxValue)]
public class MaxHpUpModule : UpgradeModuleScripableObject
{
    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("최대 체력 증가 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        MonoBehaviour.print("최대 체력 증가 스탯 적용해제");
    }
}
