using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Resource : MonoBehaviour
{
    [SerializeField] private resourceType type;

    [Space]

    [SerializeField] private int expValue = 1;

    private bool isTriggered = false;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.transform.CompareTag("Player") && !isTriggered)
        {
            isTriggered = true;
            gameObject.SetActive(false);
            ResourceGenerator.instance.EnQueueResource(type, gameObject);

            collision.GetComponentInParent<PlayerStat>().GetExp(expValue);
        }
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
