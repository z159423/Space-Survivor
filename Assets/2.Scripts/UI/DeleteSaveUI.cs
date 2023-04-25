using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DeleteSaveUI : MonoBehaviour
{
    public void DeleteSave()
    {
        Firebase.Analytics.FirebaseAnalytics.LogEvent("DeleteSave");

        UserDataManager.instance.DeleteUserData();
        ES3.DeleteFile();
        GoogleCloud.instance.DelectWithCloud(() => Application.Quit());

        Destroy(gameObject);

        AudioManager.instance.PlaySFX("click2");
    }

    public void CloseUI()
    {
        Destroy(gameObject);

        AudioManager.instance.PlaySFX("click2");
    }
}
