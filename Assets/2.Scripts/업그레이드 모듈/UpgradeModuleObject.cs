using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class UpgradeModuleObject : IUpgradeModule
{
    [field: SerializeField] public UpgradeModuleType type { get; private set; }
    [field: SerializeField] public UpgradeModules module { get; private set; }
    [field: SerializeField] public UpgradeModuleTier tier { get; private set; }
    [field: SerializeField] public string key { get; private set; }

    public static readonly int[] sellCosts = { 8, 20, 50, 80, 200 };

    /// <summary>
    /// 플레이어에 현재 장착중인 모듈 효과 적용
    /// </summary>
    public virtual void ApplyUpgradeModule(PlayerWeapon playerWeapon)
    {
        Debug.LogError("기본 모듈 효과 적용 함수 발동");
    }


    public virtual void UnapplyUpgradeModule()
    {
        Debug.LogError("기본 모듈 장착해제 함수 발동");
    }

    /// <summary>
    /// 모듈 티어업
    /// </summary>
    public virtual void TierUpThisModule()
    {
        Debug.LogError("기본 모듈 티어업 함수 발동");
    }

    public virtual float GetModuleStat(int tier)
    {
        return 0;
    }

    public void SetModuleInfo(UpgradeModuleType type, UpgradeModules modules, UpgradeModuleTier tier, string key)
    {
        this.type = type;
        this.module = modules;
        this.tier = tier;
        this.key = key;
    }

    public UpgradeModuleObject GetUpgradeModuleObject()
    {
        return this;
    }
}

