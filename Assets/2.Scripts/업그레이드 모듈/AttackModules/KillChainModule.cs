using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/KillChain", order = int.MaxValue)]
public class KillChainModule : UpgradeModuleScripableObject
{
    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("데미지업 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        MonoBehaviour.print("데미지업 모듈 스탯 적용해제");
    }
}
