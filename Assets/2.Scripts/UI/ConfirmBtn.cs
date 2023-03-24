using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ConfirmBtn : MonoBehaviour
{
    [SerializeField] Button button;

    public void Show()
    {
        button.GetComponentInChildren<CanvasGroup>().DOFade(1f, 1f).OnComplete(() => button.enabled = true);
    }
}
