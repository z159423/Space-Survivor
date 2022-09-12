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

        DontDestroyOnLoad(gameObject);
    }


    public UserData LoadUserData()
    {
        string filePath = Application.persistentDataPath + userDataName;

        //불러오기 성공
        if(File.Exists(filePath))
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

    public void SaveUserData(UserData data)
    {
        string filePath = Application.persistentDataPath + userDataName;

        string JsonData = JsonUtility.ToJson(data);

        File.WriteAllText(filePath, JsonData);
    }

    public void AddCrystalValue(int value)
    {

        var data = LoadUserData();

        data.crystal += value;
        
        SaveUserData(data);
    }

}
