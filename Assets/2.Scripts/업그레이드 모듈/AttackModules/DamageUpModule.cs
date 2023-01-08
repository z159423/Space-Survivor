using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/DamageUpModule", order = int.MaxValue)]
public class DamageUpModule : UpgradeModuleObject
{

    public static readonly float[] damageUpValues = { 2, 4, 8, 16, 25 };

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {
        playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("데미지업 모듈 스탯 적용됨");
    }

    public override float GetModuleStat(int tier)
    {
        return damageUpValues[tier];
    }

    public override void UnapplyUpgradeModule()
    {

    }

    public override void TierUpThisModule()
    {

    }
}
