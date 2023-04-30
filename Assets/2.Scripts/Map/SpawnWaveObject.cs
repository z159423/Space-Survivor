using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using System;

[CreateAssetMenu(fileName = "EnemySpawnWaveObject", menuName = "Scriptable Object/New Enemy SpawnWave Object", order = int.MaxValue)]
public class SpawnWaveObject : ScriptableObject
{
    [CustomContextMenu("custom/Init", "Init")]

    public void Init()
    {
        foreach (var waves in enemySpawnWaves2)
        {
            waves.Init();
        }
    }

    [Space]
    //[TableList]
    public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();

    [SerializeField]
    public List<EnemyWaveBundle> enemySpawnWaves2 = new List<EnemyWaveBundle>();


}

[System.Serializable]
public class EnemyWaveBundle
{

    [SerializeField] private string name;
    //[TableList]
    [SerializeField] public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();


    [CustomContextMenu("custom/InitSpawnTimeIntToVector2", "InitSpawnTimeIntToVector2")]

    [CustomContextMenu("custom/InitIcons", "InitIcons")]
    [CustomContextMenu("custom/InitName", "InitName")]
    [CustomContextMenu("custom/InitGuid", "InitGuid")]
    [CustomContextMenu("custom/Init", "Init")]


    public void Init()
    {
        InitIcons();
        InitName();
        InitGuid();
    }

    public void InitSpawnTimeIntToVector2()
    {
        foreach (EnemyWave wave in enemySpawnWaves)
        {
            wave.WaveTime = new Vector2(wave.StartWaveTime, wave.StopWaveTime);
        }
    }

    public void InitIcons()
    {
        foreach (var enemyObject in enemySpawnWaves)
        {
            if (enemyObject != null)
            {
                if (enemyObject.enemyObject != null)
                {
                    enemyObject.icon = enemyObject.enemyObject.Object.GetComponentInChildren<SpriteRenderer>().sprite;
                }
            }
        }
    }

    public void InitName()
    {
        foreach (var enemyObject in enemySpawnWaves)
        {
            if (enemyObject != null)
            {
                if (enemyObject.enemyObject != null)
                {
                    string name = enemyObject.enemyObject.Object.name;

                    name += " - " + enemyObject.waveType.ToString();

                    enemyObject.name = name;
                }
            }
        }
    }

    public void InitGuid()
    {
        foreach (var enemyObject in enemySpawnWaves)
        {
            if (enemyObject != null)
            {
                if (enemyObject.enemyObject != null)
                {
                    enemyObject.guid = Guid.NewGuid().ToString();
                }
            }
        }
    }
}
