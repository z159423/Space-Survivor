using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/RotationSpeed", order = int.MaxValue)]
public class RotationSpeedModule : UpgradeModuleScripableObject
{

    public static readonly float[] rotationValue = { 0.15f, 0.3f, 0.45f, 0.6f, 0.75f };

    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        player.module_RotationSpeed.AddFloatModifier(rotationValue[(int)tier]);

        MonoBehaviour.print("회전속도증가 모듈 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("회전속도증가 스탯 적용해제");
    }
}
