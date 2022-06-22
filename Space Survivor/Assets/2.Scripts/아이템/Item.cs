using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField] private ItemType itemType;
    [SerializeField] private LayerMask resourceLayer;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.CompareTag("Player"))
        {
            switch (itemType)
            {
                case ItemType.MissileBurst:
                    MissileBurst(collision);
                    break;

                case ItemType.Repair:
                    Repair(collision);
                    break;

                case ItemType.Magnetic:
                    Magnetic(collision);
                    break;
            }

            EnQueueThisItem();
        }
    }


    private void MissileBurst(Collider2D player)
    {
        player.GetComponentInParent<PlayerWeapon>().MissileBurst(player);
    }


    private void Repair(Collider2D player)
    {
        player.GetComponentInParent<PlayerStat>().Heal(200);
        VFXGenerator.instance.GenerateVFX(VFXType.Heal1, player.transform.position);
    }

    private void Magnetic(Collider2D player)
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 50f, resourceLayer);

        for (int i = 0; i < colliders.Length; i++)
        {
            

            if (colliders[i].GetComponent<Resource>() != null)
                colliders[i].GetComponent<Resource>().StartPull(player.transform);
        }
    }

    public void EnQueueThisItem()
    {
        ItemGenerator.instance.EnQueueItem(itemType, gameObject);
        gameObject.SetActive(false);
    }
}

public enum ItemType{none, MissileBurst, Repair, Magnetic }
