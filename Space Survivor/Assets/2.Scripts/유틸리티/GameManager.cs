using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using Cinemachine;
using UnityEngine.Localization;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using DG.Tweening;
using Firebase.Analytics;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject inGameMenu;
    [SerializeField] private GameObject MainMenu;
    [SerializeField] private GameObject DieMenu;
    [SerializeField] private GameObject reviveButton;
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
    [SerializeField] private Color buyBtnDisableColor;
    [SerializeField] private Color buyBtnEnableColor;
    [SerializeField] private CinemachineVirtualCamera cmvc;
    [SerializeField] private TextMeshProUGUI clearStage_getCrystalCountText;
    [SerializeField] private TextMeshProUGUI clearStage_killCountText;
    [SerializeField] private GameObject clearStageMenu;
    [SerializeField] private GameObject console;
    [SerializeField] private GameObject inGameDebug;
    public Transform playerTrans;
    [SerializeField] private GameObject[] editmodeUI;
    [SerializeField] private StageSelect stageSelect;

    [Space]

    [SerializeField] public ShipObject currentShip;
    [SerializeField] private ShipList shipList;
    [SerializeField] private GameObject tiralBtn;
    [SerializeField] private GameObject buyShipBtn;
    [SerializeField] private TextMeshProUGUI shipCostText;
    [SerializeField] private GameObject shipUpgradeSlot;

    [SerializeField] private int currentShipNumber;

    public UnityEvent PlayGameEvent;

    public bool gameStart = false;
    [field: SerializeField] public bool gameclear { get; private set; } = false;
    public bool inMainMenu = true;
    public bool editmode = false;

    private int currentTime;
    private float currentKillCount;
    private Coroutine timerCoroutine;
    public bool revivedThisGame = false;
    private float revivedTimer = 1f;

    public static GameManager instance;

    private void Awake()
    {
        instance = this;

#if UNITY_EDITOR
        //console.SetActive(true);
        //inGameDebug.SetActive(true);
#endif

        if (editmode)
        {
            for (int i = 0; i < editmodeUI.Length; i++)
            {
                editmodeUI[i].SetActive(true);
            }
        }
    }

    private void Start()
    {
        SelectShip(currentShipNumber);

        AudioManager.instance.FindBGM("menu2");
    }

    public void ResetTime()
    {
        currentTime = 0;
    }


    public void PlayGame()
    {
        //player.GetComponent<PlayerStat>().MakeThisShip(currentShip);

        playerWeapon.playerShipData = UserDataManager.instance.GetShipData(currentShip.shipObjectData.shipCode);

        if (playerWeapon.playerShipData == null)
            playerWeapon.playerShipData = shipList.GetShipObject(currentShip.shipObjectData.shipCode).shipObjectData;

        PlayGameEvent.Invoke();

        inGameMenu.SetActive(true);
        MainMenu.SetActive(false);
        DieMenu.SetActive(false);
        clearStageMenu.SetActive(false);
        player.SetActive(true);
        //EnemyGenerator.instance.StartEnemySpawn();
        hpBar.SetActive(true);

        gameStart = true;
        inMainMenu = false;
        gameclear = false;

        playerWeapon.allowFire = true;
        CameraManager.instance.ChangeCamera_PlayCamera();

        EnemyGenerator.instance.bossFighting = false;
        revivedThisGame = false;

        playerStat.invinsible = false;

        InterstitialAdCaller.instance.StartIrAdsCoolTime();

        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelStart);

        FPSDisplay.instance.ResetMinFPS();

        AudioManager.instance.FindBGM("inGame2");

        playerStat.AddBasicEquipment(UserDataManager.instance.GetShipData_currentVersion(currentShip.shipObjectData.shipCode));
    }

    public void ReplayGame()
    {
        //InterstitialAdCaller.instance.CallIrAds();
        SelectShip(currentShipNumber);

        EnemyGenerator.instance.deleteBossWall();

        InterstitialAdCaller.instance.CallIrAds();

        RewardedInterstitialAdCaller.instance.useCrystalDoubleThisStage = false;
        RewardedInterstitialAdCaller.instance.ShowDoubleCrystalBtn();
    }

    public void GoMainMenu()
    {
        //InterstitialAdCaller.instance.CallIrAds();
        inGameMenu.SetActive(false);
        MainMenu.SetActive(true);
        DieMenu.SetActive(false);
        clearStageMenu.SetActive(false);
        //player.SetActive(false);
        hpBar.SetActive(false);

        gameStart = false;
        inMainMenu = true;
        gameclear = false;

        playerWeapon.allowFire = false;

        SelectShip(currentShipNumber);

        CameraManager.instance.ChangeCamera_MainMenu();

        EnemyGenerator.instance.deleteBossWall();
        InterstitialAdCaller.instance.StopIrAdsCoolTime();

        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelEnd);

        FPSDisplay.instance.SaveFPS();

        InterstitialAdCaller.instance.CallIrAds();

        AudioManager.instance.FindBGM("menu2");

        RewardedInterstitialAdCaller.instance.useCrystalDoubleThisStage = false;
        RewardedInterstitialAdCaller.instance.ShowDoubleCrystalBtn();

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

        //CrystalMotion.instance.StartCrystalMotion(0,playerStat.currentCrystal);

        if (!revivedThisGame)
        {
            revivedTimer = 1f;
            reviveButton.SetActive(true);

            var fill = reviveButton.GetComponent<Image>();

            DOTween.To(() => fill.fillAmount, (var) => fill.fillAmount = var, 0, 5).SetEase(Ease.Linear)
            .OnComplete(() =>
            {
                reviveButton.SetActive(false);
                fill.fillAmount = 1f;

            });
        }

        gameStart = false;

        FirebaseAnalytics.LogEvent("playerDieEvent");
    }

    public void ClearStage()
    {
        playerStat.invinsible = true;
        clearStage_getCrystalCountText.text = playerStat.currentCrystal.ToString();
        clearStage_killCountText.text = currentKillCount.ToString();

        inGameMenu.SetActive(false);
        clearStageMenu.SetActive(true);

        gameStart = false;

        StartCoroutine(LootAllItem());

        IEnumerator LootAllItem()
        {
            yield return new WaitForSeconds(0.15f);
            Item.CrystalOnlyMagnetic(player.transform);
        }

        //CrystalMotion.instance.StartCrystalMotion(1,playerStat.currentCrystal);

        FirebaseAnalytics.LogEvent("stageClearEvent");

        UserDataManager.instance.StageClearSaveData(stageSelect.currentStageNumber);

        gameclear = true;

        RewardedInterstitialAdCaller.instance.useCrystalDoubleThisStage = false;
        RewardedInterstitialAdCaller.instance.ShowDoubleCrystalBtn();
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

            if (!EnemyGenerator.instance.bossFighting)
            {
                currentTime += 1;

                int min = (int)(currentTime / 60f);
                int second = (int)(currentTime % 60f);

                timer.text = string.Format("{0:0}:{1:00}", min, second);

                EnemyGenerator.instance.CheckWave();
            }
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

        currentShip = shipObject;

        player.GetComponent<PlayerStat>().MakeThisShip(shipObject, bodyRotation);

        StartCoroutine(ChangeShipNameText());

        //함선이름 불러오기
        IEnumerator ChangeShipNameText()
        {
            var keyName = shipObject.shipObjectData.shipCode;

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

        //플레이어가 소지중인 함선이 아닐경우 함선 구매버튼 활성화
        if (!UserDataManager.instance.CheckPlayerHaveShip(shipObject.shipObjectData.shipCode) && shipObject.shipObjectData.shipCost > 0)
        {
            shipBuyBtn.SetActive(true);
            shipTrialBtn.SetActive(true);
            shipCostText.text = shipObject.shipObjectData.shipCost.ToString();

            // if (currentShip.shipCost > UserDataManager.instance.currentUserData.crystal)
            // {
            //     shipBuyBtn.GetComponent<Image>().color = buyBtnDisableColor;
            // }
            // else
            // {
            //     shipBuyBtn.GetComponent<Image>().color = buyBtnEnableColor;
            // }

            if (currentShip.shipObjectData.shipCost > UserDataManager.instance.currentUserData.crystal)
            {
                shipBuyBtn.GetComponent<Button>().interactable = false;
            }
            else
            {
                shipBuyBtn.GetComponent<Button>().interactable = true;
            }
        }
        else
        {
            shipBuyBtn.SetActive(false);
            shipTrialBtn.SetActive(false);
        }
    }

    public void NextShip()
    {
        if (currentShipNumber + 1 < 0 || currentShipNumber + 1 >= shipList.shipList.Count)
            return;

        currentShipNumber++;

        SelectShip(currentShipNumber);
    }

    public void PreviusShip()
    {
        if (currentShipNumber + -1 < 0 || currentShipNumber + -1 > shipList.shipList.Count)
            return;

        currentShipNumber--;

        SelectShip(currentShipNumber);
    }

    public int getCurrentTime()
    {
        return currentTime;
    }

    public void BuyShip()
    {
        if (currentShip.shipObjectData.shipCost > UserDataManager.instance.currentUserData.crystal
        || UserDataManager.instance.CheckPlayerHaveShip(currentShip.shipObjectData.shipCode))
            return;

        UserDataManager.instance.currentUserData.playerHaveShip.Add(currentShip.shipObjectData);

        SelectShip(currentShipNumber);

        UserDataManager.instance.AddCrystalValue(-currentShip.shipObjectData.shipCost);
    }

    public void ShipUpgradeUIOnOff()
    {
        shipUpgradeSlot.SetActive(!shipUpgradeSlot.activeSelf);
    }

    public void ChangeGetCrystalText(int crystal)
    {
        getCrystalCountText.text = (int.Parse(getCrystalCountText.text) + crystal).ToString();
    }
}
