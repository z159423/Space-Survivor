using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

public class MessageUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI message;
    [SerializeField] private Button okBtn;

    public void Init(string localizeTable, string localizeKey, Action onClickOk)
    {
        LocalizeManager.CallLocalizedString(message, localizeTable, localizeKey);
        okBtn.onClick.AddListener(() =>
        {
            onClickOk.Invoke();
            Destroy(gameObject);
        });
    }
}
