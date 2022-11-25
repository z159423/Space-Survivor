using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;


public class EnemyStat : MonoBehaviour
{
    [SerializeField] private EnemyType type;

    [SerializeField] protected int maxHp = 10;
    protected int currentHp = 10;

    [Space]
    //[SerializeField] private int damage = 5;
    [SerializeField] private Stat damage = new Stat();
    [SerializeField] private bool hitEffect = true;
    [SerializeField] private float hitEffectTime = 0.1f;
    [SerializeField] private Material hitMat;
    [SerializeField] private SpriteRenderer spriteRenderer;
    private Material originalMat;

    [Space]
    [SerializeField] private Rigidbody2D rigid;
    //[SerializeField] private float moveSpeed = 1f;
    [SerializeField] private Stat moveSpeed = new Stat();

    //[SerializeField] private float rotationSpeed = 0.05f;
    [SerializeField] private Stat rotationSpeed = new Stat();
    [Space]
    [SerializeField] private DropTable dropTable;
    //[SerializeField] private GameObject expObject;
    //[SerializeField] private resourceType resourceType;
    [Space]
    [SerializeField] private VFXType dieVFXType;
    //[SerializeField] private GameObject DieVFX;

    public bool moveStrate = false;
    private Vector2 movedir;
    private float angle;
    public TextGenerateOffset textGenerateOffset;

    [SerializeField] private Transform target;

    private void Start()
    {
        currentHp = maxHp;
        originalMat = spriteRenderer.material;
    }

    // Update is called once per frame
    protected void FixedUpdate()
    {
        if(target == null)
        return;
        
        if (!moveStrate)
            movedir = (target.position - transform.position).normalized;

        rigid.velocity += movedir * Time.deltaTime * moveSpeed.GetFinalStatValue();

        angle = Mathf.Atan2((movedir.y + transform.position.y) - transform.position.y,
            (movedir.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;

        if (rotationSpeed.GetFinalStatValue() > 0)
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.forward), rotationSpeed.GetFinalStatValue() * Time.deltaTime);
    }

    public virtual void TakeDamage(int damage, bool damageText = true)
    {
        if (damage <= 0)
            return;

        currentHp -= damage;

        if (damageText)
            TextGenerator.instance.DequeueText(transform.position, damage, textGenerateOffset);

        OnChangeHp();
    }

    protected void OnChangeHp()
    {
        if (currentHp <= 0)
        {
            Die();
        }
        else
        {
            if (hitEffect)
                StartCoroutine(HitEffect());
        }
    }

    public virtual void Die()
    {
        EnQueueThisEnemy();

        ResourceDrop(dropTable);

        //��� ��ƼŬ ����
        if (dieVFXType != VFXType.none)
        {
            VFXGenerator.instance.GenerateVFX(dieVFXType, transform.position);
        }

        GameManager.instance.AddKillCount();

        spriteRenderer.material = originalMat;

        AudioManager.instance.GenerateAudioAndPlaySFX("kill1", transform.position);
    }

    protected void ResourceDrop(DropTable dropTable)
    {
        //����ġ ���
        if (dropTable.expType != resourceType.none)
            ResourceGenerator.instance.DeQueueResource(dropTable.expType, transform.position, dropTable);
        //Instantiate(expObject,transform.position,Quaternion.identity);

        //ũ����Ż ���
        if (Utility.PercentageCalculator(dropTable.crystalDropPercent, 100))
        {
            ResourceGenerator.instance.DeQueueResource(dropTable.crystalType, transform.position, dropTable);
        }

        //������ ���
        if (Utility.PercentageCalculator(dropTable.ItemDropPercent, 1000))
        {
            ItemGenerator.instance.GenerateRandomItem(transform.position);
        }
    }

    /*private void OnCollisionStay2D(Collision2D collision)
    {
        if(collision.transform.CompareTag("Player"))
        {
            collision.transform.GetComponent<PlayerStat>().TakeDamage(damage);
        }
    }*/

    public new EnemyType GetType()
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

        moveStrate = false;
        moveSpeed.ClearPercentModifier();
    }

    public void Knockback(Vector2 hitPoint, int force)
    {
        rigid.AddForce(Utility.GetDirection(transform.position, hitPoint) * force, ForceMode2D.Impulse);
    }

    private IEnumerator HitEffect()
    {
        spriteRenderer.material = hitMat;

        yield return new WaitForSeconds(hitEffectTime);

        spriteRenderer.material = originalMat;
    }

    public int GetDamage()
    {
        return damage.GetFinalStatValueAsInt();
    }

    public void SetMoveStrate()
    {
        moveStrate = true;
        movedir = (target.position - transform.position).normalized;
        moveSpeed.AddPercentModifier(1);
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

    [Space]
    [Range(0, 1000)]
    public int ItemDropPercent;

    [Space]
    public float minDropForce;
    public float maxDropForce;

    [Space]

    public int dropExpMinAmount = 1;
    public int dropExpmaxAmount = 1;

    [Space]

    public int dropCrystalMinAmount = 1;
    public int dropCrystalmaxAmount = 1;
}
