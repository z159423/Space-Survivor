using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Ship", menuName = "Scriptable Object/Ship Data", order = int.MaxValue)]
public class ShipObject : ScriptableObject
{
    public ShipObjectData shipObjectData = new ShipObjectData();

    [Space]
    public ShipType shipType;
    public string shipCode;
    public GameObject shipBody;
    public Sprite shipImage;

    [Space]
    // 1000, 5, 3.5  700, 7, 4.5   1200 5.5 2.5
    public Stat baseMaxHp = new Stat();
    public Stat baseMoveSpeed = new Stat();
    public Stat baseRotationSpeed = new Stat();
    public Stat baseDamage = new Stat();

    [Space]

    public int shipCost;

    [Space]

    public List<WeaponObject> basicWeapon = new List<WeaponObject>();
    public List<ShipUpgradeModules> shipUpgradeModuleList = new List<ShipUpgradeModules>();


}

[System.Serializable]
public class ShipObjectData
{
    public ShipType shipType;
    public string shipCode;
    public GameObject shipBody;
    public Sprite shipImage;

    [Space]
    // 1000, 5, 3.5  700, 7, 4.5   1200 5.5 2.5
    public Stat baseMaxHp = new Stat();
    public Stat baseMoveSpeed = new Stat();
    public Stat baseRotationSpeed = new Stat();
    public Stat baseDamage = new Stat();

    [Space]

    public int shipCost;

    [Space]

    public List<WeaponObject> basicWeapon = new List<WeaponObject>();
    public List<ShipUpgradeModules> shipUpgradeModuleList = new List<ShipUpgradeModules>();
}

[System.Serializable]
public class ShipUpgradeModules
{
    public ShipUpgradeType upgradeType;
    public int currentUpgrade = 0;
    public int maxUpgrade = 5;

    [Space]

    public float statUpgradeValueForLevel = 0;
    public int upgradeCostForLevel = 100;

    public void UpgradeThisModule(ShipObjectData data)
    {
        currentUpgrade++;

        switch (upgradeType)
        {
            case ShipUpgradeType.Health:
                data.baseMaxHp.AddFloatModifier(statUpgradeValueForLevel);
                break;

            case ShipUpgradeType.Damage:
                data.baseDamage.AddFloatModifier(statUpgradeValueForLevel);
                break;

            case ShipUpgradeType.Speed:
                data.baseMoveSpeed.AddFloatModifier(statUpgradeValueForLevel);
                data.baseRotationSpeed.AddFloatModifier(statUpgradeValueForLevel);
                break;

        }
    }

    public int GetUpgradeCost()
    {
        return upgradeCostForLevel * (currentUpgrade);
    }
}

public enum ShipUpgradeType { Health, Damage, Speed }
public enum ShipType { Attacker, Scout, Boomber, Carrier, BattleShip }
