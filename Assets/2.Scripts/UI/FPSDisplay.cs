using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Firebase.Analytics;

public class FPSDisplay : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI textMeshProUGUI;

    float DeltaTime = 0.0f;

    public static FPSDisplay instance;

    private void Awake() {
        instance = this;
    }

    void Update()
    {
        if(Time.timeScale > 0)
            DeltaTime += (Time.deltaTime - DeltaTime) * 0.1f;
    }

    void OnGUI()
    {
        float msec = DeltaTime * 1000.0f;
        float fps = 1.0f / DeltaTime;
        string text = string.Format("{0:0.0}ms, FPS: {1:0.}", msec, fps);

        textMeshProUGUI.text = text;
    }

    //======================================================================

    public int FramesPerSec { get; protected set; }
 
    [SerializeField] private float frequency = 0.5f;
    [SerializeField] private TextMeshProUGUI averageFpsText;

    private float minFPS = 60;
 
    private void Start()
    {
        StartCoroutine(FPS());
    }
 
    private IEnumerator FPS()
    {
        for (; ; )
        {
            int lastFrameCount = Time.frameCount;
            float lastTime = Time.realtimeSinceStartup;
            yield return new WaitForSeconds(frequency);
 
            float timeSpan = Time.realtimeSinceStartup - lastTime;
            int frameCount = Time.frameCount - lastFrameCount;
 
            FramesPerSec = Mathf.RoundToInt(frameCount / timeSpan);
            averageFpsText.text = "FPS: " + FramesPerSec.ToString() + " / MinFPS : " + minFPS.ToString();

            if(FramesPerSec < minFPS)
            {
                minFPS = FramesPerSec;
            }
        }
    }

    public void ResetMinFPS()
    {
        minFPS = 60;
    }

    public void SaveFPS()
    {
        FirebaseAnalytics.LogEvent("StageMinFPSEvent", "minFPS",  minFPS.ToString());

        ResetMinFPS();
    }
}
