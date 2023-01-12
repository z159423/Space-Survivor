using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpgradeModuleEquipment : MonoBehaviour
{
    [field: SerializeField] public ModuleEquipData data { get; private set; }

    [Space]

    [SerializeField] private GameObject swapBlock;
    [SerializeField] private GameObject[] swapArrows;
    [SerializeField] private GameObject[] swapBtns;



    //[field: SerializeField] public Transform[] equipSlots = new Transform[ModuleEquipData.UPGRADE_MODULE_EQUIP_MAX_COUNT];

    public void SlotsInit()
    {
        //for (int i = 0; i < data.equipItems.Count; i++)
        //{

        //}
    }

    /// <summary>
    /// 모듈을 장착하는 함수, 남는 슬롯이 있으면 장착하고 모든 슬롯에 모듈이 장착중이면 교체할 모듈을 선택한다.
    /// </summary>
    public bool EquipModule(GameObject prefab, UpgradeModuleObject moduleObject)
    {
        if (moduleObject.type != data.slotType)
            return false;

        //장착 성공시
        for (int i = 0; i < data.equipItems.Length; i++)
        {
            if (data.equipItems[i] == null)
            {
                if (data.equipSlots[i].GetComponentInChildren<ModuleItem>() != null)
                {
                    Destroy(data.equipSlots[i].GetComponentInChildren<ModuleItem>());
                }

                var module = Instantiate(prefab, Vector3.zero, Quaternion.identity, data.equipSlots[i]).GetComponent<ModuleItem>();
                module.transform.localPosition = Vector3.zero;

                data.equipItems[i] = module;

                module.InitModule(moduleObject, equip: true);

                return true;
            }
        }

        //해당 슬롯에 자리가 없으므로 장착중인 모듈중에 자리를 교체할 모듈을 선택하는 플로우


        return false;
    }

    public bool EquipModuleAsNumber(GameObject prefab, UpgradeModuleObject moduleObject, int num)
    {
        if (moduleObject.type != data.slotType)
            return false;

        if (data.equipItems[num] == null)
        {
            if (data.equipSlots[num].GetComponentInChildren<ModuleItem>() != null)
            {
                Destroy(data.equipSlots[num].GetComponentInChildren<ModuleItem>());
            }

            var module = Instantiate(prefab, Vector3.zero, Quaternion.identity, data.equipSlots[num]).GetComponent<ModuleItem>();
            module.transform.localPosition = Vector3.zero;

            data.equipItems[num] = module;

            module.InitModule(moduleObject, equip: true);

            return true;
        }
        else
            return false;
    }

    public void SwapModeOn()
    {
        swapBlock.SetActive(true);

        for (int i = 0; i < swapArrows.Length; i++)
        {
            swapArrows[i].SetActive(true);
        }

        for (int i = 0; i < swapBtns.Length; i++)
        {
            swapBtns[i].transform.SetAsLastSibling();
            swapBtns[i].SetActive(true);
        }
    }

    public void SwapModeOff()
    {
        swapBlock.SetActive(false);

        for (int i = 0; i < swapArrows.Length; i++)
        {
            swapArrows[i].SetActive(false);
        }

        for (int i = 0; i < swapBtns.Length; i++)
        {
            swapBtns[i].SetActive(false);
        }
    }

    public void ClearItems()
    {
        for (int i = 0; i < data.equipItems.Length; i++)
        {
            if (data.equipItems[i] != null)
            {
                Destroy(data.equipItems[i].gameObject);

                data.equipItems[i] = null;
            }
        }
    }
}
