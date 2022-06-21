using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField] private ItemType itemType;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.CompareTag("Player"))
        {
            switch (itemType)
            {
                case ItemType.MissileBurst:
                    MissileBurst();
                    break;

                case ItemType.Repair:
                    Repair(collision);
                    break;

                case ItemType.Magnetic:
                    Magnetic();
                    break;
            }

            EnQueueThisItem();
        }
    }

    private void MissileBurst()
    {

    }

    private void Repair(Collider2D player)
    {
        if(player.TryGetComponent<PlayerStat>(out PlayerStat stat))
        {
            stat.Heal(200);
        }
    }

    private void Magnetic()
    {

    }

    public void EnQueueThisItem()
    {
        ItemGenerator.instance.EnQueueItem(itemType, gameObject);
        gameObject.SetActive(false);
    }
}

public enum ItemType{none, MissileBurst, Repair, Magnetic }
