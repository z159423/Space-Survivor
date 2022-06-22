using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileGenerator : MonoBehaviour
{
    [SerializeField] private PlayerWeapon playerWeapon;

    [Space]
    public List<ProjectilePool> projectilePool = new List<ProjectilePool>();
    public List<GameObject> generatedProjectile = new List<GameObject>();

    public static ProjectileGenerator instance;

    private void Awake()
    {
        instance = this;
    }

    public void GenerateRandomProjectile(Vector2 position)
    {
        DeQueueProjectile(projectilePool[Random.Range(0, projectilePool.Count)].type, position);
    }

    public void EnQueueProjectile(ProjectileType type, GameObject resource)
    {
        for (int i = 0; i < projectilePool.Count; i++)
        {
            if (type == projectilePool[i].type)
            {
                projectilePool[i].EnQueue(resource);

                break;
            }
        }
    }

    public GameObject DeQueueProjectile(ProjectileType type, Vector2 position)
    {
        for (int i = 0; i < projectilePool.Count; i++)
        {
            if (type == projectilePool[i].type)
            {
                var success = projectilePool[i].DeQueue(position);

                if (success != null)
                {
                    var item = Instantiate(success, position, Quaternion.identity, projectilePool[i].parent);

                    generatedProjectile.Add(item);

                    return item;
                }
            }
        }

        return null;
    }

    public void DeleteAllProjectile()
    {
        for (int i = 0; i < generatedProjectile.Count; i++)
        {
            if (generatedProjectile[i].gameObject.activeSelf)
            {
                generatedProjectile[i].GetComponent<Projectile>().EnQueueThisItem();
            }
        }
    }
}

public enum ProjectileType { none, BurstMissile }

[System.Serializable]
public class ProjectilePool
{
    public Stack<GameObject> projectileStack = new Stack<GameObject>();

    public GameObject Object;
    public Transform parent;
    public ProjectileType type;

    public void EnQueue(GameObject item)
    {
        projectileStack.Push(item);
    }

    public GameObject DeQueue(Vector2 position)
    {
        if (projectileStack.Count > 0)
        {
            var item = projectileStack.Pop();

            item.transform.position = position;
            item.SetActive(true);

            return null;
        }
        else
        {
            return Object;
        }
    }
}