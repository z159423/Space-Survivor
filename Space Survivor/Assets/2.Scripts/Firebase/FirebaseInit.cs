using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Analytics;
using Firebase.Extensions;

public class FirebaseInit : MonoBehaviour
{
    // Start is called before the first frame update

    FirebaseApp _app;
    void Start()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            if(task.Result == DependencyStatus.Available)
            {
                _app = FirebaseApp.DefaultInstance;

                FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLogin);

                print("Firebase dependencies 연동 선공 + " + task.Result);
            }
            else
            {
                Debug.LogError("Firebase dependencies failed + " + task.Result);
            }
        });

        
    }
}
