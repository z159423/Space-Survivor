using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceGenerator : MonoBehaviour
{
    public List<ResourcePool> resourcePool = new List<ResourcePool>();

    public List<GameObject> generatedResource = new List<GameObject>();

    //[SerializeField] private GameObject blueMineral;
    //[SerializeField] private Transform blueMineralParent;


    public static ResourceGenerator instance;

    private void Awake()
    {
        instance = this;
    }

    public void EnQueueResource(resourceType type, GameObject resource)
    {
        for(int i = 0; i < resourcePool.Count; i++)
        {
            if(type == resourcePool[i].type)
            {
                resourcePool[i].EnQueue(resource);

                break;
            }
        }
    }

    public void DeQueueResource(resourceType type,Vector2 position)
    {
        for (int i = 0; i < resourcePool.Count; i++)
        {
            if(type == resourcePool[i].type)
            {
                var success = resourcePool[i].DeQueue(position);

                if (success != null)
                {
                    Vector2 randomPosition = new Vector2(Random.Range(-.3f, .3f), Random.Range(-.3f, .3f));

                    var enemy = Instantiate(success, position + randomPosition, Quaternion.identity, resourcePool[i].parent);

                    generatedResource.Add(enemy);
                }

                //Debug.Log("spawn resource");

                break;
            }
        }
    }

    public void DeleteAllResource()
    {
        for (int i = 0; i < generatedResource.Count; i++)
        {
            if (generatedResource[i].gameObject.activeSelf)
            {
                generatedResource[i].GetComponent<Resource>().EnQueueThisResource();
            }
        }
    }
}

[System.Serializable]
public class ResourcePool
{
    public Stack<GameObject> resourceStack = new Stack<GameObject>();

    public GameObject Object;
    public Transform parent;
    public resourceType type;

    public void EnQueue(GameObject enemy)
    {
        resourceStack.Push(enemy);
    }

    public GameObject DeQueue(Vector2 position)
    {
        if (resourceStack.Count > 0)
        {
            var enemy = resourceStack.Pop();

            enemy.transform.position = position;
            enemy.SetActive(true);
            enemy.GetComponent<Resource>().ResetResource();

            return null;
        }
        else
        {
            return Object;
        }
    }
}

public enum resourceType {none, Mineral1 , Mineral2, Crystal,Mineral3 }
