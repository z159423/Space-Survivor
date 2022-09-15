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
    }

    public void EnqueueText(TextMeshProUGUI text)
    {
        text.gameObject.SetActive(false);
        textPool.EnQueueText(text);
    }

    public void DequeueText(Vector3 position, int damage)
    {
        var text = textPool.DeQueueText(position, damage);

        StartCoroutine(activeText(text));

        IEnumerator activeText(TextMeshProUGUI text)
        {
            yield return new WaitForSeconds(1f);

            EnqueueText(text);
        }
    }
}

[System.Serializable]
public class TextPool
{
    public Queue<TextMeshProUGUI> textStack = new Queue<TextMeshProUGUI>();

    public GameObject textPrefabs;
    public Transform parent;
    public Camera camera;

    [Space]

    public Vector2 minVectorOffset;
    public Vector2 maxVectorOffset;


    public void EnQueueText(TextMeshProUGUI text)
    {
        textStack.Enqueue(text);
    }

    public TextMeshProUGUI DeQueueText(Vector3 position, int damage)
    {

        if (textStack.Count > 0)
        {
            var text = textStack.Dequeue();

            text.transform.position = position;
            //text.transform.position = camera.WorldToScreenPoint(position);
            text.text = damage.ToString();
            var damageText = text.GetComponent<DamageText>();
            damageText.textPosition = position + new Vector3(Random.Range(minVectorOffset.x, maxVectorOffset.x), Random.Range(minVectorOffset.y, maxVectorOffset.y),0);
            damageText.cam = camera;
            damageText.GetComponent<Animator>().SetTrigger("Active");
            text.gameObject.SetActive(true);

            return text;
        }
        else
        {
            var text = GameObject.Instantiate(textPrefabs, position,Quaternion.identity, parent);
            text.GetComponent<TextMeshProUGUI>().text = damage.ToString();
            //text.transform.position = camera.WorldToScreenPoint(position);
            var damageText = text.GetComponent<DamageText>();
            damageText.textPosition = position + new Vector3(Random.Range(minVectorOffset.x, maxVectorOffset.x), Random.Range(minVectorOffset.y, maxVectorOffset.y), 0);
            damageText.cam = camera;
            damageText.GetComponent<Animator>().SetTrigger("Active");
            text.gameObject.SetActive(true);

            return text.GetComponent<TextMeshProUGUI>();
        }
    }
}


