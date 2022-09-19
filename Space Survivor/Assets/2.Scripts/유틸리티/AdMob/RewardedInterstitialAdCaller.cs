using UnityEngine.Events;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using TMPro;

public class RewardedInterstitialAdCaller : MonoBehaviour
{
    public static RewardedInterstitialAdCaller instance;

    public string androidAdUnitId;
    public string iosAdUnitId;

    string adUnitId;

    private RewardedAd rewardedAd;

    private RewardedAd crystallAddRewardedAd;
    [SerializeField] private TextMeshProUGUI crystalValueText;
    private RewardedAd shipTrialRewardedAd;
    [SerializeField] private Button shipTrialButton;

    [Space]

    public int crystalValue = 25;

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

            UserDataManager.instance.AddCrystalValue(crystalValue);
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
            MonoBehaviour.print(
                "보상형 광고를 시청하였습니다. 보상을 지급해야 합니다: "
                            + amount.ToString() + " " + type);

            shipTrialButton.onClick.Invoke();
        }
    }

    //크리스탈 획득 리워드 광고
    public void WatchRewardAds_Crytal()
    {
        if (this.crystallAddRewardedAd.IsLoaded())
        {
            this.crystallAddRewardedAd.Show();
        }
        else
        {
            print("광고가 없습니다");
        }
    }

    //함선 무료 체험 리워드 광고
    public void WatchRewardAds_TrialShip()
    {
        if (this.shipTrialRewardedAd.IsLoaded())
        {
            this.shipTrialRewardedAd.Show();
        }
        else
        {
            print("광고가 없습니다");
        }
    }
}
