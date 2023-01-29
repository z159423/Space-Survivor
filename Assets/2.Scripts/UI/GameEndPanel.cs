using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using Sirenix.OdinInspector;

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

    public void StartEndMenuAnimation()
    {
        title();
    }

    void title()
    {
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
        moduleAcquired.DOAnchorPos(trans3.anchoredPosition, 1f).OnComplete(() => { modulesGenerate(); });

        void modulesGenerate()
        {

        }
    }
}
