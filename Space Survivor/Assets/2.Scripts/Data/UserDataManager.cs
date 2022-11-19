using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using TMPro;

public class UserDataManager : MonoBehaviour
{
    private const string userDataName = "UserData";

    [SerializeField] private ShipObject startShip;
    [field: SerializeField] public ShipList shipList { get; private set;}

    public static UserDataManager instance;

    public UserData currentUserData = new UserData();

    [Space]
    [SerializeField] private GameObject freeCrystalButtonImage;
    [SerializeField] private TextMeshProUGUI freeCrystalButtonTimeText;

    [SerializeField] private GameObject trialShipButtonImage;
    [SerializeField] private TextMeshProUGUI trialShipButtonTimeText;


    private void Awake()
    {
        instance = this;

        currentUserData = LoadUserData();

        //DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        StartCoroutine(RewardAdsTimeChecking());
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
            print("UserData �ҷ����� ���� " + filePath);
            string JsonData = File.ReadAllText(filePath);
            UserData userData = JsonUtility.FromJson<UserData>(JsonData);

            return userData;

        }
        //�ҷ��� ������ ������
        else
        {
            print("UserData�� ��� ���ο� ������ �����մϴ�. " + filePath);
            UserData userData = new UserData();

            userData.playerHaveShip.Add(startShip.shipObjectData);

            SaveUserData(userData);

            return userData;
        }
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

        return shipList.GetShipObject(code).shipObjectData;
    }

    /// <summary>
    /// 최신버전의 함선 데이터 가져오기
    /// </summary>
    public ShipObjectData GetShipData_currentVersion(string code)
    {
        for (int i = 0; i < shipList.shipList.Count; i++)
        {
            if (shipList.shipList[i].shipCode.Equals(code))
                return shipList.shipList[i].shipObjectData;
        }

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
            if (shipList.shipList[i].shipCode == shipCode)
            {
                return shipList.shipList[i].shipImage;
            }
        }

        return null;
    }

    IEnumerator RewardAdsTimeChecking()
    {
        while (true)
        {
            if (RewardedInterstitialAdCaller.instance.IsFreeCrystalReady())
            {
                freeCrystalButtonImage.SetActive(true);
                freeCrystalButtonTimeText.gameObject.SetActive(false);
            }
            else
            {
                freeCrystalButtonImage.SetActive(false);
                freeCrystalButtonTimeText.text = Utility.GetFormatedStringFromSecond((int)RewardedInterstitialAdCaller.instance.GetFreeCrystalLeftTime());
                freeCrystalButtonTimeText.gameObject.SetActive(true);
            }

            if (RewardedInterstitialAdCaller.instance.IsShipTrialReady())
            {
                trialShipButtonImage.SetActive(true);
                trialShipButtonTimeText.gameObject.SetActive(false);
            }
            else
            {
                trialShipButtonImage.SetActive(false);
                trialShipButtonTimeText.text = Utility.GetFormatedStringFromSecond((int)RewardedInterstitialAdCaller.instance.GetTrialShipLeftTime());
                trialShipButtonTimeText.gameObject.SetActive(true);
            }

            yield return new WaitForSeconds(1f);
        }
    }

    public void StageClearSaveData(int stageNum)
    {
        if (!currentUserData.clearedStageNumber.Contains(stageNum))
            currentUserData.clearedStageNumber.Add(stageNum);

        SaveCurrentDate();
    }
}
