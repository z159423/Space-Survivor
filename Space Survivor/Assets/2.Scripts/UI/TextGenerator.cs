using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextGenerator : MonoBehaviour
{
    public static TextGenerator instance;

    public TextPool textPool;

    private void Awake()
    {
        instance = this;

        for(int i = 0; i < textPool.startStack.Length; i++)
        {
            textPool.textStack.Enqueue(textPool.startStack[i].gameObject);
        }
    }

    public void EnqueueText(GameObject text)
    {
        text.SetActive(false);
        textPool.EnQueueText(text);
    }

    public void DequeueText(Vector3 position, int damage, TextGenerateOffset offset)
    {
        print(offset.minVectorOffset + " " + offset.maxVectorOffset);
        var text = textPool.DeQueueText(position, damage, offset);

        StartCoroutine(activeText(text));

        IEnumerator activeText(GameObject text)
        {
            yield return new WaitForSeconds(1f);

            EnqueueText(text);
        }
    }
}

[System.Serializable]
public class TextPool
{
    public Queue<GameObject> textStack = new Queue<GameObject>();
    public GameObject[] startStack;

    public GameObject textPrefabs;
    public Transform parent;
    public Camera camera;

    [Space]

    public Vector2 minVectorOffset;
    public Vector2 maxVectorOffset;


    public void EnQueueText(GameObject text)
    {
        textStack.Enqueue(text);
    }

    public GameObject DeQueueText(Vector3 position, int damage, TextGenerateOffset offset)
    {
        if (textStack.Count > 0)
        {
            var text = textStack.Dequeue();

            text.transform.position = position;
            //text.transform.position = camera.WorldToScreenPoint(position);
            text.GetComponentInChildren<TextMeshProUGUI>().text = damage.ToString();
            var damageText = text.GetComponent<DamageText>();
            damageText.textPosition = position + new Vector3(Random.Range(offset.minVectorOffset.x, offset.maxVectorOffset.x)
            , Random.Range(offset.minVectorOffset.y, offset.maxVectorOffset.y),0);
            damageText.cam = camera;
            text.gameObject.SetActive(true);
            damageText.GetComponentInChildren<Animator>().SetTrigger("Active");

            return text;
        }
        else
        {
            var text = GameObject.Instantiate(textPrefabs, position,Quaternion.identity, parent);
            text.GetComponentInChildren<TextMeshProUGUI>().text = damage.ToString();
            //text.transform.position = camera.WorldToScreenPoint(position);
            var damageText = text.GetComponent<DamageText>();
            damageText.textPosition = position + new Vector3(Random.Range(offset.minVectorOffset.x, offset.maxVectorOffset.x)
            , Random.Range(offset.minVectorOffset.y, offset.maxVectorOffset.y), 0);
            damageText.cam = camera;
            text.gameObject.SetActive(true);
            damageText.GetComponentInChildren<Animator>().SetTrigger("Active");

            return text;
        }
    }
}

[System.Serializable]
public class TextGenerateOffset
{
    public Vector2 minVectorOffset = new Vector2(-0.15f, -0.15f);
    public Vector2 maxVectorOffset = new Vector2(0.15f, 0.15f);
}

