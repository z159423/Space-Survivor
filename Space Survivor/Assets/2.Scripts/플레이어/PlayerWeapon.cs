using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWeapon : MonoBehaviour
{
    public List<WeaponObject> weaponPool = new List<WeaponObject>();

    //[SerializeField] private Transform firePos;
    //[SerializeField] private Transform fireDir;

    [Space]
    [SerializeField] private PlayerMovement playerMovement;
    [SerializeField] private PlayerStat playerStat;


    private void Update()
    {
        if (playerStat.GetPlayerDie())
            return;

        for(int i = 0; i < weaponPool.Count; i++)
        {
            if(weaponPool[i].ready)
            {
                StartCoroutine(ProjectileReload(weaponPool[i]));
                StartCoroutine(GenerateProjectile(weaponPool[i].type, weaponPool[i].GetFirePos().position));
            }
        }
    }


    public IEnumerator ProjectileReload(WeaponObject pool)
    {
        //var bullet = Instantiate(bullet1, firePos.position, Quaternion.identity);
        //bullet.GetComponent<ProjectileLogic>().Fire(Utility.GetDirection(firePos.position, fireDir.position));

        pool.ready = false;

        yield return new WaitForSeconds(pool.coolTime.GetFinalStatValue());
        pool.ready = true;
    }

    private IEnumerator GenerateProjectile(WeaponType type, Vector2 position)
    {

        for(int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].type == type)
            {
                for (int j = 0; j < weaponPool[i].projectileAmount; j++)
                {
                    var success = weaponPool[i].DeQueue(position);

                    if (success.success)
                    {
                        var projectileLogic = success.Object.GetComponent<ProjectileLogic>();
                        projectileLogic.ResetProjectile();
                        projectileLogic.SetPlayerWeapon(this);
                        projectileLogic.Fire(weaponPool[i].GetFireDir(), weaponPool[i].FireForce.GetFinalStatValueAsInt());

                        if (weaponPool[i].type == WeaponType.ThornSatellite)
                            projectileLogic.GetComponent<ThronSpike>().ChangePosition(weaponPool[i].projectileAmount, j);

                    }
                    else
                    {
                        var Object = Instantiate(weaponPool[i].projectilePrefab, position, Quaternion.identity);

                        var projectileLogic = Object.GetComponent<ProjectileLogic>();
                        projectileLogic.SetWeaponObject(weaponPool[i]);
                        projectileLogic.UpgradeProjectile(Object);
                        projectileLogic.ResetProjectile();
                        projectileLogic.SetPlayerWeapon(this);
                        projectileLogic.GetWeaponObject().AddActiveProjectile(Object);

                        projectileLogic.Fire(weaponPool[i].GetFireDir(), weaponPool[i].FireForce.GetFinalStatValueAsInt());

                        if (weaponPool[i].type == WeaponType.ThornSatellite)
                            projectileLogic.GetComponent<ThronSpike>().ChangePosition(weaponPool[i].projectileAmount, j);
                    }

                    yield return new WaitForSeconds(weaponPool[i].firingInterval.GetFinalStatValue());

                }

                if (weaponPool[i].type == WeaponType.MeteoriteFlak)
                    weaponPool[i].ChangeRandomDir();
            }
        }
    }

    public void EnQueueBullet(ProjectileLogic bullet)
    {
        foreach (WeaponObject pool in weaponPool)
        {
            if (pool.type == bullet.GetType())
            {
                pool.EnQueue(bullet.gameObject);
            }
        }
    }

    public bool CheckProjectileContainQueue(ProjectileLogic bullet)
    {
        foreach (WeaponObject pool in weaponPool)
        {
            if (pool.type == bullet.GetType())
            {
                return pool.IsProjectileContain(bullet.gameObject);
            }
        }

        return false;
    }

    public void ResetPlayerWeapon()
    {
        for(int i = 0; i < weaponPool.Count; i++)
        {
            weaponPool[i].ResetThisWeapon();
        }
    }

    public void AddNewWeapon(WeaponObject weapon)
    {
        var newWeapon = Instantiate(weapon);
        weaponPool.Add(newWeapon);
        FindFirePos(newWeapon);
        FindFireDir(newWeapon);

    }

    public void FindFirePos(WeaponObject weapon)
    {
        weapon.SetFirePos(playerStat.GetShipBody().Find(weapon.firePosName));
    }

    public void FindFireDir(WeaponObject weapon)
    {
        weapon.SetFireDir(playerStat.GetShipBody().Find(weapon.fireDirName));
    }

    public void ClearAllWeapon()
    {
        weaponPool.Clear();
    }

    public List<WeaponObject> GetMaxLevelWeaponList()
    {
        List<WeaponObject> weaponObjects = new List<WeaponObject>();

        for(int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].GetCurrentWeaponLevel() > weaponPool[i].maxWeaponLevel)
                weaponObjects.Add(weaponPool[i]);
        }

        return weaponObjects;
    }

    public void UpgradeWeapon(WeaponObject weaponObject)
    {
        for(int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponObject.type == weaponPool[i].type)
            {
                weaponPool[i].UpgradeWeapon(weaponPool[i].GetUpgradeModuleList());
                return;
            }
        }

        AddNewWeapon(weaponObject);
    }

    public WeaponObject GetCurrentWeapon(WeaponType type)
    {
        for(int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].type == type)
                return weaponPool[i];
        }

        return null;
    }

    public int GetWeaponLevel(WeaponType type)
    {
        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].type == type)
                return weaponPool[i].GetCurrentWeaponLevel();
        }

        return 0;
    }

    public int GetMaxWeaponLevel(WeaponType type)
    {
        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].type == type)
                return weaponPool[i].maxWeaponLevel;
        }

        return 0;
    }
}

/*public class WeaponPool
{
    public Stack<GameObject> bulletStack = new Stack<GameObject>();

    public GameObject projectilePrefab;
    public Transform parent;
    public WeaponType type;
    public Transform firePos;

    public bool ready = true;
    public float coolTime = 1f;

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

    public void ResetThisWeapon()
    {
        ready = true;
    }

    public class Return
    {
        public GameObject Object;
        public bool success = false;
    }
}*/

