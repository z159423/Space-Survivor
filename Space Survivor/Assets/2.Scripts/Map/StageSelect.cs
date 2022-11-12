using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class StageSelect : MonoBehaviour
{
    [SerializeField] private GameObject stageSelectMenu;
    [SerializeField] private Image stageImage;
    [SerializeField] private TextMeshProUGUI stageName;
    [SerializeField] private TextMeshProUGUI stageDescription;
    [SerializeField] private InfinityBackground[] backgrounds;
    [SerializeField] private GameObject nextButton;
    [SerializeField] private GameObject previusButton;
    [SerializeField] private GameObject lockedMapCover;
    [SerializeField] private GameObject stageselectButton;




    [Header("스테이지")]
    [SerializeField] private StageData stageData;

    private Stage selectedStage;

    private Stage currentStage;

    private int currentStageNumber;

    private void Start()
    {

        //스테이지 세이브 정보 가져오기

        //불러온 스테이지 정보로 초기화

        InitMapData(currentStageNumber);
    }

    public void ActiveStageSelectMenu()
    {
        stageSelectMenu.SetActive(!stageSelectMenu.activeSelf);
    }

    public void OnClickStageSelectButton()
    {
        ActiveStageSelectMenu();

        selectedStage = currentStage;

        //해당되는 맵 배경 가져오기
        for (int i = 0; i < backgrounds.Length; i++)
        {
            backgrounds[i].gameObject.SetActive(false);

            if (selectedStage.stageNameKey == backgrounds[i].stage.stageNameKey)
            {
                backgrounds[i].gameObject.SetActive(true);
                //break;
            }
        }


        EnemyGenerator.instance.currentEnemySpawnWaveObject = selectedStage.spawnWaveObject;

        UpdateUI();
    }

    private void InitMapData(int mapNumber)
    {
        currentStage = stageData.stages[mapNumber];

        stageImage.sprite = currentStage.stageImage;

        //스테이지 이름, 설명 현지화 가져오기
        LocalizeManager.CallLocalizedString(stageName, "Map", currentStage.stageNameKey);
        LocalizeManager.CallLocalizedString(stageDescription, "Map", currentStage.stageNameKey + "-d");

        //언락된 맵인지 확인
        if (UserDataManager.instance.currentUserData.clearedStageNumber.Contains(mapNumber) || mapNumber == 0)
        {
            lockedMapCover.SetActive(false);
            stageselectButton.SetActive(true);
        }
        else
        {
            lockedMapCover.SetActive(true);
            stageselectButton.SetActive(false);
        }

        UpdateUI();
    }

    private void UpdateUI()
    {
        previusButton.SetActive(false);
        nextButton.SetActive(false);

        if ((currentStageNumber - 1) >= 0 && (currentStageNumber - 1) < stageData.stages.Length)
        {
            if (stageData.stages[currentStageNumber - 1] != null)
                previusButton.SetActive(true);
        }

        if ((currentStageNumber + 1) >= 0 && (currentStageNumber + 1) < stageData.stages.Length)
        {
            if (stageData.stages[currentStageNumber + 1] != null)
                nextButton.SetActive(true);
        }
    }

    public void OnClickNextButton()
    {
        currentStageNumber++;

        InitMapData(currentStageNumber);
    }

    public void OnClickPreviusButton()
    {
        currentStageNumber--;

        InitMapData(currentStageNumber);
    }
}
