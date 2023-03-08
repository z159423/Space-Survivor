using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using DG.Tweening;

public class ModuleItem : MonoBehaviour
{
    public enum SlotType
    {
        inventory = 1,
        equip = 2
    }

    [field: SerializeField] public IUpgradeModule module { get; private set; }

    [Space]

    [SerializeField] private Image slotIamge;
    [SerializeField] private Image moduleImage;
    [SerializeField] private Image coverImage;
    [field: SerializeField] public Image moduleUpgradeCoverImage { get; private set; }
    [field: SerializeField] public SlotType slotType;

    [Space]

    [SerializeField] private Color defaultColor_equip;
    [SerializeField] private Color defaultColor_inventory;

    [SerializeField] private Color selectedColor;

    private Sequence sequence;


    public void OnClickThisModule()
    {
        UpgradeModuleManager.instance.OpenModuleUpgradeDetail(this);
    }

    public void InitModule(IUpgradeModule module, SlotType slotType, bool tweening = true)
    {
        this.module = module;
        this.slotType = slotType;

        UpdateImage(tweening);
        UnselectSlot();
    }

    public void UpdateImage(bool tweening = true)
    {
        moduleImage.sprite = UpgradeModuleManager.instance.GetUpgradeModuleImage((int)module.GetUpgradeModuleObject().module);
        coverImage.sprite = UpgradeModuleManager.instance.GetUpgradeModuleCover(module.GetUpgradeModuleObject().tier);

        if (tweening)
        {
            sequence
            .Append(moduleImage.transform.DOScale(new Vector3(1.25f, 1.25f, 1.25f), 0.15f).SetLoops(2, LoopType.Yoyo))
            .Append(coverImage.transform.DOScale(new Vector3(1.25f, 1.25f, 1.25f), 0.15f).SetLoops(2, LoopType.Yoyo))
            .SetLoops(1);
        }
    }

    public void UpgradeModuleSelect()
    {
        if (UpgradeModuleManager.instance.SelectModuleUpgradeSlot(this))
        {
            slotIamge.color = selectedColor;
        }
        else
        {
            UnselectSlot();
        }
    }

    public void UnselectSlot()
    {
        switch (slotType)
        {
            case SlotType.inventory:
                slotIamge.color = defaultColor_inventory;

                break;

            case SlotType.equip:
                slotIamge.color = defaultColor_equip;

                break;

            default:
                slotIamge.color = defaultColor_inventory;

                break;
        }
    }
}
