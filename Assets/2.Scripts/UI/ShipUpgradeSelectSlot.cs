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

    private void Start() {
        GetComponent<Button>().onClick.AddListener(() =>AudioManager.instance.PlaySFX("click1"));
    }

    public void InitShip(ShipObject shipObject, ShipUpgradeUI ui)
    {
        this.shipObject = shipObject;

        shipImage.sprite = shipObject.shipObjectData.shipImage;

        shipUpgradeUI = ui;
    }

    public void onClickUpgradeSelectSlot()
    {
        shipUpgradeUI.SelectShip(shipObject);

        AudioManager.instance.PlaySFX("click2");
    }
}
