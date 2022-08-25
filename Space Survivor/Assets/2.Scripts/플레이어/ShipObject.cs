using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Ship", menuName = "Scriptable Object/Ship Data", order = int.MaxValue)]
public class ShipObject : ScriptableObject
{
    public ShipType shipType;
    public GameObject shipBody;
    public List<WeaponObject> basicWeapon = new List<WeaponObject>();

    [Space]

    public int baseMaxHp = 100;
    public float baseMoveSpeed = 7f;
    public float baseRotationSpeed = 2f;

}

public enum ShipType {Attacker, Scout, Boomber, Carrier, BattleShip}
