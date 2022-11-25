using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using GooglePlayGames.BasicApi.Events;

public class GPGSLoginDisplay : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI userID;
    [SerializeField] private GameObject loginBtn;

    [SerializeField] private TextMeshProUGUI log;

    private void OnEnable()
    {
        UpdateUI();
    }

    public void OnClickLoginBtn()
    {
        loginBtn.SetActive(false);

        GPGSManager.Instance.Login(false, (success, ilocalUser) =>
                { // 로그인을 시도합니다.
                    if (success)
                    {
                        // 로그인 성공

                        //ilocalUser.userName = 플레이어 이름
                        //ilocalUser.id = 플레이어 아이디
                        //ilocalUser.state = 플레이어 상태
                        //ilocalUser.underage = 플레이어 미성년자 여부

                        log.text = "Google Login Success!";
                    }
                    else
                    {
                        // 로그인 실패

                        log.text = "Google Login Failed";
                    }

                    UpdateUI();
                });
    }

    private void UpdateUI()
    {
        if (PlayGamesPlatform.Instance.IsAuthenticated() == true)
        {
            userID.text = "ID : " + PlayGamesPlatform.Instance.GetUserId();
            log.text = "Google Login Success!";

            loginBtn.SetActive(false);
        }
        else
        {
            loginBtn.SetActive(true);

            log.text = "Google Login Failed";
        }
    }
}
