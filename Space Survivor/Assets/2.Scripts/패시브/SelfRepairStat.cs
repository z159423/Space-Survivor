using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "new SelfRepair Stat", menuName = "Scriptable Object/Equipment/New SelfRepair Stat", order = int.MaxValue)]

public class SelfRepairStat : ScriptableObject, IPassiveEquipment
{
    public GameObject selfRepairParticlePrefab;
    public ParticleSystem currentSelfRepairParticle { get; set; }

    public Stat healValue = new Stat();
    public Stat coolTime = new Stat();

    public Coroutine selfRepairCoroutine = null;

    private PlayerStat playerStat;

    public void UpgradePassive(UpgradeModule upgradeModule)
    {

    }

    public void GetPassiveEffect(PlayerStat playerStat)
    {
        this.playerStat = playerStat;
    }

    public IEnumerator StartWhilePassiveEffect()
    {
        while (true)
        {
            if (!playerStat.playerDie)
                SelfRepair();

            yield return new WaitForSeconds(coolTime.GetFinalStatValue());
        }
    }

    public void SelfRepair()
    {
        //if (currentSelfRepairParticle == null)
        //    currentSelfRepairParticle = Instantiate(selfRepairParticlePrefab).GetComponent<ParticleSystem>();

        //currentSelfRepairParticle.transform.position = playerStat.transform.position;
        //currentSelfRepairParticle.Play();

        VFXGenerator.instance.GenerateVFX(VFXType.Heal1, playerStat.transform.position);

        playerStat.Heal((int)healValue.GetFinalStatValue());
    }

    public void SetCoroutine(Coroutine coroutine)
    {
        selfRepairCoroutine = coroutine;
    }

    public void ClearPassive()
    {
        if(selfRepairCoroutine != null)
            CoroutineHelper.StopCoroutine(selfRepairCoroutine);
    }
}
