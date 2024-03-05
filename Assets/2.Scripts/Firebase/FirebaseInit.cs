using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Crashlytics;
using UnityEngine.SceneManagement;
// using Firebase.Analytics;
using Firebase.Extensions;
using Firebase.Auth;
using Firebase.Database;
using Newtonsoft.Json;

public class FirebaseInit : MonoBehaviour
{
    // Start is called before the first frame update

    FirebaseApp _app;
    FirebaseAuth firebaseAuto;
    public FirebaseDatabase firebaseDatabase;

    public string userID;


    bool ready = false;

    public static FirebaseInit instance;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        this.TaskWaitUntil(() => SceneManager.LoadScene("MainScene"), () => ready == true);

        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            if (task.Result == DependencyStatus.Available)
            {
                _app = FirebaseApp.DefaultInstance;

                // FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLogin);

                firebaseAuto = FirebaseAuth.DefaultInstance;

                Crashlytics.IsCrashlyticsCollectionEnabled = true;

                firebaseDatabase = FirebaseDatabase.DefaultInstance;
                firebaseDatabase.SetPersistenceEnabled(false);

                print("Firebase dependencies 연동 선공 + " + task.Result);

                
            }
            else
            {
                Debug.LogError("Firebase dependencies failed + " + task.Result);

            }
        });
    }

    public void Login_Anonymouse()
    {
        firebaseAuto.SignInAnonymouslyAsync().ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInAnonymouslyAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
                return;
            }

            Firebase.Auth.FirebaseUser result = task.Result;

            userID = result.UserId;

            print("<color=green>[Firebase Login]</color> Authentication User ID : " + userID);

            OnSuccessLogin();
        });
    }

    void OnSuccessLogin()
    {
        LoadFromFirebase(() => ready = true);
    }

    public void LoadFromFirebase(System.Action onLoadComplete = null)
    {
        string os;

#if UNITY_ANDROID
        os = "AOS";
#endif

#if UNITY_IOS
        os = "IOS";
#endif

        print(userID);

        firebaseDatabase.GetReference("User").Child(userID).GetValueAsync().ContinueWithOnMainThread(task =>
        {
            if (task.IsFaulted)
            {
                // Debug.LogError("Load firebase Save Failed");
                Debug.Log("<color=blue>[Firebase]</color> 해당 User의 userID가 없어 로컬데이터를 불러옵니다.");

                UserDataManager.instance.LoadCurrentUserDataFromLocal();
                onLoadComplete?.Invoke();
            }
            else if (task.IsCompleted)
            {
                DataSnapshot snapshot = task.Result;

                // for (int i = 0; i < snapshot.ChildrenCount; i++)
                // Debug.Log(snapshot.Child(i.ToString()).Child("username").Value);

                // print(snapshot.Value.ToString());

                Debug.Log("<color=blue>[Firebase]</color> 해당 User의 데이터를 불러왔습니다.");
                print(task.Result.Exists);


                foreach (var data in snapshot.Children)
                {
                    print(data.Value.ToString());
                }

                if (task.Result.Exists)
                {
                    print(snapshot.Value.ToString());
                    // var userData = JsonConvert.DeserializeObject<UserData>(JsonUtility.ToJson(snapshot.Value.ToString()));
                    UserDataManager.instance.currentUserData = JsonConvert.DeserializeObject<UserData>(snapshot.Value.ToString());
                    // print(JsonUtility.ToJson(userData));
                    // UserDataManager.instance.currentUserData = JsonUtility.FromJson<UserData>(snapshot.Value.ToString());

                    // UserDataManager.instance.LoadDataSnap(snapshot);

                    onLoadComplete?.Invoke();
                }
                else
                {
                    Debug.LogError(2);


                    onLoadComplete?.Invoke();

                }

            }
        });
    }

}
