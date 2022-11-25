using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class EnemyWave
{
    [SerializeField] private string name;
    
    [Range(0, 1800)]
    public int StartWaveTime;
    [Range(0, 1800)]
    public int StopWaveTime;

    [Space]
    [SerializeField]
    public waveType waveType;
    [Space]
    public float summonCycleTime = 1f;

    public EnemyObject enemyObject;

    public int count;

    public Coroutine waveCoroutine;

    public IEnumerator SummonPreiodically()
    {
        while (true)
        {
            if (EnemyGenerator.instance.spawningEnemy && !EnemyGenerator.instance.bossFighting)
                EnemyGenerator.instance.GenerateEnemy2(enemyObject);

            //MonoBehaviour.print(enemyObject + " / " + StartWaveTime + " / " + StopWaveTime);

            yield return new WaitForSeconds(summonCycleTime);
        }
    }

    public IEnumerator SummonBoss(GameObject panel, Animator animator)
    {
        panel.SetActive(true);
        animator.SetTrigger("Active");
        EnemyGenerator.instance.bossFighting = true;

        AudioManager.instance.GenerateAudioAndPlaySFX("siren", Vector3.zero);

        yield return new WaitForSeconds(3f);

        panel.SetActive(false);

        if (EnemyGenerator.instance.spawningEnemy)
            EnemyGenerator.instance.GenerateEnemy2(enemyObject);

        //MonoBehaviour.print(enemyObject + " / " + StartWaveTime + " / " + StopWaveTime);

        /*while (true)
        {
            if (EnemyGenerator.instance.spawningEnemy)
                EnemyGenerator.instance.GenerateEnemy2(enemyObject);

            yield return new WaitForSeconds(summonCycleTime);
        }*/
    }

    public IEnumerator blobBurstSummon()
    {

        if (EnemyGenerator.instance.spawningEnemy)
            EnemyGenerator.instance.GenerateOneSpot(enemyObject, 50);

        yield return null;
    }

    public IEnumerator hyperBurstSummon(GameObject panel, Animator animator)
    {
        panel.SetActive(true);
        animator.SetTrigger("Active");

        MonoBehaviour.print("11");

        EnemyGenerator.instance.bossFighting = true;

        AudioManager.instance.GenerateAudioAndPlaySFX("siren", Vector3.zero);

        yield return new WaitForSeconds(3f);

        MonoBehaviour.print("22");

        panel.SetActive(false);

        for (int i = 0; i < count; i++)
        {
            yield return null;
            if (EnemyGenerator.instance.spawningEnemy)
                EnemyGenerator.instance.GenerateEnemy2(enemyObject);
        }

        MonoBehaviour.print("33");

        yield return new WaitForSeconds(10f);

        MonoBehaviour.print("44");


        EnemyGenerator.instance.bossFighting = false;
    }

    //public WaveObject waveObject;
}
