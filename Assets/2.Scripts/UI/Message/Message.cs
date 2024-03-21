using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Message
{
    public static void GeneateMessage(Action onClickOk, Transform parent, string localizeTable, string localizeKey)
    {
        var ui = MonoBehaviour.Instantiate(Resources.Load<GameObject>("UI/Message"), parent).GetComponentInChildren<MessageUI>();

        ui.Init(localizeTable, localizeKey, onClickOk);
    }
}
