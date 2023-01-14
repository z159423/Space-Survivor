using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Module", menuName = "Scriptable Object/Upgrade Module/KillChain", order = int.MaxValue)]
public class KillChainModule : UpgradeModuleScripableObject
{
    public override void ApplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("킬체인 모듈 적용");
    }

    public override void UnapplyUpgradeModule(PlayerUpgradeModule player, int tier)
    {
        MonoBehaviour.print("킬체인 모듈 적용해제");
    }
}
