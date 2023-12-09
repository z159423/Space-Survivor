using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Crashlytics;
using UnityEngine.SceneManagement;
// using Firebase.Analytics;
using Firebase.Extensions;

public class FirebaseInit : MonoBehaviour
{
    // Start is called before the first frame update

    FirebaseApp _app;

    bool ready = false;

    void Start()
    {
        this.TaskWaitUntil(() => SceneManager.LoadScene("MainScene"), () => ready);

        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            if (task.Result == DependencyStatus.Available)
            {
                _app = FirebaseApp.DefaultInstance;

                // FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLogin);

                Crashlytics.IsCrashlyticsCollectionEnabled = true;

                print("Firebase dependencies 연동 선공 + " + task.Result);

                ready = true;

            }
            else
            {
                Debug.LogError("Firebase dependencies failed + " + task.Result);

                ready = true;
            }
        });
    }


    IEnumerator wait()
    {
        yield return new WaitForSeconds(2f);
        SceneManager.LoadScene("MainScene");
        throw new System.Exception("test exception please ignore");
    }
}
