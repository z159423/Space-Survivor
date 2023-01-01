using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModuleItem : MonoBehaviour
{
    [field: SerializeField] public UpgradeModuleObject module {get; private set;}

    [Space]

    [SerializeField] private Image moduleImage;
    [SerializeField] private Image coverImage;

    public void OnClickThisModule()
    {
        UpgradeModuleManager.instance.ActiveUpgradeModuleDetail(module);
    }

    public void SetModuleInfo(UpgradeModuleObject module)
    {
        this.module = module;
        //moduleImage
    }
}
