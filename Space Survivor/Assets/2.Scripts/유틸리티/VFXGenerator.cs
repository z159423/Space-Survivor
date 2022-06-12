using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VFXGenerator : MonoBehaviour
{
    public List<VFXPool> vfxPool = new List<VFXPool>();

    public List<GameObject> generatedResource = new List<GameObject>();

    public static VFXGenerator instance;

    private void Awake()
    {
        instance = this;
    }

    public void EnQueueVFX(VFXType type, GameObject resource)
    {
        for (int i = 0; i < vfxPool.Count; i++)
        {
            if (type == vfxPool[i].type)
            {
                resource.gameObject.SetActive(false);
                vfxPool[i].EnQueue(resource);

                break;
            }
        }
    }

    public void GenerateVFX(VFXType type, Vector2 position)
    {
        for (int i = 0; i < vfxPool.Count; i++)
        {
            if (type == vfxPool[i].type)
            {
                var success = vfxPool[i].DeQueue(position);

                if (!success.success)
                {
                    var vfx = Instantiate(success.Object, position, Quaternion.identity, vfxPool[i].parent);

                    generatedResource.Add(vfx);

                    StartCoroutine(endVFX2());

                    IEnumerator endVFX2()
                    {
                        yield return new WaitForSeconds(vfxPool[i].endTime);

                        EnQueueVFX(vfxPool[i].type, vfx);
                    }
                }
                else
                {
                    StartCoroutine(endVFX());

                    IEnumerator endVFX()
                    {
                        yield return new WaitForSeconds(vfxPool[i].endTime);

                        EnQueueVFX(vfxPool[i].type, success.Object);
                    }
                }

                break;
            }
        }
    }
}

[System.Serializable]
public class VFXPool
{
    public Stack<GameObject> vfxStack = new Stack<GameObject>();

    public GameObject Prefab;
    public Transform parent;
    public VFXType type;
    public float endTime = 5f;

    public void EnQueue(GameObject enemy)
    {
        vfxStack.Push(enemy);
    }

    public Return DeQueue(Vector2 position)
    {
        Return ret = new Return();

        if (vfxStack.Count > 0)
        {
            var vfx = vfxStack.Pop();

            vfx.transform.position = position;
            vfx.SetActive(true);

            ret.Object = vfx;
            ret.success = true;

            return ret;
        }
        else
        {
            ret.Object = Prefab;
            ret.success = false;

            return ret;
        }
    }

    public class Return
    {
        public GameObject Object;
        public bool success = false;
    }
}

public enum VFXType { none, enemyDie1, playerDie1, missileExplode, projectileBlowupSmall, Explode1 }
