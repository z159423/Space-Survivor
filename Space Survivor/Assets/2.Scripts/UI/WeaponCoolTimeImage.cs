using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class WeaponCoolTimeImage : MonoBehaviour
{
    [SerializeField] private Image coolTimeCover;

    private float currentCoolTime = 0;
    private float targetCoolTime = 0;

    private void Start()
    {
        coolTimeCover.type = Image.Type.Filled;
        coolTimeCover.fillMethod = Image.FillMethod.Radial360;
        coolTimeCover.fillOrigin = (int)Image.Origin360.Top;
        coolTimeCover.fillClockwise = false;
    }

    private void Update()
    {
        if(currentCoolTime > 0)
        {

            currentCoolTime -= Time.deltaTime;

            coolTimeCover.fillAmount = currentCoolTime / targetCoolTime;
        }
    }

    public void disableCoolTime()
    {
        coolTimeCover.fillAmount = 0;
    }

    public void StartCoolTime(float targetCoolTime)
    {
        currentCoolTime = targetCoolTime;
        this.targetCoolTime = targetCoolTime;
    }
}
