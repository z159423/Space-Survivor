using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IAPManager : MonoBehaviour
{
    public void PurchaseRemoveAds_Success()
    {
        print("광고 제거 구매 성공");

        UserDataManager.instance.currentUserData.RemoveAds = true;

        UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);
    }

    public void PurchaseRemoveAds_Failed()
    {
        Debug.LogError("광고제거 구매 실패");
    }
}
