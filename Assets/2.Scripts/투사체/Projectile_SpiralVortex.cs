using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile_SpiralVortex : ProjectileLogic
{
    [SerializeField] private float spawnRadius = 2f;
    private List<Collider2D> enemyOnCollider = new List<Collider2D>();

    private Coroutine damageTick;

    public override void Fire(Transform target, int fireForce)
    {
        base.Fire(target, fireForce);

        int[] position = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        SetPosition(Random.Range(0, 10));
    }

    private void OnEnable()
    {
        damageTick = StartCoroutine(DamageTick());

        IEnumerator DamageTick()
        {
            while (true)
            {
                for (int i = 0; i < enemyOnCollider.Count; i++)
                {
                    TakeDamage(enemyOnCollider[i]);
                }

                yield return new WaitForSeconds(.5f);
            }
        }
    }

    private void SetPosition(int positionNum)
    {
        transform.position = playerWeapon.transform.position + new Vector3(0, spawnRadius, 0);

        transform.RotateAround(playerWeapon.transform.position, new Vector3(0, 0, 1), positionNum * (360 / 10));
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Enemy") && !enemyOnCollider.Contains(other))
        {
            enemyOnCollider.Add(other);
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (enemyOnCollider.Contains(other))
        {
            enemyOnCollider.Remove(other);
        }
    }

    private void OnDisable()
    {
        enemyOnCollider.Clear();
        StopCoroutine(damageTick);
    }
}
