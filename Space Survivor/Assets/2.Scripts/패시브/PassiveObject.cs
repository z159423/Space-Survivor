using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Passive", menuName = "Scriptable Object/Weapon Data", order = int.MaxValue)]
public class PassiveObject : ScriptableObject, Equipment
{
    
    public void Upgrade()
    {
        
    }

    public WeaponObject GetWeaponObject()
    {
        return null;
    }

    public PassiveObject GetPassive()
    {
        return this;
    }

}
