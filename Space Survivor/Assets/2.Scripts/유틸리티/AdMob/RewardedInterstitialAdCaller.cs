using UnityEngine.Events;
using UnityEngine;
using System.Collections;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using TMPro;
using Firebase.Analytics;

public class RewardedInterstitialAdCaller : MonoBehaviour
{
    public static RewardedInterstitialAdCaller instance;

    //Test ID ca-app-pub-3940256099942544/5224354917
    public string androidAdUnitId = "ca-app-pub-5179254807136480/1031690389";
    //Test ID ca-app-pub-3940256099942544/1712485313
    public string iosAdUnitId;

    [Space]

    string adUnitId;

    private RewardedAd rewardedAd;

    private RewardedAd crystallAddRewardedAd;
    [SerializeField] private TextMeshProUGUI crystalValueText;
    private RewardedAd shipTrialRewardedAd;
    [SerializeField] private Button shipTrialButton;
    private RewardedAd reviveRewardedAd;
    [SerializeField] private Button reviveButton;
    private RewardedAd crystalDoubleRewardAd;
    [SerializeField] private Button crystalDoubleButton;

    [SerializeField] private GameObject touchProjectPanel;
    [SerializeField] private PlayerStat playerStat;


    [Space]

    public int crystalValue = 25;
    [SerializeField] private int freeCrystalWaitTime = 1800;
    [SerializeField] private int shipTrialWaitTime = 1800;

    private void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        crystalValueText.text = crystalValue.ToString();

        //CreateAndLoadRewardedAd();

#if UNITY_ANDROID
        adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

        crystallAddRewardedAd = CreateAndLoadRewardedAd_Crystal(adUnitId);
        shipTrialRewardedAd = CreateAndLoadRewardedAd_TrailShip(adUnitId);
        reviveRewardedAd = CreateAndLoadRewardedAd_Revive(adUnitId);
        crystalDoubleRewardAd = CreateAndLoadRewardedAd_CrystalDouble(adUnitId);
    }

    public void CreateAndLoadRewardedAd()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
            string adUnitId = "unexpected_platform";
#endif

        this.rewardedAd = new RewardedAd(adUnitId);

        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        // Called when an ad is shown.
        this.rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        // Called when an ad request failed to show.
        this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);

        //보상형 광고가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고를 시청함");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "광고 표시를 실패하였습니다: "
                                 + args.AdError.GetMessage());
        }

        //사용자가 보상형 광고를 취소하였을때
        void HandleRewardedAdClosed(object sender, EventArgs args)
        {
            this.CreateAndLoadRewardedAd();
            MonoBehaviour.print("사용자가 보상형 광고 시청을 취소하였습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;
            MonoBehaviour.print(
                "보상형 광고를 시청하였습니다. 보상을 지급해야 합니다: "
                            + amount.ToString() + " " + type);
        }
    }

    public RewardedAd CreateAndLoadRewardedAd_Crystal(string adUnitId)
    {
        RewardedAd rewardedAd = new RewardedAd(adUnitId);

        //보상형 광고가 완료되었을때
        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        //보상형 광고 로드 실패함
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        //보상형 광고 표시중
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        //보상형 광고 표시가 실패하였습니다.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        //사용자가 보상형 광고를 취소하였을때
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        rewardedAd.LoadAd(request);
        return rewardedAd;

        //보상형 광고 로드가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("크리스탈 획득 보상형 광고 로드 완료");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "광고 표시를 실패하였습니다: "
                                 + args.AdError.GetMessage());
        }

        //보상형 광고창이 닫혔을때
        void HandleRewardedAdClosed(object sender, EventArgs args)
        {
#if UNITY_ANDROID
            adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

            crystallAddRewardedAd = CreateAndLoadRewardedAd_Crystal(adUnitId);
            MonoBehaviour.print("보상형 광고창이 닫혔습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;
            MonoBehaviour.print(
                "보상형 광고를 시청하였습니다. 보상을 지급해야 합니다: "
                            + amount.ToString() + " " + type);

            StartCoroutine(getFreeCrystal());

            InterstitialAdCaller.instance.RestartIrAdsCoolTime();

            FirebaseAnalytics.LogEvent("RvAdsComplete-FreeCrystal");
        }
    }

    public RewardedAd CreateAndLoadRewardedAd_TrailShip(string adUnitId)
    {
        RewardedAd rewardedAd = new RewardedAd(adUnitId);

        //보상형 광고가 완료되었을때
        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        //보상형 광고 로드 실패함
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        //보상형 광고 표시중
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        //보상형 광고 표시가 실패하였습니다.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        //사용자가 보상형 광고를 취소하였을때
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        rewardedAd.LoadAd(request);
        return rewardedAd;

        //보상형 광고 로드가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("함선 무료체험 보상형 광고 로드 완료");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "광고 표시를 실패하였습니다: "
                                 + args.AdError.GetMessage());
        }

        //보상형 광고창이 닫혔을때
        void HandleRewardedAdClosed(object sender, EventArgs args)
        {
#if UNITY_ANDROID
            adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

            shipTrialRewardedAd = CreateAndLoadRewardedAd_TrailShip(adUnitId);
            MonoBehaviour.print("보상형 광고창이 닫혔습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;
            // MonoBehaviour.print(
            //     "보상형 광고를 시청하였습니다. 보상을 지급해야 합니다: "
            //                 + amount.ToString() + " " + type);

            MonoBehaviour.print("함선 체험광고를 시청하였습니다. 함선 체험을 시작합니다.");

            StartCoroutine(startTrial());

            InterstitialAdCaller.instance.RestartIrAdsCoolTime();

            FirebaseAnalytics.LogEvent("RvAdsComplete-TrialShip");

        }
    }

    public RewardedAd CreateAndLoadRewardedAd_Revive(string adUnitId)
    {
        RewardedAd rewardedAd = new RewardedAd(adUnitId);

        //보상형 광고가 완료되었을때
        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        //보상형 광고 로드 실패함
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        //보상형 광고 표시중
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        //보상형 광고 표시가 실패하였습니다.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        //사용자가 보상형 광고를 취소하였을때
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        rewardedAd.LoadAd(request);
        return rewardedAd;

        //보상형 광고 로드가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("부활 보상형 광고 로드 완료");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "광고 표시를 실패하였습니다: "
                                 + args.AdError.GetMessage());
        }

        //보상형 광고창이 닫혔을때
        void HandleRewardedAdClosed(object sender, EventArgs args)
        {
#if UNITY_ANDROID
            adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

            reviveRewardedAd = CreateAndLoadRewardedAd_Revive(adUnitId);
            MonoBehaviour.print("보상형 광고창이 닫혔습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;

            MonoBehaviour.print("부활 리워드 광고를 시청완료했습니다. 부활합니다.");

            StartCoroutine(revive());

            InterstitialAdCaller.instance.RestartIrAdsCoolTime();

            FirebaseAnalytics.LogEvent("RvAdsComplete-Revive");
        }
    }

    public RewardedAd CreateAndLoadRewardedAd_CrystalDouble(string adUnitId)
    {
        RewardedAd rewardedAd = new RewardedAd(adUnitId);

        //보상형 광고가 완료되었을때
        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        //보상형 광고 로드 실패함
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        //보상형 광고 표시중
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        //보상형 광고 표시가 실패하였습니다.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        //사용자가 보상형 광고를 취소하였을때
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        rewardedAd.LoadAd(request);
        return rewardedAd;

        //보상형 광고 로드가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("크리스탈 두배 보상형 광고 로드 완료");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "크리스탈 두배 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("크리스탈 두배 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "크리스탈 두배 표시를 실패하였습니다: "
                                 + args.AdError.GetMessage());
        }

        //보상형 광고창이 닫혔을때
        void HandleRewardedAdClosed(object sender, EventArgs args)
        {
#if UNITY_ANDROID
            adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

            crystalDoubleRewardAd = CreateAndLoadRewardedAd_CrystalDouble(adUnitId);
            MonoBehaviour.print("크리스탈 두배 보상형 광고창이 닫혔습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;

            MonoBehaviour.print("크리스탈 두배 리워드 광고를 시청완료했습니다.");

            StartCoroutine(crystalDouble());

            InterstitialAdCaller.instance.RestartIrAdsCoolTime();

            FirebaseAnalytics.LogEvent("RvAdsComplete-DoubleCrystal");
        }
    }

    //크리스탈 획득 리워드 광고 호출
    public void WatchRewardAds_Crytal()
    {
        double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

        if (timeDiff < freeCrystalWaitTime)
        {
            //print("무료 크리스탈 리워드 광고 재사용 시간이 지나지 않았습니다. " + timeDiff + " 남은시간 : " + (freeCrystalWaitTime - timeDiff));
            return;
        }

        FirebaseAnalytics.LogEvent("RvAdsCallEvent");

        if (this.crystallAddRewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds)
        {
            if (UserDataManager.instance.currentUserData.usingFreeCrystalTime != null)
                print(timeDiff);

            this.crystallAddRewardedAd.Show();
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고 제거를 구매해 광고 호출을 안함");
            else
                print("광고가 없습니다");

            StartCoroutine(getFreeCrystal());
        }
    }

    //함선 무료 체험 리워드 광고 호출
    public void WatchRewardAds_TrialShip()
    {
        double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

        if (timeDiff < shipTrialWaitTime)
        {
            //print("함선 체험 리워드 광고 재사용 시간이 지나지 않았습니다. " + timeDiff + " 남은시간 : " + (freeCrystalWaitTime - timeDiff));
            return;
        }

        FirebaseAnalytics.LogEvent("RvAdsCallEvent");

        if (this.shipTrialRewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds)
        {
            this.shipTrialRewardedAd.Show();
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고 제거를 구매해 광고 호출을 안함");
            else
                print("광고가 없습니다");

            StartCoroutine(startTrial());
        }
    }

    //부활 리워드 광고 호출
    public void WatchRewardAds_Revive()
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");

        if (this.reviveRewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds)
        {
            this.reviveRewardedAd.Show();
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고 제거를 구매해 광고 호출을 안함");
            else
                print("광고가 없습니다");

            StartCoroutine(revive());
        }
    }

    //크리스탈 2배 리워드 광고 호출
    public void WatchRewardAds_CrystalDouble()
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");
        if (this.crystalDoubleRewardAd.IsLoaded())
        {
            this.crystalDoubleRewardAd.Show();
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고 제거를 구매해 광고 호출을 안함");
            else
                print("광고가 없습니다");

            StartCoroutine(crystalDouble());
        }
    }

    //부활
    IEnumerator revive()
    {
        touchProjectPanel.SetActive(true);
        yield return new WaitForSeconds(0.3f);

        reviveButton.onClick.Invoke();
        touchProjectPanel.SetActive(false);
        GameManager.instance.revivedThisGame = true;
    }

    //함선 체험
    IEnumerator startTrial()
    {
        UserDataManager.instance.currentUserData.usingShipTrialTime = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss"); ;
        UserDataManager.instance.SaveCurrentDate();

        touchProjectPanel.SetActive(true);
        yield return new WaitForSeconds(0.5f);

        shipTrialButton.onClick.Invoke();
        touchProjectPanel.SetActive(false);
    }

    //크리스탈 두배
    IEnumerator crystalDouble()
    {

        yield return null;
        //crystalDoubleButton.onClick.Invoke();
        GameManager.instance.crystalDouble = true;
        crystalDoubleButton.gameObject.SetActive(false);
        playerStat.GetCrystalDouble();
    }

    //무료 크리스탈
    IEnumerator getFreeCrystal()
    {
        yield return null;

        UserDataManager.instance.currentUserData.usingFreeCrystalTime = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss");
        UserDataManager.instance.SaveCurrentDate();

        UserDataManager.instance.AddCrystalValue(crystalValue);
    }

    public bool IsFreeCrystalReady()
    {
        double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

        //print(timeDiff + " " + freeCrystalWaitTime);
        if (timeDiff < freeCrystalWaitTime)
            return false;
        else
            return true;
    }

    public bool IsShipTrialReady()
    {
        double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

        if (timeDiff < shipTrialWaitTime)
            return false;
        else
            return true;
    }

    public double GetFreeCrystalLeftTime()
    {
        return freeCrystalWaitTime - (int)Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
    }

    public double GetTrialShipLeftTime()
    {
        return shipTrialWaitTime - Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
    }

}


