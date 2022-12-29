using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class UpgradeModuleObject : IUpgradeModule
{
    [field: SerializeField] public UpgradeModuleType type {get; private set;}
    [field: SerializeField] public UpgradeModuleTier tier {get; private set;}

    public static readonly int[] sellCosts = {8, 20, 50, 80, 200};

    /// <summary>
    /// 플레이어에 현재 장착중인 모듈 효과 적용
    /// </summary>
    public virtual void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {

    }

    
    public virtual void UnapplyUpgradeModule()
    {
        
    }

    /// <summary>
    /// 모듈 티어업
    /// </summary>
    public virtual void TierUpThisModule()
    {

    }
}

public enum UpgradeModuleType { AttackType, DefenceType, MovementType, SpecialType}

public enum UpgradeModuleTier { Normal = 1, Magic = 2 ,Rare = 3, Unique = 4, Legendary = 5}