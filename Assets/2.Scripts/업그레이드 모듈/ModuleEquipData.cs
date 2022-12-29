using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ModuleEquipData
{
    public static readonly int UPGRADE_MODULE_EQUIP_MAX_COUNT = 3;

    [field : SerializeField] public UpgradeModuleType slotType {get; private set;}
    [field : SerializeField] public List<UpgradeModuleObject> equipItems = new List<UpgradeModuleObject>();

}

