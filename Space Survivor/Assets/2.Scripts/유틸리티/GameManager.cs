using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using Cinemachine;
using UnityEngine.Localization;
using UnityEngine.ResourceManagement.AsyncOperations;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject inGameMenu;
    [SerializeField] private GameObject MainMenu;
    [SerializeField] private GameObject DieMenu;
    [SerializeField] private GameObject player;
    [SerializeField] private GameObject hpBar;
    [SerializeField] private TextMeshProUGUI timer;
    [SerializeField] private TextMeshProUGUI killCount;
    [SerializeField] private TextMeshProUGUI getCrystalCountText;
    [SerializeField] private TextMeshProUGUI killCountText;
    [SerializeField] private PlayerStat playerStat;
    [SerializeField] private PlayerWeapon playerWeapon;
    [SerializeField] private TextMeshProUGUI shipNameText;
    [SerializeField] private GameObject shipBuyBtn;
    [SerializeField] private GameObject shipTrialBtn;

    [SerializeField] private CinemachineVirtualCamera cmvc;

    [Space]

    [SerializeField] private ShipObject currentShip;
    [SerializeField] private ShipList shipList;
    [SerializeField] private GameObject tiralBtn;
    [SerializeField] private GameObject buyShipBtn;
    [SerializeField] private TextMeshProUGUI shipCostText;


    [SerializeField] private int currentShipNumber;

    public UnityEvent PlayGameEvent;

    public bool gameStart = false;
    public bool inMainMenu = true;

    private int currentTime;
    private float currentKillCount;
    private Coroutine timerCoroutine;

    public static GameManager instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start() {
        SelectShip(currentShipNumber);
    }

    public void ResetTime()
    {
        currentTime = 0;
    }


    public void PlayGame()
    {
        //player.GetComponent<PlayerStat>().MakeThisShip(currentShip);

        PlayGameEvent.Invoke();

        inGameMenu.SetActive(true);
        MainMenu.SetActive(false);
        DieMenu.SetActive(false);
        player.SetActive(true);
        //EnemyGenerator.instance.StartEnemySpawn();
        hpBar.SetActive(true);

        gameStart = true;
        inMainMenu = false;

        playerWeapon.allowFire = true;
        CameraManager.instance.ChangeCamera_PlayCamera();
    }

    public void ReplayGame()
    {
        SelectShip(currentShipNumber);
    }

    public void GoMainMenu()
    {
        inGameMenu.SetActive(false);
        MainMenu.SetActive(true);
        DieMenu.SetActive(false);
        //player.SetActive(false);
        hpBar.SetActive(false);

        gameStart = false;
        inMainMenu = true;

        playerWeapon.allowFire = false;

        SelectShip(currentShipNumber);
        
        CameraManager.instance.ChangeCamera_MainMenu();
    }

    public void Resurrection()
    {
        DieMenu.SetActive(false);
    }

    public void PlayerDie()
    {
        //EnemyGenerator.instance.StopEnemySpawn();

        getCrystalCountText.text = playerStat.currentCrystal.ToString();
        killCountText.text = currentKillCount.ToString();

        DieMenu.SetActive(true);

        gameStart = false;
    }

    public void AddKillCount()
    {
        currentKillCount++;
        killCount.text = currentKillCount.ToString();
    }

    public void ResetKillCount()
    {
        currentKillCount = 0;
        killCount.text = currentKillCount.ToString();
    }

    public void StartTimer()
    {
        if (timerCoroutine != null)
        {
            StopCoroutine(timerCoroutine);
        }

        timerCoroutine = StartCoroutine(StartTimerCoroutine());
    }

    public void StopTimer()
    {
        if (timerCoroutine == null)
            return;

        StopCoroutine(timerCoroutine);
        timerCoroutine = null;
    }

    public IEnumerator StartTimerCoroutine()
    {
        //timer.text = string.Format("{0:0}:{1:00}", 0, 0);

        while (true)
        {
            yield return new WaitForSeconds(1);

            currentTime += 1;

            int min = (int)(currentTime / 60f);
            int second = (int)(currentTime % 60f);

            timer.text = string.Format("{0:0}:{1:00}", min, second);

            EnemyGenerator.instance.CheckWave();
        }
    }

    public void SkipTime(int value)
    {
        currentTime += value;
    }

    //메인 메뉴에서 선택한 함선으로 변경
    public void SelectShip(int currentShipNumber)
    {
        Quaternion bodyRotation = new Quaternion();
        if (playerStat.GetComponentInChildren<PlayerBodyBeacon>() != null)
            bodyRotation = playerStat.GetComponentInChildren<PlayerBodyBeacon>().transform.localRotation;

        playerStat.DeleteShipBody();
        playerStat.ClearWeaponSlots();
        playerWeapon.ClearAllWeapon();
        playerWeapon.ClearAllPassive();

        var shipObject = shipList.shipList[currentShipNumber];

        player.GetComponent<PlayerStat>().MakeThisShip(shipObject, bodyRotation);

        StartCoroutine(ChangeShipNameText());

        IEnumerator ChangeShipNameText()
        {
            var keyName = shipObject.shipCode;

            var localizedString = new LocalizedString("Ship", keyName);

            var stringOperation = localizedString.GetLocalizedStringAsync();

            while (true)
            {
                if (stringOperation.IsDone && stringOperation.Status == AsyncOperationStatus.Succeeded)
                {
                    string str = stringOperation.Result;
                    shipNameText.text = str;

                    break;
                }
                yield return null;
            }
        }

        // if(!UserDataManager.instance.currentUserData.playerHaveShip.Contains(shipObject) && shipObject.shipCost > 0)
        // {
        //     shipBuyBtn.SetActive(true);
        //     shipTrialBtn.SetActive(true);
        //     shipCostText.text = shipObject.shipCost.ToString();
        // }
        // else
        // {
        //     shipBuyBtn.SetActive(false);
        //     shipTrialBtn.SetActive(false);
        // }

    }

    public void NextShip()
    {
        if(currentShipNumber + 1 < 0  || currentShipNumber + 1 >= shipList.shipList.Count)
        return;

        currentShipNumber++;

        SelectShip(currentShipNumber);
    }

    public void PreviusShip()
    {
        if(currentShipNumber + -1 < 0  || currentShipNumber + -1 > shipList.shipList.Count)
        return;

        currentShipNumber--;

        SelectShip(currentShipNumber);
    }

    public int getCurrentTime()
    {
        return currentTime;
    }

}
