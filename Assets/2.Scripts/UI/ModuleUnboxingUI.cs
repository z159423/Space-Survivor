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

    [SerializeField] ConfirmBtn confirmBtn;

    // List<GameObject> moduleObjects = new List<GameObject>();

    public void Init(List<UpgradeModuleObject> modules, TextAnchor anchor)
    {
        if (modules.Count == 1)
            GetComponentInChildren<GridLayoutGroup>().cellSize = new Vector2(170, 170);

        background.DOColor(new Color32(0, 0, 0, 220), 1f).OnComplete(() =>
        {
            moduleLayoutRect.anchorMax = new Vector2(0.5f, 0.5f);
            moduleLayoutRect.anchorMin = new Vector2(0.5f, 0.5f);
            moduleLayoutRect.pivot = new Vector2(0.5f, 0.5f);
            moduleLayoutRect.DOAnchorPos(trans1.anchoredPosition, 1f).OnComplete(() => StartUnboxingModules(modules));
        });

        moduleLayoutParent.GetComponent<GridLayoutGroup>().childAlignment = anchor;

    }

    void StartUnboxingModules(List<UpgradeModuleObject> modules)
    {
        StartCoroutine(Animated());

        IEnumerator Animated()
        {
            var modulePrefab = Utility.GetResource<GameObject>("UI/AcquiredModuleNode");

            foreach (var obj in modules)
            {
                GameObject module = Instantiate(modulePrefab, moduleLayoutParent);

                module.GetComponentInChildren<ModuleItem>().InitModule(obj.GetUpgradeModuleObject(), ModuleItem.SlotType.inventory, onclick: ModuleItem.OpenModuleDetail);

                // VFXGenerator.instance.GenerateVFX(VFXType.UpgradeModuleUnboxing, module.transform.position + new Vector3(0, 0, -150));

                module.transform.GetChild(0).DOScale(new Vector3(1, 1, 1), 0.7f);

                AudioManager.instance.GenerateAudioAndPlaySFX("ModuleUnboxing", Vector3.zero, Random.Range(0.8f, 1.2f));

                yield return new WaitForSeconds(0.7f);
            }

            UpgradeModuleManager.instance.UpdateUI();
            confirmBtn.Show();
        }
    }

    public void Confirm()
    {
        Destroy(gameObject);
    }
}
