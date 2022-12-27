using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IUpgradeModule
{
    public void ApplyUpgradeModule(PlayerWeapon playerWeapon);
    public void UnapplyUpgradeModule();
    public void TierUpThisModule();

}