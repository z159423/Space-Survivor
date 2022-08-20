using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public interface IProjectileLogic
{
    //public WeaponType type { get; }
    public PlayerWeapon playerWeapon { get; set; }
    public WeaponObject weaponObject { get; set; }

    void Fire(Transform target, int fireForce);
    void ResetProjectile();
    void UpgradeProjectile(GameObject projectile);
}

public class ProjectileLogic : MonoBehaviour, IProjectileLogic
{

    public WeaponType type;
    [Space]

    //[SerializeField] private float fireForce = 1000f;
    [SerializeField] private Stat damage = new Stat();

    [SerializeField] private int hitLimit = 1;
    private int hitCount = 0;

    [SerializeField] private int knockBackForce = 0;

    [Space]

    [SerializeField] private bool deleteOnTime = true;
    [SerializeField] private float deleteTime = 3f;
    [SerializeField] private VFXType deleteVFXType;

    [Space]

    [SerializeField] private bool lookFirePos = false;
    [SerializeField] private bool Spread = false;
    [SerializeField] private Vector3 spreadOffset;

    [Space]

    [SerializeField] private bool randomSpawn = false;
    [SerializeField] private Vector3 randomSpawnOffset;

    [Space]

    [SerializeField] private bool fireToNearEnemy = false;
    [SerializeField] protected float fireToNearEnemyRadius = 25f;

    [Space]

    [SerializeField] private bool flak = false;

    [Space]

    [SerializeField] new protected Rigidbody2D rigidbody;
    [SerializeField] public PlayerWeapon playerWeapon { get; set; }
    [SerializeField] private ParticleSystem[] vfxs;
    [SerializeField] private TrailRenderer[] trails;
    [SerializeField] public WeaponObject weaponObject { get; set; }

    private void OnEnable()
    {
        for (int i = 0; i < vfxs.Length; i++)
        {
            vfxs[i].transform.SetParent(transform);
            vfxs[i].transform.localPosition = Vector3.zero;

            vfxs[i].transform.localScale = new Vector3(1, 1, 1);

            vfxs[i].Play();
        }
    }

    public virtual void Fire(Transform target, int fireForce)
    {
        for (int i = 0; i < trails.Length; i++)
        {
            trails[i].Clear();
        }

        /* rigidbody.velocity = Vector2.zero;

        Vector2 fireDir = Vector2.zero;

        if (lookFirePos)
        {
            var dir = Utility.GetDirection(transform.position, target.position);

            var angle = Mathf.Atan2((dir.y + transform.position.y) - transform.position.y,
            (dir.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;

            transform.rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);
        }

        if (fireToNearEnemy)
        {
            var nearEnemy = Utility.FindNearEnemy(transform, fireToNearEnemyRadius);

            if (nearEnemy == null)
            {
                var dir2 = Utility.GetDirection(transform.position, transform.position + new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f)));

                rigidbody.AddForce(dir2 * fireForce);

                var angle = Mathf.Atan2((dir2.y + transform.position.y) - transform.position.y,
            (dir2.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;

                transform.rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);

            }
            else
            {
                AddForce(nearEnemy, fireForce);
            }

        }
        else
        {
            AddForce(target, fireForce);
        }

        if(flak)
        {
            var dir = Utility.GetDirection(transform.position, transform.position + weaponObject.GetRandomDir());
            rigidbody.AddForce(dir * fireForce);
        }

        void AddForce(Transform target, int fireForce)
        {
            Vector2 dir;

            if (Spread)
            {
                dir = Utility.GetDirection(transform.position, target.position + new Vector3(Random.Range(-spreadOffset.x, spreadOffset.x), Random.Range(-spreadOffset.y, spreadOffset.y)));
                rigidbody.AddForce(dir * fireForce);
            }
            else
            {
                dir = Utility.GetDirection(transform.position, target.position);
                rigidbody.AddForce(dir * fireForce);
            }

            if (randomSpawn)
            {
                transform.position += new Vector3(Random.Range(-randomSpawnOffset.x, randomSpawnOffset.x), Random.Range(-randomSpawnOffset.y, randomSpawnOffset.y));
            }

        } */

        if (deleteOnTime)
            StartCoroutine(DeleteOnTime());
    }

    protected void AddForce(Transform target, int fireForce)
    {
        Vector2 dir;

        if (Spread)
        {
            dir = Utility.GetDirection(transform.position, target.position + new Vector3(Random.Range(-spreadOffset.x, spreadOffset.x), Random.Range(-spreadOffset.y, spreadOffset.y)));
            rigidbody.AddForce(dir * fireForce);
        }
        else
        {
            dir = Utility.GetDirection(transform.position, target.position);
            rigidbody.AddForce(dir * fireForce);
        }

        if (randomSpawn)
        {
            transform.position += new Vector3(Random.Range(-randomSpawnOffset.x, randomSpawnOffset.x), Random.Range(-randomSpawnOffset.y, randomSpawnOffset.y));
        }

    }

    //시간지나면 파괴되도록
    private IEnumerator DeleteOnTime()
    {
        yield return new WaitForSeconds(deleteTime);

        if (gameObject.activeSelf)
        {
            OffProjectile();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.CompareTag("Enemy"))
        {
            hitCount++;

            if (hitCount >= hitLimit)
            {
                OffProjectile();
            }

            collision.GetComponent<EnemyStat>().TakeDamage(damage.GetFinalStatValueAsInt());
            collision.GetComponent<EnemyStat>().Knockback(collision.bounds.center, knockBackForce);
        }
    }

    //발사체와 발사체에 부착되어 있는 vfx해제
    public void OffProjectile()
    {
        for (int i = 0; i < vfxs.Length; i++)
        {
            vfxs[i].transform.SetParent(null);

            vfxs[i].transform.localScale = new Vector3(1, 1, 1);

            vfxs[i].Stop();
        }

        playerWeapon.EnQueueBullet(this);
        gameObject.SetActive(false);

        if (deleteVFXType != VFXType.none)
        {
            VFXGenerator.instance.GenerateVFX(deleteVFXType, transform.position);
        }


    }

    public void UpgradeProjectile(GameObject projectile)
    {
        weaponObject.UpgradeProjectile(projectile);
    }

    public void ResetProjectile()
    {
        hitCount = 0;
    }

    public PlayerWeapon GetPlayerWeapon()
    {
        return playerWeapon;
    }

    public void AddDamage(float percent)
    {
        damage.AddPercentModifier(percent);
    }

    public void AddDamage(int intValue)
    {
        damage.AddFloatModifier(intValue);
    }

    public void ClearDamageModifire()
    {
        damage.ClearIntModifier();
        damage.ClearPercentModifier();
    }

    public Stat GetDamage()
    {
        return damage;
    }
}
