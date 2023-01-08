using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSpeedModule : UpgradeModuleObject
{
    public static readonly float[] moveSpeedValue = { 0.15f, 0.25f, 0.3f, 0.4f, 0.5f };

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(shipPlateValue[(int)tier]);

        MonoBehaviour.print("방어력 업 스탯 적용됨");
    }

    public override float GetModuleStat(int tier)
    {
        return moveSpeedValue[tier];
    }

    public override void UnapplyUpgradeModule()
    {

    }

    public override void TierUpThisModule()
    {

    }
}
