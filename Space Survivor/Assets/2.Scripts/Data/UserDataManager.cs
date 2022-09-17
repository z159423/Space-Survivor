using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class UserDataManager : MonoBehaviour
{
    private const string userDataName = "UserData";

    public static UserDataManager instance;

    public UserData currentUserData = new UserData();

    private void Awake()
    {
        instance = this;

        currentUserData = LoadUserData();

        //DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
            AddCrystalValue(100);

        if (Input.GetKeyDown(KeyCode.D))
        {
            DeleteUserData();
            currentUserData = LoadUserData();

            AddCrystalValue(0);
        }
            
    }

    //유저 데이터 불러오기
    public UserData LoadUserData()
    {
        string filePath = Application.persistentDataPath + userDataName;

        //불러오기 성공
        if (File.Exists(filePath))
        {
            print("UserData 불러오기 성공");
            string JsonData = File.ReadAllText(filePath);
            UserData userData = JsonUtility.FromJson<UserData>(JsonData);

            return userData;

        }
        //불러올 파일이 없을시
        else
        {
            print("UserData가 없어서 새로운 파일을 생성합니다.");
            UserData userData = new UserData();

            return userData;
        }
    }

    //유저 데이터 세이브
    public void SaveUserData(UserData data)
    {
        string filePath = Application.persistentDataPath + userDataName;

        string JsonData = JsonUtility.ToJson(data);

        File.WriteAllText(filePath, JsonData);
    }

    //유저 데이터 삭제
    public void DeleteUserData()
    {
        string filePath = Application.persistentDataPath + userDataName;

        // check if file exists
        if (!File.Exists(filePath))
        {
            print("유저 데이터가 존재하지 않습니다.");
        }
        else
        {
            print("유저 데이터를 삭제하였습니다.");

            File.Delete(filePath);

            RefreshEditorProjectWindow();
        }
    }

    void RefreshEditorProjectWindow()
    {
#if UNITY_EDITOR
        UnityEditor.AssetDatabase.Refresh();
#endif
    }

    public void AddCrystalValue(int value)
    {
        /*
        print("1");
        var data = GoogleCloud.instance.LoadUserDataWithCloud();
        print("2 " + data.crystal + data.testString);
        data.crystal += value;
        print("3");
        GoogleCloud.instance.SaveUserDataWithCloud(data);
        //SaveUserData(data);
        print("4");
        */

        //var data = LoadUserData();

        currentUserData.crystal += value;

        CrystalDisplay.instance.ChangeCrystalText(currentUserData.crystal);
        SaveUserData(currentUserData);
    }

    public UserData LoadCurrentUserDataFromLocal()
    {
        currentUserData = LoadUserData();

        return currentUserData;
    }

    public void SaveCurrentUserDataToLocal()
    {
        SaveUserData(currentUserData);
    }

    public bool CheckPlayerHaveShip(string code)
    {
        for(int i = 0; i < currentUserData.playerHaveShip.Count; i++)
        {
            if(currentUserData.playerHaveShip[i].shipCode.Equals(code))
                return true;
        }

        return false;
        
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause)
        {
            //GoogleCloud.instance.SaveUserDataWithCloud(currentUserData, (suc, str)=> { print("게임이 일시중지되어 유저 데이터 저장"); });
        }
    }

    private void OnApplicationQuit()
    {
        //GoogleCloud.instance.SaveUserDataWithCloud(currentUserData, (suc, str) => { print("게임이 종료되어 유저 데이터 저장"); });
    }
}
