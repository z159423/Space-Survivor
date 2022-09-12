using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GPGSLogin : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI text1;
    [SerializeField] private TextMeshProUGUI text2;

    // Start is called before the first frame update
    void Start()
    {
        // GPGSManager.Instance.Login(bool autoLogin, Action<bool, ILocalUser> callback = null) 
        // autoLogin : false = 사용자 직접 로그인, true = 자동 로그인
        GPGSManager.Instance.Login(false, (success, ilocalUser) =>
        { // 로그인을 시도합니다.
            if (success)
            {
                // 로그인 성공

                //ilocalUser.userName = 플레이어 이름
                //ilocalUser.id = 플레이어 아이디
                //ilocalUser.state = 플레이어 상태
                //ilocalUser.underage = 플레이어 미성년자 여부

                text2.text = "GPGS 로그인 성공 + \n" + ilocalUser.userName + "\n" + ilocalUser.id + "\n" + ilocalUser.state + "\n" + ilocalUser.underage;
                SceneManager.LoadScene("MainScene");
            }
            else
            {
                // 로그인 실패

                text2.text = "GPGS 로그인 실패 + ";
            }
        });
    }

    public void checkLogin()
    {
        if (GPGSManager.Instance.IsAuthenticated)
        { // 로그인 여부를 확인합니다.
          // Google Play Game Service 로그인 상태

            text1.text = "GPGS 로그인 성공 ";
        }
        else
        {

            text1.text = "GPGS 로그인 실패 ";
            // Google Play Game Service 비로그인 상태
        }
    }

    public void Login()
    {
        GPGSManager.Instance.Login(false, (success, ilocalUser) =>
                { // 로그인을 시도합니다.
                    if (success)
                    {
                        // 로그인 성공

                        //ilocalUser.userName = 플레이어 이름
                        //ilocalUser.id = 플레이어 아이디
                        //ilocalUser.state = 플레이어 상태
                        //ilocalUser.underage = 플레이어 미성년자 여부

                        text2.text = "GPGS 로그인 성공 + \n" + ilocalUser.userName + "\n" + ilocalUser.id + "\n" + ilocalUser.state + "\n" + ilocalUser.underage;
                    }
                    else
                    {
                        // 로그인 실패

                        text2.text = "GPGS 로그인 실패 + ";
                    }
                });
    }
}
