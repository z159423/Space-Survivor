using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class StarLight : MonoBehaviour
{
    [SerializeField] private Transform firePos1, fireDir1, firePos2, fireDir2, firePos3, fireDir3;
    [Space]

    public float rotateSpeed = 10f;

    [Space]

    public float starBubbleFireRate = 0.5f;
    public float starBubbleFireForce = 1f;

    private Coroutine fireStarBubbleCoroutine;

    private void Update()
    {
        transform.Rotate(new Vector3(0, 0, Time.deltaTime * rotateSpeed));
    }

    private void OnEnable()
    {
        StartFireStarBubble();
    }

    public void StartFireStarBubble()
    {
        fireStarBubbleCoroutine = StartCoroutine(fireingStarBubble());

        IEnumerator fireingStarBubble()
        {
            yield return new WaitForSeconds(5f);
            while (true)
            {
                var starBubble1 = ProjectileGenerator.instance.DeQueueProjectile(ProjectileType.StarBubble1, firePos1.position);
                var starBubble2 = ProjectileGenerator.instance.DeQueueProjectile(ProjectileType.StarBubble1, firePos2.position);
                var starBubble3 = ProjectileGenerator.instance.DeQueueProjectile(ProjectileType.StarBubble1, firePos3.position);

                if (starBubble1 == null)
                    print(1);

                if (starBubble1.GetComponent<StarBubble>() == null)
                    print(2);

                starBubble1.GetComponent<StarBubble>().Fire(fireDir1, starBubbleFireForce);
                starBubble2.GetComponent<StarBubble>().Fire(fireDir2, starBubbleFireForce);
                starBubble3.GetComponent<StarBubble>().Fire(fireDir3, starBubbleFireForce);

                yield return new WaitForSeconds(starBubbleFireRate);
            }
        }

    }

    private void OnDisable()
    {
        if (fireStarBubbleCoroutine != null)
            StopCoroutine(fireStarBubbleCoroutine);
    }
}
