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

	public delegate void Action<in T>(T obj);

	delegate void callback();


	private void Awake()
    {
		instance = this;

	}

	public void SaveUserDataWithCloud(UserData userData, System.Action<bool, string> callback = null)
	{
		string serializedData = JsonConvert.SerializeObject(userData); // �����͸� �����ϱ� ���� ����ȭ�մϴ�.

		Time.timeScale = 0f;

		GPGSManager.Instance.SaveWithCloud("USERDATA", serializedData, (success) =>
		{ // �����͸� Ŭ���忡 �����մϴ�.
			if (success)
			{
				// ������ ���� ������

				print("GPGS�� ���� ���� ���� ����");

				if (callback != null)
					callback.Invoke(true, "������ �Ͻ������Ǿ� �������� ������");

				Time.timeScale = 1f;
			}
			else
			{
				// ������ ���� ���н�

				print("GPGS�� ���� ���� ���� ���� ���ÿ� �����͸� �����մϴ�.");

				UserDataManager.instance.SaveCurrentUserDataToLocal();

				if (callback != null)
					callback.Invoke(true, "������ �Ͻ������Ǿ� �������� ������");

				Time.timeScale = 1f;
			}

		});
	}

	public UserData LoadUserDataWithCloud(System.Action<bool,string> callback = null)
	{
		UserData userData = new UserData();
		Time.timeScale = 0f;

		GPGSManager.Instance.LoadWithCloud("USERDATA", (success, serializedData) => { // �����͸� Ŭ���忡�� �ҷ��ɴϴ�.
			if (success)
			{
				// ������ �ε� ������
				print("���� ���� �ҷ����� ����");
				
				userData = JsonConvert.DeserializeObject<UserData>(serializedData); // �ҷ��� �����͸� ������ȭ�մϴ�.

				print(userData.testString + " " + userData.crystal);

				UserDataManager.instance.currentUserData = userData;

				if(callback != null)
					callback.Invoke(true, "MainScene");

				Time.timeScale = 1f;
			}
			else
			{
				print("���� ���� �ҷ����� ���� ��� ���� �����͸� �ҷ��ɴϴ�.");
				//userData = UserDataManager.instance.LoadUserData();

				UserDataManager.instance.LoadCurrentUserDataFromLocal();
				// ������ �ε� ���н�

				Time.timeScale = 1f;
			}
		});

		return userData;
	}

	public void DelectWithCloud(string dataKey)
	{
		GPGSManager.Instance.DelectWithCloud(dataKey, (success) => { // �����͸� Ŭ���忡�� �����մϴ�..
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
