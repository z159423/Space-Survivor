using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject inGameMenu;
    [SerializeField] private GameObject MainMenu;
    [SerializeField] private GameObject DieMenu;
    [SerializeField] private GameObject player;
    [SerializeField] private TextMeshProUGUI timer;
    [SerializeField] private TextMeshProUGUI killCount;


    [Space]

    [SerializeField] private ShipObject startShip;

    public UnityEvent PlayGameEvent;

    public bool gameStart = false;

    private int currentTime;
    private float currentKillCount;
    private Coroutine timerCoroutine;

    public static GameManager instance;

    private void Awake()
    {
        instance = this;
    }

    public void ResetTime()
    {
        currentTime = 0;
    }


    public void PlayGame()
    {
        player.GetComponent<PlayerStat>().MakeThisShip(startShip);          //임시 코드

        PlayGameEvent.Invoke();

        inGameMenu.SetActive(true);
        MainMenu.SetActive(false);
        DieMenu.SetActive(false);
        player.SetActive(true);

        //EnemyGenerator.instance.StartEnemySpawn();

        gameStart = true;
    }

    public void GoMainMenu()
    {
        inGameMenu.SetActive(false);
        MainMenu.SetActive(true);
        DieMenu.SetActive(false);
        player.SetActive(false);

        gameStart = false;
    }

    public void PlayerDie()
    {
        EnemyGenerator.instance.StopEnemySpawn();

        DieMenu.SetActive(true);

        gameStart = false;
    }

    public void Replay()
    {

    }

    public void AddKillCount()
    {
        currentKillCount++;
        killCount.text = currentKillCount.ToString();
    }

    public void ResetKillCount()
    {
        currentKillCount = 0;
        killCount.text = currentKillCount.ToString();
    }

    public void StartTimer()
    {
        if (timerCoroutine != null)
        {
            StopCoroutine(timerCoroutine);
        }

        timerCoroutine = StartCoroutine(StartTimerCoroutine());
    }

    public void StopTimer()
    {
        if (timerCoroutine == null)
            return;

        StopCoroutine(timerCoroutine);
        timerCoroutine = null;
    }

    public IEnumerator StartTimerCoroutine()
    {
        timer.text = string.Format("{0:0}:{1:00}", 0, 0);

        while (true)
        {
            yield return new WaitForSeconds(1);

            currentTime += 1;

            int min = (int)(currentTime / 60f);
            int second = (int)(currentTime % 60f);

            timer.text = string.Format("{0:0}:{1:00}", min, second);

            EnemyGenerator.instance.CheckWave();
        }
    }

    public int getCurrentTime()
    {
        return currentTime;
    }

}
