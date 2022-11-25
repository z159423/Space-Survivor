using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using TMPro;
using System;

public class UserDataManager : MonoBehaviour
{
    private const string userDataName = "UserData";

    [field: SerializeField] public ShipObject startShip { get; private set; }
    [field: SerializeField] public ShipList shipList { get; private set; }

    public static UserDataManager instance;

    public UserData currentUserData = new UserData();

    private void Awake()
    {
        instance = this;

        //currentUserData = LoadUserData();
        //DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        //StartCoroutine(RewardAdsTimeChecking());
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

    //���� ������ �ҷ�����
    public UserData LoadUserData()
    {
        string filePath = Application.persistentDataPath + userDataName;

        //�ҷ����� ����
        if (File.Exists(filePath))
        {
            print("로컬 세이브가 존재하여 불러옵니다. " + filePath);
            string JsonData = File.ReadAllText(filePath);
            UserData userData = JsonUtility.FromJson<UserData>(JsonData);

            return userData;
        }
        //�ҷ��� ������ ������
        else
        {
            print("로컬 세이브가 존재하지 않아 새로 생성합니다. " + filePath);
            UserData userData = new UserData();

            var newShipData = Instantiate(startShip);

            userData.playerHaveShip.Add(newShipData.shipObjectData);

            SaveUserData(userData);

            return userData;
        }
    }

    /// <summary>
    /// 로컬세이브가 존재하는지 확인
    /// </summary>
    public bool CheckLocalSaveExist()
    {
        string filePath = Application.persistentDataPath + userDataName;

        if(File.Exists(filePath))
        {
            return true;
        }
        else
            return false;
    }

    //���� ������ ���̺�
    public void SaveUserData(UserData data)
    {
        string filePath = Application.persistentDataPath + userDataName;

        string JsonData = JsonUtility.ToJson(data);

        File.WriteAllText(filePath, JsonData);
    }

    public void SaveCurrentDate()
    {
        string filePath = Application.persistentDataPath + userDataName;

        string JsonData = JsonUtility.ToJson(currentUserData);

        File.WriteAllText(filePath, JsonData);
    }

    //���� ������ ����
    public void DeleteUserData()
    {
        string filePath = Application.persistentDataPath + userDataName;

        // check if file exists
        if (!File.Exists(filePath))
        {
            print("���� �����Ͱ� �������� �ʽ��ϴ�.");
        }
        else
        {
            print("���� �����͸� �����Ͽ����ϴ�.");

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

        print(value);

        currentUserData.crystal += value;

        CrystalDisplay.instance.ChangeCrystalText(currentUserData.crystal);

        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);
        //SaveUserData(currentUserData);
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
        for (int i = 0; i < currentUserData.playerHaveShip.Count; i++)
        {
            if (currentUserData.playerHaveShip[i].shipCode.Equals(code))
                return true;
        }

        return false;
    }

    /// <summary>
    /// code로 함선 데이터 가져오기
    /// </summary>
    public ShipObjectData GetShipData(string code)
    {
        for (int i = 0; i < currentUserData.playerHaveShip.Count; i++)
        {
            if (currentUserData.playerHaveShip[i].shipCode.Equals(code))
                return currentUserData.playerHaveShip[i];
        }

        Debug.Log("해당 코드의 함선이 로컬데이터에 없습니다.");
        return shipList.GetShipObject(code).shipObjectData;
    }

    /// <summary>
    /// 최신버전의 함선 데이터 가져오기
    /// </summary>
    public ShipObjectData GetShipData_currentVersion(string code)
    {
        for (int i = 0; i < shipList.shipList.Count; i++)
        {
            if (shipList.shipList[i].shipObjectData.shipCode.Equals(code))
                return shipList.shipList[i].shipObjectData;
        }

        Debug.Log("해당 코드의 함선이 최신버전에 없습니다.");
        return shipList.GetShipObject(code).shipObjectData;
    }

    public void ChangeShipData(ShipObjectData data)
    {
        for (int i = 0; i < currentUserData.playerHaveShip.Count; i++)
        {
            if (currentUserData.playerHaveShip[i].shipCode.Equals(data.shipCode))
            {
                currentUserData.playerHaveShip[i] = data;
            }
        }
    }

    public Sprite GetShipImage(string shipCode)
    {
        for (int i = 0; i < shipList.shipList.Count; i++)
        {
            if (shipList.shipList[i].shipObjectData.shipCode == shipCode)
            {
                return shipList.shipList[i].shipObjectData.shipImage;
            }
        }

        return null;
    }

    public void StageClearSaveData(int stageNum)
    {
        if (!currentUserData.clearedStageNumber.Contains(stageNum))
            currentUserData.clearedStageNumber.Add(stageNum);

        SaveCurrentDate();
    }

}

