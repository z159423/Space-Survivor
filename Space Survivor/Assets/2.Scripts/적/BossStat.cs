using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossStat : EnemyStat
{
    [Space]
    [Header("Boss---------------------------")]
    [SerializeField] private Transform damageTextGeneartePosition;

    [Space]

    [SerializeField] private DropTable bossDropTable;

    public override void Die()
    {
        base.Die();

        EnemyGenerator.instance.bossFighting = false;

        base.ResourceDrop(bossDropTable);
    }

    public override void TakeDamage(int damage)
    {
        if (damage <= 0)
            return;

        currentHp -= damage;

        TextGenerator.instance.DequeueText(damageTextGeneartePosition.position, damage, textGenerateOffset);

        OnChangeHp();
    }
}
