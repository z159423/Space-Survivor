using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/MoveSpeed", order = int.MaxValue)]
public class MoveSpeedModule : UpgradeModuleScripableObject
{
    public static readonly float[] moveSpeedValue = { 0.15f, 0.25f, 0.3f, 0.4f, 0.5f };

    public override void ApplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        //playerWeapon.moduleDamage.AddFloatModifier(damageUpValues[(int)tier]);

        MonoBehaviour.print("이동속도 증가 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerWeapon playerWeapon, int tier)
    {
        MonoBehaviour.print("이동속도 증가 스탯 적용해제");
    }
}
