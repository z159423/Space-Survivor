using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SerializeField]
public interface IUpgradeModule
{
    /// <summary>
    /// 플레이어에 현재 장착중인 모듈 효과 적용
    /// </summary>
    public void ApplyUpgradeModule(PlayerWeapon playerWeapon);

    public void UnapplyUpgradeModule();

    /// <summary>
    /// 모듈 티어업
    /// </summary>
    public void TierUpThisModule();

    /// <summary>
    /// 모듈 스탯 가져오기
    /// </summary>
    public float GetModuleStat(int tier);

    public void SetModuleInfo(UpgradeModuleType type, UpgradeModules modules, UpgradeModuleTier tier, string key);

    public int GetSellCost();

    public UpgradeModuleObject GetUpgradeModuleObject();

    [SerializeField] public UpgradeModuleType type { get; }
    [SerializeField] public UpgradeModules module { get; }
    [SerializeField] public UpgradeModuleTier tier { get; }
    [SerializeField] public string key { get; }


    public static int[] sellCost { get; private set; }

}

public enum UpgradeModuleType {None, AttackType, DefenceType, MovementType, SpecialType }

public enum UpgradeModules {None, DamageUp, ArmorUp, MovespeedUp }

public enum UpgradeModuleTier {None = 0, Normal = 1, Magic = 2, Rare = 3, Unique = 4, Legendary = 5 }