using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class StageClearMenu : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI crystalText;
    [SerializeField] private PlayerStat playerStat;

    // Update is called once per frame
    void Update()
    {
        crystalText.text = playerStat.currentCrystal.ToString();
    }
}
