using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGenerator : MonoBehaviour
{
    public Vector2 SpawnArea;
    public float spawnCircleRadius = 14.5f;
    public float spawnAreaMulti = 0.02f;

    public float spawnTime = 0.5f;

    public Transform parent;

    [Space]

    //[ArrayElementTitle("enemyObject")]
    [SerializeField]
    public List<EnemyWave> enemySpawnWaves = new List<EnemyWave>();
    [field: SerializeField] public SpawnWaveObject currentEnemySpawnWaveObject {get; set;}
    [Space]

    //[ArrayElementTitle("enemyObject")]
    [SerializeField]
    public List<EnemyWave> inProgressWaves = new List<EnemyWave>();


    [Space]
    public List<EnemyObject> enemyPools = new List<EnemyObject>();
    public List<GameObject> SpawnedEnemy = new List<GameObject>();

    [Space]
    [SerializeField] private Transform player;
    [SerializeField] private RectTransform canvas;

    public bool spawningEnemy = false;
    public bool bossFighting = false;

    private Coroutine enemySpawnCoroutine;

    [SerializeField] private Animator warningPanelAnimator;
    [SerializeField] private GameObject warningPanel;

    [SerializeField] private GameObject bossBarrior;
    private GameObject barrior;

    [SerializeField] private Transform enemyGeneratorDummy;


    public static EnemyGenerator instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        //SpawnArea = canvas.sizeDelta * 0.01f;

        //float maxvalue = (canvas.rect.width > canvas.rect.height) ? canvas.rect.width : canvas.rect.height;

        //SpawnArea.x = maxvalue * spawnAreaMulti;
        //SpawnArea.y = maxvalue * spawnAreaMulti;

        SpawnArea.x = spawnCircleRadius;
        SpawnArea.y = spawnCircleRadius;

        print("적 스폰 거리 : " + SpawnArea);
    }

    public void StartSpawnEnemy()
    {
        spawningEnemy = true;
    }

    public void StopSpawnEnemy()
    {
        spawningEnemy = false;
    }


    public void CheckWave()
    {
        for (int i = 0; i < currentEnemySpawnWaveObject.enemySpawnWaves.Count; i++)
        {
            if (currentEnemySpawnWaveObject.enemySpawnWaves[i].StartWaveTime == GameManager.instance.getCurrentTime())
            {
                StartWave(currentEnemySpawnWaveObject.enemySpawnWaves[i]);
            }

            if (currentEnemySpawnWaveObject.enemySpawnWaves[i].StopWaveTime == GameManager.instance.getCurrentTime())
            {
                StopWave(currentEnemySpawnWaveObject.enemySpawnWaves[i]);
            }
        }
    }

    private void StartWave(EnemyWave wave)
    {

        //print("웨이브 시작 : " + wave.StartWaveTime + " 시작, " + wave.StopWaveTime + " 끝 " + wave.enemyObject);

        switch (wave.waveType)
        {
            case waveType.summonedPeriodically:
                wave.waveCoroutine = StartCoroutine(wave.SummonPreiodically());

                inProgressWaves.Add(wave);
                break;

            case waveType.summonBoss:
                barrior = Instantiate(bossBarrior, player.position, Quaternion.identity);
                wave.waveCoroutine = StartCoroutine(wave.SummonBoss(warningPanel, warningPanelAnimator));
                break;

            case waveType.blobBurstSummon:
                wave.waveCoroutine = StartCoroutine(wave.blobBurstSummon());
                break;

            case waveType.hyperBurstSummon:
                wave.waveCoroutine = StartCoroutine(wave.hyperBurstSummon(warningPanel, warningPanelAnimator));
                break;
        }
    }

    private void StopWave(EnemyWave wave)
    {
        if (wave.waveCoroutine == null)
            return;

        //print("웨이브 종료 : " + wave.StartWaveTime + " 시작, " + wave.StopWaveTime + " 끝 " + wave.enemyObject);

        inProgressWaves.Remove(wave);
        StopCoroutine(wave.waveCoroutine);
        wave.waveCoroutine = null;
    }

    public void StopAllWave()
    {
        for (int i = 0; i < currentEnemySpawnWaveObject.enemySpawnWaves.Count; i++)
        {
            StopWave(currentEnemySpawnWaveObject.enemySpawnWaves[i]);
        }
    }

    public void EnQueueEnemy(EnemyStat stat)
    {
        foreach (EnemyObject pool in enemyPools)
        {
            if (pool.type == stat.GetType())
            {
                pool.EnQueue(stat.gameObject);
                break;
            }
        }
    }

    // public void GenerateEnemy(EnemyType type, Vector2 position)
    // {
    //     foreach (EnemyObject pool in enemyPools)
    //     {
    //         if (pool.type == type)
    //         {
    //             var success = pool.DeQueue(position);

    //             if (success != null)
    //             {
    //                 var enemy = Instantiate(success, position, Quaternion.identity, parent);

    //                 enemy.GetComponent<EnemyStat>().SetTarget(player);

    //                 SpawnedEnemy.Add(enemy);
    //             }

    //             //Debug.Log("spawn enemy");
    //         }
    //     }
    // }

    public void GenerateEnemy2(EnemyObject enemy)
    {

        var success = enemy.DeQueue(GenerateSpawnPositon_Circle(player.transform));

        if (success != null)
        {
            var spawnEnemy = Instantiate(success, GenerateSpawnPositon_Circle(player.transform), Quaternion.identity, parent);

            spawnEnemy.GetComponent<EnemyStat>().SetTarget(player);

            SpawnedEnemy.Add(spawnEnemy);
        }

        //Debug.Log("spawn enemy");
    }

    public void GenerateOneSpot(EnemyObject enemy, int count)
    {
        var point = GenerateSpawnPosition();

        StartCoroutine(generate());

        IEnumerator generate()
        {
            for (int i = 0; i < count; i++)
            {
                yield return null;
                var success = enemy.DeQueue(point);

                if (success != null)
                {
                    var spawnEnemy = Instantiate(success, point, Quaternion.identity, parent);

                    spawnEnemy.GetComponent<EnemyStat>().SetTarget(player);
                    spawnEnemy.GetComponent<EnemyStat>().SetMoveStrate();


                    SpawnedEnemy.Add(spawnEnemy);
                }
            }
        }


    }

    // private GameObject GetEnemyPrefab(EnemyType type)
    // {
    //     foreach (EnemyObject enemyPool in enemyPools)
    //     {
    //         if (enemyPool.type == EnemyType.Attacker1)
    //         {
    //             return enemyPool.Object;
    //         }
    //     }

    //     return null;
    // }

    private Vector3 GenerateSpawnPositon_Circle(Transform target)
    {
        enemyGeneratorDummy.position = target.position + new Vector3(SpawnArea.x, 0, 0);

        enemyGeneratorDummy.RotateAround(target.position, new Vector3(0,0,1), Random.Range(0,360));

        return enemyGeneratorDummy.position;
    }

    private Vector3 GenerateSpawnPosition()
    {
        Vector3 position = new Vector3();

        float r = Random.Range(0, SpawnArea.x + SpawnArea.y);
        //float f = r < SpawnArea.x ? -1f : 1f;

        if (r < SpawnArea.x)
        {
            position.x = Random.Range(-SpawnArea.x, SpawnArea.x);

            if (Random.value > 0.5f)
            {
                position.y = SpawnArea.y * -1;
            }
            else
            {
                position.y = SpawnArea.y;
            }
        }
        else
        {
            position.y = Random.Range(-SpawnArea.y, SpawnArea.y);

            if (Random.value > 0.5f)
            {
                position.x = SpawnArea.x * -1;
            }
            else
            {
                position.x = SpawnArea.x;
            }
        }

        //float f = Random.value > 0.5f ? -1f : 1f;

        // if (Random.Range(0, SpawnArea.x + SpawnArea.y) > SpawnArea.x)
        // {
        //     position.x = Random.Range(-SpawnArea.x, SpawnArea.x);
        //     position.y = SpawnArea.y * f;
        // }
        // else
        // {
        //     position.y = Random.Range(-SpawnArea.y, SpawnArea.y);
        //     position.x = SpawnArea.x * f;
        // }

        position.z = 0;

        return player.position + position;
    }

    public void DeleteAllEnemy()
    {
        for (int i = 0; i < SpawnedEnemy.Count; i++)
        {
            if (SpawnedEnemy[i].gameObject.activeSelf)
            {
                SpawnedEnemy[i].GetComponent<EnemyStat>().EnQueueThisEnemy();
            }
        }
    }

    public void deleteBossWall()
    {
        Destroy(barrior ?? null);
    }

    // public void StartEnemySpawn()
    // {
    //     if(enemySpawnCoroutine != null)
    //     {
    //         StopCoroutine(enemySpawnCoroutine);
    //     }

    //     enemySpawnCoroutine = StartCoroutine(StartSpawnEnemy());
    // }

    // public void StopEnemySpawn()
    // {
    //     if (enemySpawnCoroutine == null)
    //         return;

    //     spawningEnemy = false;
    //     StopCoroutine(enemySpawnCoroutine);
    //     enemySpawnCoroutine = null;
    // }

    // private IEnumerator StartSpawnEnemy()
    // {
    //     while(true)
    //     {
    //         GenerateEnemy(EnemyType.Scout1, GenerateSpawnPosition());

    //         yield return new WaitForSeconds(spawnTime);
    //     }
    // }
}



/*[System.Serializable]
public class EnemyPool
{
    public Stack<GameObject> enemyStack = new Stack<GameObject>();

    public GameObject Object;
    public Transform parent;
    public EnemyType type;

    public void EnQueue(GameObject enemy)
    {
        enemyStack.Push(enemy);
    }

    public GameObject DeQueue(Vector2 position)
    {
        if (enemyStack.Count > 0)
        {
            var enemy = enemyStack.Pop();

            enemy.transform.position = position;
            enemy.SetActive(true);
            enemy.GetComponent<EnemyStat>().ResetStat();

            return null;
        }
        else
        {
            return Object;
        }
    }
}*/


