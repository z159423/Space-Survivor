using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class ShopMenu : MonoBehaviour
{
    [SerializeField] private GameObject shopMenu;

    [Space]

    [SerializeField] private GameObject removeAdsButton;
    [SerializeField] private GameObject removeAdsButtonImage;
    [SerializeField] private TextMeshProUGUI removeAdsButtonTimeText;

    private void OnEnable()
    {
        if (UserDataManager.instance.currentUserData.RemoveAds)
            removeAdsButton.SetActive(false);

        if (RewardedInterstitialAdCaller.instance.IsFreeCrystalReady())
        {
            removeAdsButtonImage.SetActive(true);
            removeAdsButtonTimeText.gameObject.SetActive(false);
        }
        else
        {
            removeAdsButtonImage.SetActive(false);
            removeAdsButtonTimeText.text = Utility.GetFormatedStringFromSecond((int)RewardedInterstitialAdCaller.instance.GetFreeCrystalLeftTime());
            removeAdsButtonTimeText.gameObject.SetActive(true);
        }
    }


    public void ShopMenuOnOff()
    {
        shopMenu.SetActive(!shopMenu.activeSelf);
    }

}
