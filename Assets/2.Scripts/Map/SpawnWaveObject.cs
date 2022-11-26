using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "EnemySpawnWaveObject", menuName = "Scriptable Object/New Enemy SpawnWave Object", order = int.MaxValue)]
public class SpawnWaveObject : ScriptableObject
{
    
    [Space]
    public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();

    [SerializeField]
    public List<EnemyWaveBundle> enemySpawnWaves2 = new List<EnemyWaveBundle>();

}

[System.Serializable]
public class EnemyWaveBundle
{

    [SerializeField] private string name;
    [SerializeField] public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();
}
