using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class ModuleUpgradeUI : MonoBehaviour
{
    [SerializeField] Transform[] modules;
    [SerializeField] Transform endPoint;

    [SerializeField] ModuleItem resultModule;
    [SerializeField] Button confirmBtn;


    public void StartUpgrade(UpgradeModuleObject[] module)
    {
        for (int i = 0; i < modules.Length; i++)
        {
            modules[i].GetComponentInChildren<ModuleItem>().InitModule(module[i], ModuleItem.SlotType.equip, true);
        }

        StartCoroutine(Process());

        IEnumerator Process()
        {
            foreach (var m in modules)
            {
                m.DOMove(endPoint.position, 1f).SetEase(Ease.InElastic);
            }

            yield return new WaitForSeconds(1f);

            var result = UpgradeModuleManager.instance.GenerateRandomModule((int)module[0].tier + 1, (int)module[0].type);

            resultModule.InitModule(result, ModuleItem.SlotType.equip);

            yield return new WaitForSeconds(1.5f);

            confirmBtn.GetComponentInChildren<CanvasGroup>().DOFade(1f, 1f).OnComplete(() => confirmBtn.enabled = true);
        }
    }


}
