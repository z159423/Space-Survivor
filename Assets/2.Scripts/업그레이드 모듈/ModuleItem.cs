using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModuleItem : MonoBehaviour
{
    [field: SerializeField] public IUpgradeModule module { get; private set; }

    [Space]

    [SerializeField] private Image moduleImage;
    [SerializeField] private Image coverImage;

    [field: SerializeField] public bool equip = false;
    [field: SerializeField] public bool inventory = false;


    public void OnClickThisModule()
    {
        UpgradeModuleManager.instance.OpenModuleUpgradeDetail(this);
    }

    public void InitModule(IUpgradeModule module, bool inventory = false, bool equip = false)
    {
        this.module = module;
        //moduleImage

        this.equip = equip;
        this.inventory = inventory;
    }
}
