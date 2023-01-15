using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class ModuleItem : MonoBehaviour
{
    [field: SerializeField] public IUpgradeModule module { get; private set; }

    [Space]

    [SerializeField] private Image moduleImage;
    [SerializeField] private Image coverImage;
    [field: SerializeField] public Image moduleUpgradeCoverImage { get; private set; }

    [field: SerializeField] public bool equip = false;
    [field: SerializeField] public bool inventory = false;


    public void OnClickThisModule()
    {
        UpgradeModuleManager.instance.OpenModuleUpgradeDetail(this);
    }

    public void InitModule(IUpgradeModule module, bool inventory = false, bool equip = false)
    {
        this.module = module;

        UpdateImage();

        this.equip = equip;
        this.inventory = inventory;
    }

    public void UpdateImage()
    {
        var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
        var find = scriptableObjects.Find(f => f.ID == (int)module.module);
        moduleImage.sprite = find?.moduleIcon;
    }

    public void UpgradeModuleSelect()
    {
        if (UpgradeModuleManager.instance.SelectModuleUpgradeSlot(this))
        {
            moduleUpgradeCoverImage.color = Color.yellow;
        }
        else
        {
            moduleUpgradeCoverImage.color = Color.white;
        }
    }
}
