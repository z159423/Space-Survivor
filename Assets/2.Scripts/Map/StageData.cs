using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Stage Data", menuName = "Scriptable Object/New Stage Data", order = int.MaxValue)]
public class StageData : ScriptableObject
{
    public Stage[] stages;
}
