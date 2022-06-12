using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new Enemy", menuName = "Scriptable Object/Enemy Data", order = int.MaxValue)]
public class EnemyObject : ScriptableObject
{
    public Stack<GameObject> enemyStack = new Stack<GameObject>();

    public GameObject Object;
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
}

public enum EnemyType { Attacker1, Scout1, Attacker2, Scout2 }