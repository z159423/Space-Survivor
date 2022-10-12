using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using TMPro;

public class IAPManager : MonoBehaviour, IStoreListener
{
    IStoreController m_StoreController; // The Unity Purchasing system.

    //Your products IDs. They should match the ids of your products in your store.
    public string removeAdsId = "removeads";
    public string starterPackId = "starterpack";
    public string megaPackId = "megapack";
    public string ultraPackId = "ultrapack";

    public TextMeshProUGUI removeAdsText;
    public TextMeshProUGUI starterPackText;
    public TextMeshProUGUI megaPackText;
    public TextMeshProUGUI ultraPackText;
    private void Start()
    {
        
        //UpdateUI();

        StartCoroutine(InitIAP());

        IEnumerator InitIAP()
        {
            while (true)
            {
                yield return null;

                print("iap 동기화 시도중");
                if(m_StoreController != null)
                {
                    HadPurchased();
                    break;
                }
            }
        }

        InitializePurchasing();
    }

    public void PurchaseRemoveAds()
    {
        m_StoreController.InitiatePurchase(removeAdsId);
    }

    public void PurchageStarterPack()
    {
        m_StoreController.InitiatePurchase(starterPackId);
    }

    public void PurchageMegaPack()
    {
        m_StoreController.InitiatePurchase(megaPackId);
    }

    public void PurchageUltraPack()
    {
        m_StoreController.InitiatePurchase(ultraPackId);
    }

    public void PurchageStarterPack_Success()
    {
        UserDataManager.instance.currentUserData.RemoveAds = true;

        UserDataManager.instance.AddCrystalValue(1000);
    }

    public void PurchageMegaPack_Success()
    {
        UserDataManager.instance.currentUserData.RemoveAds = true;

        UserDataManager.instance.AddCrystalValue(2500);
    }

    public void PurchageUltraPack_Success()
    {
        UserDataManager.instance.currentUserData.RemoveAds = true;

        UserDataManager.instance.AddCrystalValue(5000);
    }

    public void PurchaseRemoveAds_Success()
    {
        UserDataManager.instance.currentUserData.RemoveAds = true;

        UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);

        //UpdateUI();
    }

    void InitializePurchasing()
    {
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        //Add products that will be purchasable and indicate its type.
        builder.AddProduct(removeAdsId, ProductType.NonConsumable);
        builder.AddProduct(starterPackId, ProductType.Consumable);
        builder.AddProduct(megaPackId, ProductType.Consumable);
        builder.AddProduct(ultraPackId, ProductType.Consumable);

        UnityPurchasing.Initialize(this, builder);

        //HadPurchased();
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        Debug.Log("In-App Purchasing successfully initialized");

        print("IAP 연동 성공");
        m_StoreController = controller;

    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log($"In-App Purchasing initialize failed: {error}");

        print("IAP 연동 실패 + " + error);
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        //Retrieve the purchased product
        var product = args.purchasedProduct;

        //Add the purchased product to the players inventory
        if (product.definition.id == starterPackId)
        {
            PurchageStarterPack_Success();
        }
        else if (product.definition.id == megaPackId)
        {
            PurchageMegaPack_Success();
        }
        else if (product.definition.id == ultraPackId)
        {
            PurchageUltraPack_Success();
        }

        Debug.Log($"Purchase Complete - Product: {product.definition.id}");

        //We return Complete, informing IAP that the processing on our side is done and the transaction can be closed.
        return PurchaseProcessingResult.Complete;
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log($"Purchase failed - Product: '{product.definition.id}', PurchaseFailureReason: {failureReason}");
    }

    bool IsSubscribedTo(Product subscription)
    {
        // If the product doesn't have a receipt, then it wasn't purchased and the user is therefore not subscribed.
        if (subscription.receipt == null)
        {
            return false;
        }

        //The intro_json parameter is optional and is only used for the App Store to get introductory information.
        var subscriptionManager = new SubscriptionManager(subscription, null);

        // The SubscriptionInfo contains all of the information about the subscription.
        // Find out more: https://docs.unity3d.com/Packages/com.unity.purchasing@3.1/manual/UnityIAPSubscriptionProducts.html
        var info = subscriptionManager.getSubscriptionInfo();

        return info.isSubscribed() == Result.True;
    }

    void UpdateUI()
    {
        var subscriptionProduct = m_StoreController.products.WithID(removeAdsId);

        try
        {
            removeAdsText.text = m_StoreController.products.WithID(removeAdsId).metadata.localizedPriceString;
            starterPackText.text = m_StoreController.products.WithID(starterPackId).metadata.localizedPriceString;
            megaPackText.text = m_StoreController.products.WithID(megaPackId).metadata.localizedPrice.ToString();
            ultraPackText.text = m_StoreController.products.WithID(ultraPackId).metadata.localizedPrice.ToString();

            var isSubscribed = IsSubscribedTo(subscriptionProduct);

            string text = isSubscribed ? "You are subscribed" : "You are not subscribed";
            print(text);
        }
        catch (StoreSubscriptionInfoNotSupportedException)
        {
            var receipt = (Dictionary<string, object>)MiniJson.JsonDecode(subscriptionProduct.receipt);
            var store = receipt["Store"];
            print(
                "Couldn't retrieve subscription information because your current store is not supported.\n" +
                    $"Your store: \"{store}\"\n\n" +
                    "You must use the App Store, Google Play Store or Amazon Store to be able to retrieve subscription information.\n\n" +
                    "For more information, see README.md");
        }
    }

    //이미 구입한적 있는 상품인지 확인
    private void HadPurchased()
    {
        var product = m_StoreController.products.WithID(removeAdsId);

        if (product != null)
        {
            UserDataManager.instance.currentUserData.RemoveAds = true;

            UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);

            print("광고제거를 구매한 적이 있는 유저");
        }

        product = m_StoreController.products.WithID(starterPackId);

        if (product != null)
        {
            UserDataManager.instance.currentUserData.RemoveAds = true;

            UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);

            print("스타터팩을 구매한 적이 있는 유저");
        }

        product = m_StoreController.products.WithID(megaPackId);

        if (product != null)
        {
            UserDataManager.instance.currentUserData.RemoveAds = true;

            UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);

            print("메가팩을 구매한 적이 있는 유저");
        }

        product = m_StoreController.products.WithID(ultraPackId);

        if (product != null)
        {
            UserDataManager.instance.currentUserData.RemoveAds = true;

            UserDataManager.instance.SaveUserData(UserDataManager.instance.currentUserData);

            print("울트라팩을 구매한 적이 있는 유저");
        }
    }
}
