using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GoogleCloud : MonoBehaviour
{
	public static GoogleCloud instance;

	[SerializeField] private TextMeshProUGUI testText;
	[SerializeField] private InputField inputField;
	[SerializeField] private Button saveButton;


	private void Awake()
    {
		instance = this;

	}

	public void SaveUserDataWithCloud(UserData userData)
	{
		string serializedData = JsonConvert.SerializeObject(userData); // 데이터를 저장하기 전에 직렬화합니다.
		GPGSManager.Instance.SaveWithCloud("USERDATA", serializedData, (success) =>
		{ // 데이터를 클라우드에 저장합니다.
			if (success)
			{
				// 데이터 저장 성공시

				print("GPGS에 유저 정보 저장 성공");

			}
			else
			{
				// 데이터 저장 실패시

				print("GPGS에 유저 정보 저장 실패 로컬에 데이터를 저장합니다.");

				UserDataManager.instance.SaveCurrentUserDataToLocal();
			}

		});
	}

	public UserData LoadUserDataWithCloud()
	{
		UserData userData = new UserData();
		GPGSManager.Instance.LoadWithCloud("USERDATA", (success, serializedData) => { // 데이터를 클라우드에서 불러옵니다.
			if (success)
			{
				// 데이터 로드 성공시
				print("유저 정보 불러오기 성공");
				
				userData = JsonConvert.DeserializeObject<UserData>(serializedData); // 불러온 데이터를 역직렬화합니다.

				print(userData.testString + " " + userData.crystal);

				UserDataManager.instance.currentUserData = userData;
			}
			else
			{
				print("유저 정보 불러오기 실패 대신 로컬 데이터를 불러옵니다.");
				//userData = UserDataManager.instance.LoadUserData();

				UserDataManager.instance.LoadCurrentUserDataFromLocal();
				// 데이터 로드 실패시
			}
		});

		return userData;
	}

	public void DelectWithCloud(string dataKey)
	{
		GPGSManager.Instance.DelectWithCloud(dataKey, (success) => { // 데이터를 클라우드에서 삭제합니다..
			if (success)
			{
				// 데이터 삭제 성공시
			}
			else
			{
				// 데이터 삭제 실패시
			}
		});
	}



	//================================================================================================================

	public void TestUserDataSave()
    {
		UserData userData = new UserData();

		userData.testString = inputField.text;

		SaveUserDataWithCloud(userData);
    }

	public void TestUserDataLoad()
    {
		UserData userData = LoadUserDataWithCloud();

		print(userData.testString);

		testText.text = userData.testString;
    }
}
