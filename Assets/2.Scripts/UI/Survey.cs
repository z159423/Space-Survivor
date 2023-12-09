using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Survey : MonoBehaviour
{
    void Start()
    {
        if (ES3.KeyExists("IsCompleteSurvey") || UserDataManager.instance.currentUserData.Survey)
            gameObject.SetActive(false);
    }

    public void OnClickSurveyButton()
    {
        Firebase.Analytics.FirebaseAnalytics.LogEvent("OnClickSurveyButton");

        var ui = Resources.Load<GameObject>("UI/SurveyUI");
        var obj = Instantiate(ui, GameManager.instance.MainUIParent);
        obj.GetComponentInChildren<SurveyUI>().SurveyBtn.onClick.AddListener(() =>
        {
            OnStartSurvey();
            Destroy(obj);
        });
    }

    public void OnStartSurvey()
    {
        ES3.Save("IsCompleteSurvey", true);
        UserDataManager.instance.currentUserData.Survey = true;

        gameObject.SetActive(false);


        switch (Application.systemLanguage)
        {
            case SystemLanguage.English:
                Application.OpenURL("https://forms.gle/KQ1ZsQdS2Ygg6KkE8");
                break;

            case SystemLanguage.Korean:
                Application.OpenURL("https://forms.gle/zdZaUb7mWA8ejJzV7");
                break;

            default:
                Application.OpenURL("https://forms.gle/KQ1ZsQdS2Ygg6KkE8");

                break;
        }

        UserDataManager.instance.AddCrystalValue(200);

        List<UpgradeModuleObject> newModules = new List<UpgradeModuleObject>();
        for (int i = 0; i < 5; i++)
        {
            var newModule = UpgradeModuleManager.instance.GenerateRandomModule();
            UserDataManager.instance.currentUserData.moduleInventory.Add(newModule);
            newModules.Add(newModule);
        }

        AudioManager.instance.PlaySFX("click2");

        ModulePurchaseUI.OpenModuleBoxUnboxingUI(newModules, TextAnchor.UpperLeft);

        Firebase.Analytics.FirebaseAnalytics.LogEvent("StartSurvey");
    }
}
