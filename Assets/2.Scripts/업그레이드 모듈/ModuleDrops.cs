using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModuleDrops : MonoBehaviour
{
    public UpgradeModuleObject module = null;

    private void Start()
    {
        module = UpgradeModuleManager.instance.GenerateRandomModule();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.CompareTag("Player") && collision.GetComponent<PlayerBodyBeacon>() != null)
        {
            UpgradeModuleDropManager.instance.getUpgradeModuleOnThisStage.Add(module);
            UpgradeModuleDropManager.instance.moduleDropsPool.EnqueueObject(gameObject);
            AlterManager.Instance.GenerateNewModuleAlter(module);
        }
    }

    public void SetModuleStat(UpgradeModuleObject module)
    {
        this.module = module;
    }
}
