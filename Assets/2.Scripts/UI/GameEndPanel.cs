using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine.UI;

public class GameEndPanel : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI gameOverText;

    [SerializeField] private RectTransform crystalGainCount;
    [SerializeField] private TextMeshProUGUI crystalGainCountText;

    [SerializeField] private RectTransform killCount;
    [SerializeField] private TextMeshProUGUI killCountText;

    [SerializeField] private RectTransform moduleAcquired;

    [SerializeField] private RectTransform trans1;
    [SerializeField] private RectTransform trans2;
    [SerializeField] private RectTransform trans3;

    [SerializeField] private GameObject crystalBonusRVBtn;

    [SerializeField] private Transform moduleAcquiredListParent;

    public List<UpgradeModuleObject> Dummy_getUpgradeModuleOnThisStage = new List<UpgradeModuleObject>();

    private void Start()
    {
        RewardedInterstitialAdCaller.instance.crystalBonusRVBtn = crystalBonusRVBtn;

        crystalBonusRVBtn.GetComponentInChildren<Button>().onClick.AddListener(() => RewardedInterstitialAdCaller.instance.WatchRewardAds_CrystalDouble());
    }

    public void StartEndMenuAnimation(bool die)
    {
        // foreach (UpgradeModuleObject module in UpgradeModuleDropManager.instance.getUpgradeModuleOnThisStage)
        // {
        //     UpgradeModuleManager.instance.GetNewModule(module);
        // }

        UpgradeModuleDropManager.instance.OptainModules();

        title(die);
    }

    void title(bool die)
    {
        if (die)
        {
            gameOverText.text = "Game Over";
        }
        else
            gameOverText.text = "Stage Clear";

        gameOverText.DOFade(1f, 1f).OnComplete(() =>
        {
            CrystalCountShow();
        });
    }

    void CrystalCountShow()
    {
        crystalGainCount.pivot = new Vector2(0.5f, 0.5f);
        crystalGainCount.DOAnchorPos(trans1.anchoredPosition, 1f).OnComplete(() => { KillCountShow(); crystalCount(); });

        void crystalCount()
        {
            Utility.TextAnimation(crystalGainCountText, GameManager.instance.playerStat.currentCrystal);
        }
    }

    void KillCountShow()
    {
        killCount.pivot = new Vector2(0.5f, 0.5f);
        killCount.DOAnchorPos(trans2.anchoredPosition, 1f).OnComplete(() => { ModuleAcquired(); killCountStart(); });

        void killCountStart()
        {
            Utility.TextAnimation(killCountText, (int)GameManager.instance.currentKillCount);
        }
    }

    void ModuleAcquired()
    {
        moduleAcquired.pivot = new Vector2(0.5f, 0.5f);
        moduleAcquired.DOAnchorPos(trans3.anchoredPosition, 1f).OnComplete(() => { StartCoroutine(modulesGenerate()); });

        IEnumerator modulesGenerate()
        {
            var modulePrefab = Utility.GetResource<GameObject>("UI/AcquiredModuleNode") as GameObject;

            foreach (UpgradeModuleObject modules in UpgradeModuleDropManager.instance.getUpgradeModuleOnThisStage)
            {
                var node = Instantiate(modulePrefab, moduleAcquiredListParent);

                node.GetComponentInChildren<ModuleItem>().InitModule(modules.GetUpgradeModuleObject(), ModuleItem.SlotType.inventory);

                node.transform.GetChild(0).DOScale(new Vector3(1, 1, 1), 0.7f);

                yield return new WaitForSeconds(0.7f);
            }
        }
    }
}
