using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeleteGPGSSaveBtn : MonoBehaviour
{
    [SerializeField] private Button btn;

    private void Awake()
    {
        btn.onClick.AddListener(GoogleCloud.instance.DelectWithCloud);
        btn.onClick.AddListener(UserDataManager.instance.DeleteUserData);
    }
}
