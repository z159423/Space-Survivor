using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SurveyUI : MonoBehaviour
{
    public Button SurveyBtn;
    

    public void CloseUI()
    {
        Destroy(gameObject);
    }
}
