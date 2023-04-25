using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DeleteGPGSSaveBtn : MonoBehaviour
{
    [SerializeField] private Button btn;

    private void Awake()
    {
        // btn.onClick.AddListener(GoogleCloud.instance.DelectWithCloud);
        // btn.onClick.AddListener(UserDataManager.instance.DeleteUserData);

        btn.onClick.AddListener(() =>
        {
            var ui = Resources.Load<GameObject>("UI/DeleteSaveUI");
            var obj = Instantiate(ui, GameManager.instance.MainUIParent);
        });


    }
}
