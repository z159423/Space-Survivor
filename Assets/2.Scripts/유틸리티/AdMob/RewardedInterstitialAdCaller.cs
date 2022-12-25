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
    public static string androidAdUnitId = "ca-app-pub-5179254807136480/1031690389";
    //Test ID ca-app-pub-3940256099942544/1712485313
    public string iosAdUnitId;

    [Space]

    string adUnitId;

    private static RewardedAd rewardedAd;

    private RewardedAd crystallAddRewardedAd;
    [SerializeField] private TextMeshProUGUI crystalValueText;
    private RewardedAd shipTrialRewardedAd;
    [SerializeField] private Button shipTrialButton;
    private RewardedAd reviveRewardedAd;
    [SerializeField] private Button reviveButton;
    private RewardedAd crystalDoubleRewardAd;

    private RewardedAd getAllUpgardeAd;
    [SerializeField] private Button[] crystalDoubleButtons;
    [field: SerializeField] public bool useCrystalDoubleThisStage { get; set; } = false;

    [SerializeField] private GameObject touchProjectPanel;
    [SerializeField] private PlayerStat playerStat;

    [Space]

    public int crystalValue = 25;
    [SerializeField] private int freeCrystalWaitTime = 1800;
    [SerializeField] private int shipTrialWaitTime = 1800;

    [Space]
    [SerializeField] private GameObject freeCrystalButtonImage;
    [SerializeField] private TextMeshProUGUI freeCrystalButtonTimeText;

    [SerializeField] private GameObject trialShipButtonImage;
    [SerializeField] private TextMeshProUGUI trialShipButtonTimeText;

    private static List<IEnumerator> rewardList = new List<IEnumerator>();

    private void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        crystalValueText.text = crystalValue.ToString();

        //CreateAndLoadRewardedAd();
        CreateAndLoadRewardedAd();

#if UNITY_ANDROID
        adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

        //crystallAddRewardedAd = CreateAndLoadRewardedAd_Crystal(adUnitId);
        //shipTrialRewardedAd = CreateAndLoadRewardedAd_TrailShip(adUnitId);
        //reviveRewardedAd = CreateAndLoadRewardedAd_Revive(adUnitId);
        //crystalDoubleRewardAd = CreateAndLoadRewardedAd_CrystalDouble(adUnitId);
        //getAllUpgardeAd = CreateAndLoadRewardedAd_GetAllUpgarde(adUnitId);

        StartCoroutine(RewardAdsTimeChecking());
    }

    private void Update()
    {
        if (rewardList.Count > 0)
        {
            StartCoroutine(rewardList[0]);
            rewardList.Clear();
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
            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess_FreeCrystal");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed_FreeCrystal", "errorCode", "" + args.LoadAdError);
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

            //StartCoroutine(getFreeCrystal());
            rewardList.Add(getFreeCrystal());
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
            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess_TrialShip");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed_TrialShip", "errorCode", "" + args.LoadAdError);
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

            //StartCoroutine(startTrial());
            rewardList.Add(startTrial());
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
            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess_Revive");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed_Revive", "errorCode", "" + args.LoadAdError);
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

            //StartCoroutine(revive());
            rewardList.Add(revive());


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
            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess_DoubleCrystal");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "크리스탈 두배 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed_DoubleCrystal", "errorCode", "" + args.LoadAdError);
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

            //StartCoroutine(crystalDouble());
            rewardList.Add(crystalDouble());
        }
    }

    public RewardedAd CreateAndLoadRewardedAd_GetAllUpgarde(string adUnitId)
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
            MonoBehaviour.print("모든 업그레이드 획득 보상형 광고 로드 완료");
            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess_GetAllUpgrade");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "모든 업그레이드 획득 보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed_GetAllUpgrade", "errorCode", "" + args.LoadAdError);
        }

        //보상형 광고 표시중
        void HandleRewardedAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("모든 업그레이드 획득 보상형 광고 표시중");
        }

        //보상형 광고 표시가 실패하였습니다.
        void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
        {
            MonoBehaviour.print(
                "모든 업그레이드 획득 보상형 광고 표시를 실패하였습니다: "
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

            getAllUpgardeAd = CreateAndLoadRewardedAd_GetAllUpgarde(adUnitId);
            MonoBehaviour.print("모든 업그레이드 획득 보상형 광고창이 닫혔습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {
            string type = args.Type;
            double amount = args.Amount;

            MonoBehaviour.print("모든 업그레이드 획득 보상형 광고를 시청완료했습니다.");

            rewardList.Add(getAllUpgrade());

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

        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            if (UserDataManager.instance.currentUserData.usingFreeCrystalTime != null)
                print(timeDiff);

            FirebaseAnalytics.LogEvent("RvAdsCallSuccess_FreeCrystal");

            ShowRv(getFreeCrystal());
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
            {
                print("광고 제거를 구매해 광고 호출을 안함");
                rewardList.Add(getFreeCrystal());
            }
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed_FreeCrystal");

            //crystallAddRewardedAd = CreateAndLoadRewardedAd_Crystal(adUnitId);

            //StartCoroutine(getFreeCrystal());
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

        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            FirebaseAnalytics.LogEvent("RvAdsCallSuccess_trialShip");
            //this.shipTrialRewardedAd.Show();

            print("111");

            ShowRv(startTrial());
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
            {
                print("광고 제거를 구매해 광고 호출을 안함");
                rewardList.Add(startTrial());
            }
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed_trialShip");

            print("222");

            //shipTrialRewardedAd = CreateAndLoadRewardedAd_TrailShip(adUnitId);

            //StartCoroutine(startTrial());
        }
    }

    //부활 리워드 광고 호출
    public void WatchRewardAds_Revive()
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");

        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            FirebaseAnalytics.LogEvent("RvAdsCallSuccess_revive");
            //this.reviveRewardedAd.Show();

            ShowRv(revive());
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
            {
                print("광고 제거를 구매해 광고 호출을 안함");
                rewardList.Add(revive());
            }
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed_revive");



            //reviveRewardedAd = CreateAndLoadRewardedAd_Revive(adUnitId);

            //StartCoroutine(revive());
        }
    }

    //크리스탈 2배 리워드 광고 호출
    public void WatchRewardAds_CrystalDouble()
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");
        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            FirebaseAnalytics.LogEvent("RvAdsCallSuccess_crystalDouble");

            //this.crystalDoubleRewardAd.Show();

            ShowRv(crystalDouble());
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
            {
                print("광고 제거를 구매해 광고 호출을 안함");
                rewardList.Add(crystalDouble());
            }
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed_crystalDouble");

            //crystalDoubleRewardAd = CreateAndLoadRewardedAd_CrystalDouble(adUnitId);

            //StartCoroutine(crystalDouble());
        }
    }

    //모든 업그레이드 확득 RV
    public void WatchRewardAds_GetAllUpgrade()
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");
        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            FirebaseAnalytics.LogEvent("RvAdsCallSuccess_GetAllUpgrade");
            //this.getAllUpgardeAd.Show();

            ShowRv(getAllUpgrade());
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
            {
                rewardList.Add(getAllUpgrade());
                print("광고 제거를 구매해 광고 호출을 안함");
            }
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed_GetAllUpgrade");



            //getAllUpgardeAd = CreateAndLoadRewardedAd_GetAllUpgarde(adUnitId);

            //StartCoroutine(getAllUpgrade());
        }
    }

    //부활 보상획득
    IEnumerator revive()
    {
        touchProjectPanel.SetActive(true);
        yield return new WaitForSeconds(0.3f);

        reviveButton.onClick.Invoke();
        touchProjectPanel.SetActive(false);
        GameManager.instance.revivedThisGame = true;
        GameManager.instance.gameStart = true;

        InterstitialAdCaller.instance.RestartIrAdsCoolTime();

        FirebaseAnalytics.LogEvent("RvAdsComplete_Revive");
    }

    //함선 체험 보상획득
    IEnumerator startTrial()
    {
        UserDataManager.instance.currentUserData.usingShipTrialTime = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss"); ;
        //UserDataManager.instance.SaveCurrentDate();
        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

        touchProjectPanel.SetActive(true);
        yield return new WaitForSeconds(0.5f);

        shipTrialButton.onClick.Invoke();
        touchProjectPanel.SetActive(false);

        InterstitialAdCaller.instance.RestartIrAdsCoolTime();

        FirebaseAnalytics.LogEvent("RvAdsComplete_TrialShip");

        FirebaseAnalytics.LogEvent("TrialShip", "shipName", GameManager.instance.currentShip.shipObjectData.shipCode);
    }

    //크리스탈 두배 보상획득
    IEnumerator crystalDouble()
    {
        yield return null;

        HideDoubleCrystalBtn();

        playerStat.GetCrystalDouble();

        useCrystalDoubleThisStage = true;

        InterstitialAdCaller.instance.RestartIrAdsCoolTime();

        FirebaseAnalytics.LogEvent("RvAdsComplete_DoubleCrystal");
    }

    //무료 크리스탈 보상획득
    IEnumerator getFreeCrystal()
    {
        yield return null;

        UserDataManager.instance.currentUserData.usingFreeCrystalTime = DateTime.Now.ToString("yyyy/MM/dd HH:mm:ss");
        //UserDataManager.instance.SaveCurrentDate();
        GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

        UserDataManager.instance.AddCrystalValue(crystalValue);

        InterstitialAdCaller.instance.RestartIrAdsCoolTime();

        FirebaseAnalytics.LogEvent("RvAdsComplete_FreeCrystal");
    }

    //모든 업그레이드 획득 보상획득
    IEnumerator getAllUpgrade()
    {
        yield return null;

        LevelUpManager.instance.GetAllCurrentUpgrade();

        FirebaseAnalytics.LogEvent("RvAdsComplete_GetAllUpgarde");
    }

    public bool IsFreeCrystalReady()
    {
        try
        {
            double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

            //print(timeDiff + " " + freeCrystalWaitTime);
            if (timeDiff < freeCrystalWaitTime)
                return false;
            else
                return true;

        }
        catch (FormatException e)
        {
            Debug.LogError("Date Time Parse Error : / " + UserDataManager.instance.currentUserData.usingFreeCrystalTime + " / " + e);

            UserDataManager.instance.currentUserData.usingFreeCrystalTime = "2000-01-01 01:01:01";

            GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

            return true;
        }
    }

    public bool IsShipTrialReady()
    {
        try
        {
            double timeDiff = Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;

            if (timeDiff < shipTrialWaitTime)
                return false;
            else
                return true;

        }
        catch (FormatException e)
        {
            Debug.LogError("Date Time Parse Error : " + UserDataManager.instance.currentUserData.usingShipTrialTime + " / " + e);

            UserDataManager.instance.currentUserData.usingShipTrialTime = "2000-01-01 01:01:01";

            GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

            return true;
        }
    }

    public double GetFreeCrystalLeftTime()
    {
        try
        {
            return freeCrystalWaitTime - (int)Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        }
        catch (FormatException e)
        {
            FirebaseAnalytics.LogEvent("FormatExceptionErrorEvent");

            Debug.LogError("Date Time Parse Error : / " + UserDataManager.instance.currentUserData.usingFreeCrystalTime + " / " + e);

            UserDataManager.instance.currentUserData.usingFreeCrystalTime = "2000-01-01 01:01:01";

            GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

            return freeCrystalWaitTime - (int)Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingFreeCrystalTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        }
    }

    public double GetTrialShipLeftTime()
    {
        try
        {
            return shipTrialWaitTime - Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        }
        catch (FormatException e)
        {
            FirebaseAnalytics.LogEvent("FormatExceptionErrorEvent");

            Debug.LogError("Date Time Parse Error : / " + UserDataManager.instance.currentUserData.usingShipTrialTime + " / " + e);

            UserDataManager.instance.currentUserData.usingShipTrialTime = "2000-01-01 01:01:01";

            GoogleCloud.instance.SaveUserDataWithCloud(UserDataManager.instance.currentUserData);

            return freeCrystalWaitTime - (int)Utility.GetTimeDiff(DateTime.ParseExact(UserDataManager.instance.currentUserData.usingShipTrialTime, "yyyy-MM-dd HH:mm:ss", System.Globalization.CultureInfo.InvariantCulture)).TotalSeconds;
        }
    }

    private void HideDoubleCrystalBtn()
    {
        foreach (Button btn in crystalDoubleButtons)
        {
            btn.gameObject.SetActive(false);
        }
    }

    public void ShowDoubleCrystalBtn()
    {
        if (useCrystalDoubleThisStage)
            return;

        foreach (Button btn in crystalDoubleButtons)
        {
            btn.gameObject.SetActive(true);
        }
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

    public static void CreateAndLoadRewardedAd()
    {

        string adUnitId;

#if UNITY_ANDROID
        adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
             adUnitId = iosAdUnitId;
#else
             adUnitId = "unexpected_platform";
#endif

        rewardedAd = new RewardedAd(adUnitId);

        rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        // Called when an ad request failed to load.
        rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        // Called when an ad is shown.
        rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        // Called when an ad request failed to show.
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        //rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        rewardedAd.LoadAd(request);

        //보상형 광고가 완료되었을때
        void HandleRewardedAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("보상형 광고를 로드함");

            FirebaseAnalytics.LogEvent("RvAdsLoadSuccess");
        }

        //보상형 광고 로드 실패함
        void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print(
                "보상형 광고 로드를 실패하였습니다: "
                                 + args.LoadAdError);

            FirebaseAnalytics.LogEvent("RvAdsLoadFailed", "errorCode", "" + args.LoadAdError);
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
            CreateAndLoadRewardedAd();
            MonoBehaviour.print("사용자가 보상형 광고 시청을 취소하였습니다.");
        }

        //보상형 광고를 시청하고 보상을 받아야 할때 실행
        void HandleUserEarnedReward(object sender, Reward args)
        {

        }
    }

    public static void ShowRv(IEnumerator reward)
    {
        FirebaseAnalytics.LogEvent("RvAdsCallEvent");
        if (rewardedAd.IsLoaded() && !UserDataManager.instance.currentUserData.RemoveAds && !IAPManager.instance.HadPurchased())
        {
            FirebaseAnalytics.LogEvent("RvAdsCallSuccess");

            //rewardedAd.OnUserEarnedReward -= HandleUserEarnedReward;
            rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

            void HandleUserEarnedReward(object sender, Reward args)
            {
                print("11");
                rewardList.Add(reward);

                CreateAndLoadRewardedAd();
            }

            rewardedAd.Show();

        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고 제거를 구매해 광고 호출을 안함");
            else if (!rewardedAd.IsLoaded())
                print("광고가 없습니다");
            else
                print("알수없는 이유로 광고 호출에 실패하였습니다.");

            FirebaseAnalytics.LogEvent("RvAdsCallFailed");

            CreateAndLoadRewardedAd();
        }
    }
}


