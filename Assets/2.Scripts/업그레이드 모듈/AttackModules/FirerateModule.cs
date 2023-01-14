using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/Firerate", order = int.MaxValue)]
public class FirerateModule : UpgradeModuleScripableObject
{
    public static readonly float[] firerateValue = { 0.15f, 0.25f, 0.3f, 0.4f, 0.5f };

    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        player.module_Firerate.AddFloatModifier(firerateValue[(int)tier]);

        MonoBehaviour.print("발사속도 증가 스탯 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("발사속도 증가 스탯 적용해제");
    }
}
