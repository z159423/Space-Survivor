using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Firebase.Analytics;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using GooglePlayGames.BasicApi.Events;
using System;

public class GoogleCloud : MonoBehaviour
{
    public static GoogleCloud instance;

    [SerializeField] private TextMeshProUGUI testText;
    [SerializeField] private InputField inputField;
    [SerializeField] private Button saveButton;

    public delegate void Action<in T>(T obj);

    delegate void callback();

    private bool isSaving = false;
    private Queue<saveData> saveDataQueue = new Queue<saveData>();

    public class saveData
    {
        public UserData userData = null;

        public System.Action<bool, string> callback = null;

        public saveData(UserData userData, System.Action<bool, string> callback = null)
        {
            this.userData = userData;
            this.callback = callback;
        }
    }

    private void Awake()
    {
        instance = this;
    }

    public void SaveUserDataWithCloud(UserData userData, System.Action<bool, string> callback = null)
    {
        if (isSaving)
        {
            saveData savedata = new saveData(userData, callback);
            saveDataQueue.Enqueue(savedata);
            print(saveDataQueue.Count);
            return;
        }

        print("saving Start");

        isSaving = true;

        string serializedData = JsonConvert.SerializeObject(userData); // �����͸� �����ϱ� ���� ����ȭ�մϴ�.

        print(userData.crystal);

        //Time.timeScale = 0f;

        UserDataManager.instance.SaveCurrentUserDataToLocal();

        GPGSManager.Instance.SaveWithCloud("USERDATA", serializedData, (success) =>
        { // �����͸� Ŭ���忡 �����մϴ�.
            if (success)
            {
                // ������ ���� ������

                print("GPGS Cloud에 저장을 성공하였습니다.");

                print(DateTime.Now.ToString());

                print(userData.crystal);

                if (callback != null)
                    callback.Invoke(true, "������ �Ͻ������Ǿ� �������� ������");

                FirebaseAnalytics.LogEvent("GPGS_SaveDataFromCloud_Success");

                //Time.timeScale = 1f;
            }
            else
            {
                // ������ ���� ���н�

                print("GPGS Cloud에 저장을 실패하였습니다.");

                if (callback != null)
                    callback.Invoke(true, "������ �Ͻ������Ǿ� �������� ������");

                //Time.timeScale = 1f;

                FirebaseAnalytics.LogEvent("GPGS_SaveDataFromCloud_Failed");
            }

            print("saving End");
            isSaving = false;

            if (saveDataQueue.Count > 0)
            {
                print(saveDataQueue.Count);
                var data = saveDataQueue.Dequeue();
                SaveUserDataWithCloud(data.userData, data.callback);
            }

        });
    }

    public UserData LoadUserDataWithCloud(System.Action<bool, string> callback = null)
    {
        UserData userData = new UserData();
        //Time.timeScale = 0f;

        GPGSManager.Instance.LoadWithCloud("USERDATA", (success, serializedData) =>
        { // �����͸� Ŭ���忡�� �ҷ��ɴϴ�.
            if (success)
            {
                // ������ �ε� ������
                print("GPGS Cloud에서 유저 데이터를 불러왔습니다.");
                print(serializedData);

                userData = JsonConvert.DeserializeObject<UserData>(serializedData); // �ҷ��� �����͸� ������ȭ�մϴ�.
                print(userData.playerHaveShip);

                foreach (ShipObjectData data in userData.playerHaveShip)
                {
                    foreach (ShipUpgradeModules module in data.shipUpgradeModuleList)
                    {
                        print(module.upgradeType);
                        print(module.currentUpgrade);
                    }
                }

                //print(userData.testString + " " + userData.crystal);

                UserDataManager.instance.currentUserData = userData;

                if (callback != null)
                    callback.Invoke(true, "MainScene");

                FirebaseAnalytics.LogEvent("GPGS_LoadDataFromCloud_Success");

                //Time.timeScale = 1f;
            }
            else
            {
                print("GPGS Cloud에서 유저 데이터를 불러오지 못해 로컬 데이터를 불러옵니다.");
                //userData = UserDataManager.instance.LoadUserData();

                UserDataManager.instance.LoadCurrentUserDataFromLocal();

                FirebaseAnalytics.LogEvent("GPGS_LoadDataFromCloud_Failed");

                //Time.timeScale = 1f;
            }
        });

        return userData;
    }

    public void DelectWithCloud(string dataKey)
    {
        GPGSManager.Instance.DelectWithCloud(dataKey, (success) =>
        { // �����͸� Ŭ���忡�� �����մϴ�..
            if (success)
            {
                // ������ ���� ������
            }
            else
            {
                // ������ ���� ���н�
            }
        });
    }

    public void GetGoogleInfo()
    {
        //return PlayGamesPlatform.Instance.GetUserId();
    }

    private void OnApplicationQuit()
    {
        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);
    }


    //================================================================================================================

    // public void TestUserDataSave()
    // {
    //     UserData userData = new UserData();

    //     userData.testString = inputField.text;

    //     SaveUserDataWithCloud(userData);
    // }

    // public void TestUserDataLoad()
    // {
    //     UserData userData = LoadUserDataWithCloud();

    //     print(userData.testString);

    //     testText.text = userData.testString;
    // }
}
