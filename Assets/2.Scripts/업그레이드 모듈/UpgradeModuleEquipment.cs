using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpgradeModuleEquipment : MonoBehaviour
{
    [field: SerializeField] public ModuleEquipData data { get; private set; }

    [field: SerializeField] public Transform[] equipSlots = new Transform[ModuleEquipData.UPGRADE_MODULE_EQUIP_MAX_COUNT];

    public void SlotsInit()
    {
        for (int i = 0; i < data.equipItems.Count; i++)
        {

        }
    }

    public void OnClickSlot(int slotCount)
    {
        if (slotCount < 0 || slotCount > data.equipItems.Count)
            return;

        if (data.equipItems[slotCount] == null)
            return;

        
    }
}
