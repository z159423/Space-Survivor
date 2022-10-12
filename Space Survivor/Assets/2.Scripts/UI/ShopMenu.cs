using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopMenu : MonoBehaviour
{
    [SerializeField] private GameObject shopMenu;

    [Space]

    [SerializeField] private GameObject removeAdsButton;

    private void OnEnable()
    {
        if (UserDataManager.instance.currentUserData.RemoveAds)
            removeAdsButton.SetActive(false);
    }
    

    public void ShopMenuOnOff()
    {
        shopMenu.SetActive(!shopMenu.activeSelf);
    }

}
