using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class ModuleUpgradeUI : MonoBehaviour
{
    [SerializeField] CanvasGroup canvasGroup;
    [SerializeField] Transform[] modules;
    [SerializeField] Transform endPoint;

    [SerializeField] ModuleItem resultModule;
    [SerializeField] Transform resultTrans;
    [SerializeField] ConfirmBtn confirmBtn;

    [SerializeField] AnimationCurve curve;


    public void StartUpgrade(List<UpgradeModuleObject> module)
    {
        for (int i = 0; i < modules.Length; i++)
        {
            modules[i].GetComponentInChildren<ModuleItem>().InitModule(module[i], ModuleItem.SlotType.equip, true);
        }

        canvasGroup.DOFade(1f, 1.3f).OnComplete(() =>
        {
            StartCoroutine(Process());
        });

        IEnumerator Process()
        {
            foreach (var m in modules)
            {
                m.DOMove(endPoint.position, 1.2f).SetEase(curve).OnComplete(() => m.gameObject.SetActive(false));
            }

            yield return new WaitForSeconds(1.2f);

            var result = UpgradeModuleManager.instance.GenerateRandomModule((int)module[0].tier, (int)module[0].type);

            resultModule.InitModule(result, ModuleItem.SlotType.equip, onclick: ModuleItem.OpenModuleDetail);
            resultModule.GetComponentInChildren<Button>().enabled = true;

            resultTrans.DOScale(new Vector3(1, 1, 1), 0.6f);

            yield return new WaitForSeconds(1.5f);

            confirmBtn.Show();
        }
    }

    public void CloseUI()
    {
        Destroy(gameObject);
    }


}
