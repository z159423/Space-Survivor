using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ShipUpgradeSelectSlot : MonoBehaviour
{
    public ShipObject shipObject;
    public Image shipImage;

    [Space]

    public ShipUpgradeUI shipUpgradeUI;

    public void InitShip(ShipObject shipObject, ShipUpgradeUI ui)
    {
        this.shipObject = shipObject;

        shipImage.sprite = shipObject.shipImage;

        shipUpgradeUI = ui;
    }

    public void onClickUpgradeSelectSlot()
    {
        shipUpgradeUI.SelectShip(shipObject);

        AudioManager.instance.PlaySFX("click2");
    }
}
