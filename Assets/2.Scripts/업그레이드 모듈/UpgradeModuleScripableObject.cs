using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "UpgradeModule", menuName = "Scriptable Object/UpgradeModule", order = int.MaxValue)]
public abstract class UpgradeModuleScripableObject : ScriptableObject
{
    [field: SerializeField] public int ID {get; private set;}

    [field: SerializeField] public UpgradeModuleType type { get; private set; }
    [field: SerializeField] public UpgradeModules module { get; private set; }

    [field: SerializeField] public Sprite moduleIcon {get; private set;}
    
    public abstract void ApplyUpgradeModule(PlayerWeapon playerWeapon, int tier);
    public abstract void UnapplyUpgradeModule(PlayerWeapon playerWeapon, int tier);
}
