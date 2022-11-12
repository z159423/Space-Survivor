using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "EnemySpawnWaveObject", menuName = "Scriptable Object/New Enemy SpawnWave Object", order = int.MaxValue)]
public class SpawnWaveObject : ScriptableObject
{
    [SerializeField]
    public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();

}
