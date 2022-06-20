using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;


public class EnemyStat : MonoBehaviour
{
    [SerializeField] private EnemyType type;

    [SerializeField] private int maxHp = 10;
    private int currentHp = 10;

    [Space]
    [SerializeField] private int damage = 5;
    [SerializeField] private bool hitEffect = true;
    [SerializeField] private float hitEffectTime = 0.1f;
    [SerializeField] private Material hitMat;
    [SerializeField] private SpriteRenderer spriteRenderer;
    private Material originalMat;

    [Space]
    [SerializeField] new private Rigidbody2D rigidbody;
    [SerializeField] private float moveSpeed = 1f;
    [SerializeField] private float rotationSpeed = 0.05f;
    [Space]
    [SerializeField] private DropTable dropTable;
    //[SerializeField] private GameObject expObject;
    //[SerializeField] private resourceType resourceType;
    [Space]
    [SerializeField] private VFXType dieVFXType;
    //[SerializeField] private GameObject DieVFX;

    private Vector2 movedir;
    private float angle;

    [SerializeField] private Transform target;

    private void Start()
    {
        currentHp = maxHp;
        originalMat = spriteRenderer.material;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        movedir = (target.position - transform.position).normalized;

        rigidbody.velocity += movedir * Time.deltaTime * moveSpeed;

        angle = Mathf.Atan2((movedir.y + transform.position.y) - transform.position.y,
            (movedir.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;

        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.forward), rotationSpeed * Time.deltaTime);

    }

    public void TakeDamage(int damage)
    {
        currentHp -= damage;

        OnChangeHp();
    }

    private void OnChangeHp()
    {
        if(currentHp <= 0)
        {
            Die();
        }
        else
        {
            if (hitEffect)
                StartCoroutine(HitEffect());
        }
    }

    private void Die()
    {
        EnQueueThisEnemy();

        if (dropTable.expType != resourceType.none)
            ResourceGenerator.instance.DeQueueResource(dropTable.expType, transform.position);
            //Instantiate(expObject,transform.position,Quaternion.identity);

        if(Utility.PercentageCalculator(dropTable.crystalDropPercent))
        {
            ResourceGenerator.instance.DeQueueResource(dropTable.crystalType, transform.position);
        }

        if(dieVFXType != VFXType.none)
        {
            VFXGenerator.instance.GenerateVFX(dieVFXType, transform.position);
        }

        GameManager.instance.AddKillCount();

        spriteRenderer.material = originalMat;
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if(collision.transform.CompareTag("Player"))
        {
            collision.transform.GetComponent<PlayerStat>().TakeDamage(damage);
        }
    }

    public EnemyType GetType()
    {
        return type;
    }

    public void SetTarget(Transform target)
    {
        this.target = target;
    }

    public void ResetStat()
    {
        currentHp = maxHp;
    }

    public void EnQueueThisEnemy()
    {
        EnemyGenerator.instance.EnQueueEnemy(this);
        gameObject.SetActive(false);
    }

    public void Knockback(Vector2 hitPoint ,int force)
    {
        rigidbody.AddForce(Utility.GetDirection(transform.position, hitPoint) * force, ForceMode2D.Impulse);
    }

    private IEnumerator HitEffect()
    {
        spriteRenderer.material = hitMat;

        yield return new WaitForSeconds(hitEffectTime);

        spriteRenderer.material = originalMat;
    }
}

[System.Serializable]
public class DropTable
{
    public resourceType expType;

    [Space]

    public resourceType crystalType;
    [Range(0, 100)]
    public int crystalDropPercent;



}
