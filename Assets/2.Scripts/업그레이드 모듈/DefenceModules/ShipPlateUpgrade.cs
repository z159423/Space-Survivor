using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipPlateUpgrade : UpgradeModuleObject
{
    public static readonly float[] shipPlateValue = { 1, 2, 4, 8, 16 };

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(shipPlateValue[(int)tier]);

        MonoBehaviour.print("방어력 업 스탯 적용됨");
    }

    public override float GetModuleStat(int tier)
    {
        return shipPlateValue[tier];
    }

    public override void UnapplyUpgradeModule()
    {

    }

    public override void TierUpThisModule()
    {

    }
}
