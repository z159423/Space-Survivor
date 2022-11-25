using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class CrystalDisplay : MonoBehaviour
{
    public static CrystalDisplay instance;

    [SerializeField] private TextMeshProUGUI crystalText;
    [SerializeField] private TextMeshProUGUI shopCrystalText;


    private void Awake()
    {
        instance = this;
    }

    
    private void OnEnable()
    {
        //crystalText.text = UserDataManager.instance.LoadUserData().crystal.ToString();

        crystalText.text = UserDataManager.instance.currentUserData.crystal.ToString();
        shopCrystalText.text = crystalText.text;
    }

    public void ChangeCrystalText(int value)
    {
        crystalText.text = value.ToString();
        shopCrystalText.text = crystalText.text;
    }
}
