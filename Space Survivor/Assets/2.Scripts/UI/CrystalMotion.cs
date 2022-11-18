using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CrystalMotion : MonoBehaviour
{
    [SerializeField] private Transform dieMenuCrystalStart;
    [SerializeField] private Transform dieMenuCrystalMotionParent;
    [SerializeField] private GameObject dieMenu;

    [Space]

    [SerializeField] private Transform clearMenuCrystalStart;
    [SerializeField] private Transform clearMenuCrystalMotionParent;
    [SerializeField] private GameObject clearMenu;

    [Space]

    [SerializeField] private Transform crystalEnd;
    [SerializeField] private Transform crystalText;

    [SerializeField] private ObjectPool motionCrystalPool;

    public static CrystalMotion instance;

    private void Awake()
    {
        instance = this;
    }

    public void StartCrystalMotion(int index, int count)
    {
        StartCoroutine(crystalMotion());

        IEnumerator crystalMotion()
        {
            Transform generatePoint = null;
            GameObject parent = null;

            switch (index)
            {
                case 0:
                    generatePoint = dieMenuCrystalStart;
                    motionCrystalPool.objectParent = dieMenuCrystalMotionParent;
                    parent = dieMenu;
                    break;

                case 1:
                    generatePoint = clearMenuCrystalStart;
                    motionCrystalPool.objectParent = clearMenuCrystalMotionParent;
                    parent = clearMenu;
                    break;

                default:
                    generatePoint = dieMenuCrystalStart;
                    motionCrystalPool.objectParent = dieMenuCrystalMotionParent;
                    parent = dieMenu;
                    break;
            }

            for (int i = 0; i < count; i++)
            {
                if (!parent.activeSelf)
                    break;

                var crystal = motionCrystalPool.DequeueObject(generatePoint.position);

                Vector3 randomPosition = new Vector3(Random.Range(-80, 80), Random.Range(-80, 80));

                crystal.transform.DOMove(generatePoint.position + randomPosition, 1f).SetEase(Ease.OutQuart).OnComplete(() =>
                //crystal.transform.DOScale(new Vector3(0.5f,0.5f,1),1.5f)
                crystal.transform.DOMove(crystalEnd.position, 1.5f).SetEase(Ease.InOutQuart).OnComplete(() =>
                motionCrystalPool.EnqueueObject(crystal)

                
                ));

                yield return new WaitForSeconds(0.065f);
            }
        }
    }


}
