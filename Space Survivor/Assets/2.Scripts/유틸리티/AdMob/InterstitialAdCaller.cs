using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class InterstitialAdCaller : MonoBehaviour
{
    //Test ID ca-app-pub-3940256099942544/1033173712
    public string androidAdUnitId;
    //Test ID ca-app-pub-3940256099942544/4411468910
    public string iosAdUnitId;

    public static InterstitialAdCaller instance;

    public float IrAdsCallTime = 10f;
    public bool IrAdsReady = false;

    [Space]

    

    string adUnitId;

    private InterstitialAd interstitial;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        RequestInterstitial();
        StartCoroutine(StartTickIrAdsTime());
    }

    private IEnumerator StartTickIrAdsTime()
    {
        IrAdsReady = false;
        yield return new WaitForSeconds(IrAdsCallTime);

        IrAdsReady = true;
        print("전면광고 시간 준비됨");
    }

    private void RequestInterstitial()
    {
#if UNITY_ANDROID
        string adUnitId = androidAdUnitId;
#elif UNITY_IPHONE
        string adUnitId = iosAdUnitId;
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd. 
        // 전면광고 초기화
        this.interstitial = new InterstitialAd(adUnitId);

        // Create an empty ad request.  
        // 전면광고 요청
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        // 전면광고 로드      
        this.interstitial.LoadAd(request);

        // Called when an ad request has successfully loaded.
        this.interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        this.interstitial.OnAdOpening += HandleOnAdOpening;
        // Called when the ad is closed.
        this.interstitial.OnAdClosed += HandleOnAdClosed;

        void HandleOnAdLoaded(object sender, EventArgs args)
        {
            MonoBehaviour.print("전면 광고 로드됨");
        }

        void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
        {
            MonoBehaviour.print("전면 광고 로드 실패: "
                                + args.LoadAdError);
        }

        void HandleOnAdOpening(object sender, EventArgs args)
        {
            MonoBehaviour.print("전면 광고 실행중");
        }

        void HandleOnAdClosed(object sender, EventArgs args)
        {
            MonoBehaviour.print("전면광고 꺼짐");

            RequestInterstitial();
            StartCoroutine(StartTickIrAdsTime());
        }
    }

    public void CallIrAds()
    {
        if (this.interstitial.IsLoaded() && IrAdsReady && !UserDataManager.instance.currentUserData.RemoveAds)
        {
            this.interstitial.Show();
        }
        else
        {
            if (UserDataManager.instance.currentUserData.RemoveAds)
                print("광고제거를 구매하여 전면광고가 없습니다");
            else if(!IrAdsReady)
                print("광고가 로드되지 않았습니다");
        }
    }
}
