using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ModuleUnboxingUI : MonoBehaviour
{
    [SerializeField] Image background;
    [SerializeField] Transform moduleLayoutParent;
    [SerializeField] RectTransform moduleLayoutRect;
    [SerializeField] RectTransform trans1;

    List<GameObject> moduleObjects = new List<GameObject>();

    public void Init(List<UpgradeModuleObject> modules)
    {
        var modulePrefab = Utility.GetResource<GameObject>("UI/AcquiredModuleNode");

        foreach (var obj in modules)
        {
            GameObject module = Instantiate(modulePrefab, moduleLayoutParent);

            moduleObjects.Add(module);
        }

        background.DOColor(new Color32(0, 0, 0, 220), 1f).OnComplete(() => { moduleLayoutRect.anchorMax = new Vector2(0.5f, 0.5f); moduleLayoutRect.anchorMin = new Vector2(0.5f, 0.5f); moduleLayoutRect.pivot = new Vector2(0.5f, 0.5f); moduleLayoutRect.DOAnchorPos(trans1.anchoredPosition, 1f).OnComplete(() => StartUnboxingModules(modules)); });
    }

    void StartUnboxingModules(List<UpgradeModuleObject> modules)
    {
        for (int i = 0; i < moduleObjects.Count; i++)
        {
            moduleObjects[i].GetComponentInChildren<ModuleItem>().InitModule(modules[i].GetUpgradeModuleObject(), ModuleItem.SlotType.inventory, onclick: OpenModuleDetail);
        }
    }

    void OpenModuleDetail(ModuleItem item)
    {
        var detail = Resources.Load<GameObject>("UI/ModuleDetail");
        var obj = Instantiate(detail, GameManager.instance.MainUIParent);
        obj.GetComponent<ModuleDetailUI>().Init(item);
    }

}
