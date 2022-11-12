using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


[CreateAssetMenu(fileName = "Stage", menuName = "Scriptable Object/New Stage", order = int.MaxValue)]
public class Stage : ScriptableObject
{
    [field: SerializeField] public Sprite stageImage {get; private set;}
    [field: SerializeField] public string stageNameKey {get; private set;}
    [field: SerializeField] public string stageDescriptionKey { get; private set; }
    [SerializeField] private SpawnWaveObject spawnWaveObject;
}
