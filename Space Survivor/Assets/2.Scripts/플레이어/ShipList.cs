using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new ShipList", menuName = "Scriptable Object/Ship/new ShipList", order = int.MaxValue)]
public class ShipList : ScriptableObject
{
    public List<ShipObject> shipList = new List<ShipObject>();

}
