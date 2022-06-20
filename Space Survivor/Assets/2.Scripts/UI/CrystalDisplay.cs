using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class CrystalDisplay : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI crystalText;
    private void OnEnable()
    {
        crystalText.text = UserDataManager.instance.LoadUserData().crystal.ToString();
    }
}
