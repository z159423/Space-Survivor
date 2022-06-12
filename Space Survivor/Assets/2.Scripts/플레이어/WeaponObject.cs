using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Weapon", menuName = "Scriptable Object/Weapon Data", order = int.MaxValue)]
public class WeaponObject : ScriptableObject
{
    public Stack<GameObject> bulletStack = new Stack<GameObject>();

    public GameObject projectilePrefab;
    public Transform parent;
    public WeaponType type;
    private Transform firePos;
    private Transform fireDir;
    private Vector3 randomDir;
    public string firePosName = "FirePos1";
    public string fireDirName = "FireDir1";

    public bool ready = true;
    public Stat coolTime = new Stat();                 //발사 쿨타임

    [Space]

    public Stat damageMultifly = new Stat();

    [Space]

    public int projectileAmount = 1;            //발사 개수
    public Stat firingInterval = new Stat();         //발사 주기

    [Space]

    public Stat FireForce = new Stat();

    [Space]

    public List<UpgradeModule> currentUpgradeModules = new List<UpgradeModule>();
    public List<UpgradeModuleList> UpgradeModulesForLevel = new List<UpgradeModuleList>();

    [Space]

    public int maxWeaponLevel = 6;
    private int currentWeaponLevel = 1;

    public void UpgradeWeapon(UpgradeModuleList modules)
    {
        for(int i = 0; i < modules.upgradeModules.Count; i++)
        {
            switch (modules.upgradeModules[i].upgradeModuleType)
            {
                case upgradeModuleType.DamageIncrease:
                    damageMultifly.AddPercentModifier(modules.upgradeModules[i].value1);
                    break;

                case upgradeModuleType.CoolTimeDecrease:
                    coolTime.AddPercentModifier(modules.upgradeModules[i].value1);
                    break;

                case upgradeModuleType.IncreasedProjectiles:
                    projectileAmount += Mathf.RoundToInt(modules.upgradeModules[i].value1);
                    break;

                case upgradeModuleType.IncreaseFireForce:
                    FireForce.AddPercentModifier(modules.upgradeModules[i].value1);
                    break;

                case upgradeModuleType.IncreaseSize:

                    break;
            }

            currentUpgradeModules.Add(modules.upgradeModules[i]);
        }

        currentWeaponLevel++;
        
    }

    public void EnQueue(GameObject enemy)
    {
        bulletStack.Push(enemy);
    }

    public Return DeQueue(Vector2 position)
    {
        Return ret = new Return();

        if (bulletStack.Count > 0)
        {
            var bullet = bulletStack.Pop();

            bullet.transform.position = position;
            bullet.SetActive(true);

            var projectileLogic = bullet.GetComponent<ProjectileLogic>();
            projectileLogic.ResetProjectile();

            ret.Object = bullet;
            ret.success = true;

            return ret;
        }
        else
        {
            ret.Object = projectilePrefab;
            ret.success = false;

            return ret;
        }
    }

    public void SetFirePos(Transform pos)
    {
        firePos = pos;
    }

    public Transform GetFirePos()
    {
        return firePos;
    }

    public void SetFireDir(Transform dir)
    {
        fireDir = dir;
    }

    public Transform GetFireDir()
    {
        return fireDir;
    }

    public void ResetThisWeapon()
    {
        ready = true;
    }

    public class Return
    {
        public GameObject Object;
        public bool success = false;
    }

    public int GetCurrentWeaponLevel()
    {
        return currentWeaponLevel;
    }

    public UpgradeModuleList GetUpgradeModuleList()
    {
        return UpgradeModulesForLevel[currentWeaponLevel - 1];
    }

    public void ChangeRandomDir()
    {
        randomDir = new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
    }

    public Vector3 GetRandomDir()
    {
        return randomDir;
    }
}

[System.Serializable]
public class UpgradeModuleList
{
    public List<UpgradeModule> upgradeModules = new List<UpgradeModule>();
}

public enum WeaponType { SquareCannon, SmallShotCannon, HomingMissile, MeteoriteFlak, FireworkRocket }