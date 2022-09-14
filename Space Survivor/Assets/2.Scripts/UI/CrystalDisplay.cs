using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class CrystalDisplay : MonoBehaviour
{
    public static CrystalDisplay instance;

    private void Awake()
    {
        instance = this;
    }

    [SerializeField] private TextMeshProUGUI crystalText;
    private void OnEnable()
    {
        //crystalText.text = UserDataManager.instance.LoadUserData().crystal.ToString();

        crystalText.text = UserDataManager.instance.currentUserData.crystal.ToString();
    }

    
}
