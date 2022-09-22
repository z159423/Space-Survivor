using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossStat : EnemyStat
{
    public override void Die()
    {
        base.Die();

        EnemyGenerator.instance.bossFighting = false;
    }
}
