using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine.UI;
using System.Linq;

public class ModuleDetailUI : MonoBehaviour
{
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Name;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Tier;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Stat_Normal;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Stat_Magic;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Stat_Rare;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Stat_Unique;
    [FoldoutGroup("참조")][SerializeField] private TextMeshProUGUI detail_Stat_Legendary;

    [FoldoutGroup("참조")][SerializeField] private Image detail_SlotCover;
    [FoldoutGroup("참조")][SerializeField] private Image detail_ModuleImage;

    [FoldoutGroup("참조")][SerializeField] private Button closeBtn;
    [FoldoutGroup("참조")][SerializeField] private Button black;



    [FoldoutGroup("detail")][SerializeField] private Color detail_NormalColor;
    [FoldoutGroup("detail")][SerializeField] private Color detail_MagicColor;
    [FoldoutGroup("detail")][SerializeField] private Color detail_RareColor;
    [FoldoutGroup("detail")][SerializeField] private Color detail_UniqueColor;
    [FoldoutGroup("detail")][SerializeField] private Color detail_LegendaryColor;

    private void Start()
    {
        closeBtn.onClick.AddListener(() => Destroy(gameObject));
        black.onClick.AddListener(() => Destroy(gameObject));
    }

    public void Init(ModuleItem item)
    {
        var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
        var find = scriptableObjects.Find(f => f.ID == (int)item.module.module);

        if (find == null)
        {
            Debug.LogError("해당 모듈을 찾지 못했습니다. id : " + (int)item.module.module);
            return;
        }

        Utility.SetLocalizeTextAsync(detail_Name, "Module", (int)item.module.module + "_Name");
        Utility.SetLocalizeTextAsync(detail_Tier, "Module", item.module.tier.ToString());

        detail_SlotCover.sprite = GetUpgradeModuleCover(item.module.tier);
        detail_ModuleImage.sprite = GetUpgradeModuleImage((int)item.module.module);

        find.GetLocalizedModuleStatText(detail_Stat_Normal, 0);
        find.GetLocalizedModuleStatText(detail_Stat_Magic, 1);
        find.GetLocalizedModuleStatText(detail_Stat_Rare, 2);
        find.GetLocalizedModuleStatText(detail_Stat_Unique, 3);
        find.GetLocalizedModuleStatText(detail_Stat_Legendary, 4);

        if (item.module.tier == UpgradeModuleTier.Normal)
        {
            detail_Stat_Normal.color = Color.white;
            detail_Stat_Normal.GetComponentInChildren<Image>().color = Color.white;
            detail_Tier.color = detail_NormalColor;
        }
        else
        {
            detail_Stat_Normal.color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
            detail_Stat_Normal.GetComponentInChildren<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
        }

        if (item.module.tier == UpgradeModuleTier.Magic)
        {
            detail_Stat_Magic.color = Color.white;
            detail_Stat_Magic.GetComponentInChildren<Image>().color = Color.white;
            detail_Tier.color = detail_MagicColor;
        }
        else
        {

            detail_Stat_Magic.color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
            detail_Stat_Magic.GetComponentInChildren<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
        }

        if (item.module.tier == UpgradeModuleTier.Rare)
        {
            detail_Stat_Rare.color = Color.white;
            detail_Stat_Rare.GetComponentInChildren<Image>().color = Color.white;
            detail_Tier.color = detail_RareColor;
        }
        else
        {

            detail_Stat_Rare.color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
            detail_Stat_Rare.GetComponentInChildren<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
        }

        if (item.module.tier == UpgradeModuleTier.Unique)
        {
            detail_Stat_Unique.color = Color.white;
            detail_Stat_Unique.GetComponentInChildren<Image>().color = Color.white;
            detail_Tier.color = detail_UniqueColor;
        }
        else
        {
            detail_Stat_Unique.color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
            detail_Stat_Unique.GetComponentInChildren<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);

        }

        if (item.module.tier == UpgradeModuleTier.Legendary)
        {
            detail_Stat_Legendary.color = Color.white;
            detail_Stat_Legendary.GetComponentInChildren<Image>().color = Color.white;
            detail_Tier.color = detail_LegendaryColor;
        }
        else
        {

            detail_Stat_Legendary.color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
            detail_Stat_Legendary.GetComponentInChildren<Image>().color = new Color(255f / 255f, 255f / 255f, 255f / 255f, 40f / 255f);
        }
    }

    public Sprite GetUpgradeModuleCover(UpgradeModuleTier tier)
    {
        switch (tier)
        {
            case UpgradeModuleTier.Normal:
                return Resources.Load<Sprite>("UI/slot1");

            case UpgradeModuleTier.Magic:

                return Resources.Load<Sprite>("UI/slot2");
            case UpgradeModuleTier.Rare:

                return Resources.Load<Sprite>("UI/slot3");
            case UpgradeModuleTier.Unique:

                return Resources.Load<Sprite>("UI/slot4");
            case UpgradeModuleTier.Legendary:

                return Resources.Load<Sprite>("UI/slot5");

            default:
                UnityEngine.Debug.LogError("해당되는 티어 커버 이미지가 없습니다.");
                return null;
        }
    }

    public Sprite GetUpgradeModuleImage(int ID)
    {
        var scriptableObjects = Resources.LoadAll<UpgradeModuleScripableObject>("UpgradeModules").ToList();
        var find = scriptableObjects.Find(f => f.ID == ID);
        return find?.moduleIcon;
    }
}
