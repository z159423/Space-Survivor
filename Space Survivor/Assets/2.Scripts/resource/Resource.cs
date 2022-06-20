using UnityEngine;

public class Resource : MonoBehaviour
{
    [SerializeField] private resourceType type;

    [Space]

    [SerializeField] private int expValue = 0;
    [SerializeField] private int crystalValue = 0;

    [Space]
    [SerializeField] private float maxPullForce = 10f;
    [SerializeField] private float startPullForce = -3f;
    [SerializeField] private float pullForceIncrease = 1f;
    [Space]
    [SerializeField] private Rigidbody2D rigid;

    private float currentPullForce = -1f;
    private Vector2 dirToPlayer;
    private Transform player;

    private bool isTriggered = false;

    private void Update()
    {
        if(isTriggered && player != null)
        {
            currentPullForce += Time.deltaTime * pullForceIncrease;

            dirToPlayer = Utility.GetDirection(transform.position, player.position);

            //rigid.velocity += dirToPlayer * Time.deltaTime * currentPullForce;

            transform.Translate(dirToPlayer * Time.deltaTime * currentPullForce);

            if (Vector2.Distance(player.position, transform.position) < 0.5f)
                playerGetResource(player);

        }
    }

    private void OnDisable()
    {
        player = null;
        currentPullForce = startPullForce;
        dirToPlayer = Vector2.zero;
        isTriggered = false;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.transform.CompareTag("Player") && !isTriggered)
        {
            StartPull(collision.transform);
        }
    }

    private void StartPull(Transform player)
    {
        isTriggered = true;

        this.player = player;
    }

    private void playerGetResource(Transform player)
    {
        gameObject.SetActive(false);
        ResourceGenerator.instance.EnQueueResource(type, gameObject);

        var playerStat = player.GetComponentInParent<PlayerStat>();

        playerStat.GetExp(expValue);
        playerStat.GetCrystal(crystalValue);

    }

    public void TriggerChange(bool trigger)
    {
        isTriggered = trigger;
    }

    public void ResetResource()
    {
        isTriggered = false;
    }

    public void EnQueueThisResource()
    {
        ResourceGenerator.instance.EnQueueResource(type, gameObject);
        gameObject.SetActive(false);
        isTriggered = false;
    }
}
