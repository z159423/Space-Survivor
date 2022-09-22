using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarBubble : MonoBehaviour
{
    public ProjectileType type;
    public int damage = 50;

    public float deleteTime = 3f;
    public VFXType deleteParticleType;

    [SerializeField] private Rigidbody2D rigid;

    private Coroutine deleteCoroutine;

    private void OnEnable()
    {
        deleteCoroutine = StartCoroutine(delete());
        
        IEnumerator delete()
        {
            yield return new WaitForSeconds(deleteTime);

            ProjectileGenerator.instance.EnQueueProjectile(type, gameObject);
        }

    }

    private void OnDisable()
    {
        if(deleteCoroutine != null)
            StopCoroutine(deleteCoroutine);

        VFXGenerator.instance.GenerateVFX(deleteParticleType, transform.position);
    }

    public void Fire(Transform target, float fireForce)
    {
        Vector2 fireDir;

        fireDir = Utility.GetDirection(transform.position, target.position);

        var angle = Mathf.Atan2((fireDir.y + transform.position.y) - transform.position.y,
        (fireDir.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;

        transform.rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);

        rigid.AddForce(transform.up * fireForce);
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.CompareTag("Player"))
        {
            ProjectileGenerator.instance.EnQueueProjectile(type, gameObject);

            collision.gameObject.GetComponentInParent<PlayerStat>().TakeDamage(damage);
        }
    }
}
