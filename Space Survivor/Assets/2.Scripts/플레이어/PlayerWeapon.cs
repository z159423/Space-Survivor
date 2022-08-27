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
    [SerializeField] public PlayerStat playerStat;

    [Space]
    public List<WeaponSlot> weaponSlotList = new List<WeaponSlot>();

    [Space]

    public bool allowFire = false;


    private void Update()
    {
        if (playerStat.GetPlayerDie() || !allowFire)
            return;

        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].ready)
            {
                weaponSlotList[i].weaponCoolTimeImage.StartCoolTime(weaponPool[i].coolTime.GetFinalStatValue());
                StartCoroutine(ProjectileReload(weaponPool[i]));

                StartCoroutine(weaponPool[i].Fire(weaponPool[i].GetFirePos().position, this));
            }
        }
    }

    public IEnumerator ProjectileReload(WeaponObject pool)
    {
        pool.ready = false;

        yield return new WaitForSeconds(pool.coolTime.GetFinalStatValue());
        pool.ready = true;
    }

    public void EnQueueBullet(ProjectileLogic bullet)
    {
        foreach (WeaponObject pool in weaponPool)
        {
            if (pool.type == bullet.type)
            {
                pool.EnQueue(bullet.gameObject);
            }
        }
    }

    public bool CheckProjectileContainQueue(ProjectileLogic bullet)
    {
        foreach (WeaponObject pool in weaponPool)
        {
            if (pool.type == bullet.type)
            {
                return pool.IsProjectileContain(bullet.gameObject);
            }
        }

        return false;
    }

    public void ResetPlayerWeapon()
    {
        for (int i = 0; i < weaponPool.Count; i++)
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

        LevelUpManager.instance.AddNewWeaponImage(weapon, weaponSlotList);
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

        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].GetCurrentWeaponLevel() > weaponPool[i].maxWeaponLevel)
                weaponObjects.Add(weaponPool[i]);
        }

        return weaponObjects;
    }

    public void UpgradeWeapon(WeaponObject weaponObject)
    {
        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponObject.type == weaponPool[i].type)
            {
                weaponPool[i].UpgradeWeapon(weaponPool[i].GetUpgradeModuleList());
                LevelUpManager.instance.AddUpgradeNode(weaponObject);
                return;
            }
        }

        AddNewWeapon(weaponObject);
    }

    public WeaponObject GetCurrentWeapon(WeaponType type)
    {
        for (int i = 0; i < weaponPool.Count; i++)
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

    public bool GetIsWeaponHave(WeaponType type)
    {
        for (int i = 0; i < weaponPool.Count; i++)
        {
            if (weaponPool[i].type == type)
            {
                //Debug.LogError(type);
                return true;
            }
        }

        return false;
    }

    public void MissileBurst(Collider2D player)
    {
        StartCoroutine(Missile());

        IEnumerator Missile()
        {
            for (int i = 0; i < 20; i++)
            {

                yield return new WaitForSeconds(.15f);

                if(playerStat.GetPlayerDie())
                break;

                var missile = ProjectileGenerator.instance.DeQueueProjectile(ProjectileType.BurstMissile, player.transform.position);

                if (missile.TryGetComponent<BurstMissile>(out BurstMissile burstMissile))
                {
                    burstMissile.InitMissile(player.GetComponentInParent<PlayerStat>());
                }

                if (missile.TryGetComponent<ProjectileLogic>(out ProjectileLogic projectile))
                {
                    projectile.Fire(null, 0);
                }
            }
        }
    }

    public void ClearWeaponSlotList()
    {
        weaponSlotList.Clear();
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

