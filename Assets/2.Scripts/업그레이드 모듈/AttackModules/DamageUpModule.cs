using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/DamageUpModule", order = int.MaxValue)]
public class DamageUpModule : UpgradeModuleObject
{
    public static readonly int[] damageUpValues = {2, 4, 8, 16, 25};

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {
        playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);
    }
}
