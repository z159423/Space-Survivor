using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
using UnityEngine.Events;
using TMPro;


public class PlayerStat : MonoBehaviour
{
    private int maxHp = 1000;
    private int currentHp = 1000;
    [SerializeField] private int maxExp = 5;
    private int currentExp = 0;
    private int playerLevel = 1;
    private int currentCrystal = 0;
    [SerializeField] private TextMeshProUGUI playerLevelText;

    [Space]
    [SerializeField] private float moveSpeed = 1f;
    [SerializeField] private float rotationSpeed = 1f;

    [Space]
    [SerializeField] private ParticleSystem HitEffect;

    [Space]
    [SerializeField] private HpBar hpBar;
    [SerializeField] private Transform expBar;
    [SerializeField] private PlayerWeapon playerWeapon;
    [SerializeField] private PlayerMovement playerMovement;
    [SerializeField] private TextMeshProUGUI crystalText;
    [SerializeField] private Transform weaponSlotParent;
    [Space]
    [SerializeField] GameObject dieVFX;

    private bool playerDie = false;
    private GameObject currentShipBody;
    public UnityEvent startGameEvent;
    public UnityEvent playerDieEvent;
    public UnityEvent playerLevelUpEvent;

    [Space]

    [SerializeField] private bool invinsible = false;



    public void TakeDamage(int damage)
    {
        if (invinsible)
            return;

        currentHp -= damage;

        hpBar.SetState(currentHp, maxHp);

        HitEffect.Play();

        if (currentHp <= 0)
            Die();
    }

    private void Die()
    {
        playerDieEvent.Invoke();

        playerDie = true;

        gameObject.SetActive(false);

        //Instantiate(dieVFX, transform.position, Quaternion.identity);
        VFXGenerator.instance.GenerateVFX(VFXType.playerDie1, transform.position);

        DeleteShipBody();

        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        Utility.Explode(transform.position, 0, 20, -10, VFXType.Explode1, cameraShakeInstance);

        UserDataManager.instance.AddCrystalValue(currentCrystal);
    }

    public void GetExp(int exp)
    {
        currentExp += exp;

        OnChangeExp();
    }

    private void OnChangeExp()
    {
        if(currentExp >= maxExp)                    //래벨업 경험치에 도달했을시
        {
            LevelUp();

            currentExp = 0;

            maxExp += 10;

            var remainExp = currentExp - maxExp;

            if (remainExp > 0)
                GetExp(remainExp); 
        }

        float state = (float)currentExp;
        state /= maxExp;
        if (state < 0f) { state = 0f; }
        expBar.transform.localScale = new Vector3(state, 1f, 1f);
    }

    public void GetCrystal(int value)
    {
        currentCrystal += value;

        crystalText.text = currentCrystal.ToString();
    }

    private void LevelUp()
    {
        playerLevel++;

        LevelUpManager.instance.StartWeaponUpgrade();
        playerLevelText.text = "Level " + playerLevel.ToString();
    }

    public bool GetPlayerDie()
    {
        return playerDie;
    }

    public void ResetPlayerStat()
    {
        transform.position = Vector2.zero;

        currentHp = maxHp;
        playerDie = false;

        playerLevel = 1;
        currentExp = 0;
        currentCrystal = 0;
        crystalText.text = currentCrystal.ToString();
        maxExp = 5;

        playerLevelText.text = "Level " + playerLevel.ToString();

        OnChangeExp();
        hpBar.SetState(currentHp, maxHp);

        playerWeapon.ResetPlayerWeapon();
        ClearWeaponSlots();

        
    }

    public void PlayGame()
    {
        currentHp = maxHp;
        playerDie = false;

        hpBar.SetState(currentHp, maxHp);
    }

    public void MakeThisShip(ShipObject ship)
    {
        currentShipBody = Instantiate(ship.shipBody, transform);

        playerMovement.SetPlayerBody(currentShipBody.transform);

        for (int i = 0; i < ship.basicWeapon.Count; i++)
        {
            playerWeapon.AddNewWeapon(ship.basicWeapon[i]);
        }

        GetShipStat(ship);
    }

    public void DeleteShipBody()
    {
        if (currentShipBody == null)
            return;

        Destroy(currentShipBody);
    }

    public Transform GetShipBody()
    {
        return currentShipBody.transform;
    }

    public void GetShipStat(ShipObject shipObject)              //만들어진 함선 스탯을 플레이어의 함선 스탯에 붙여넣기
    {
        maxHp = shipObject.baseMaxHp;
        moveSpeed = shipObject.baseMoveSpeed;
        rotationSpeed = shipObject.baseRotationSpeed;
    }

    public float GetMoveSpeed()
    {
        return moveSpeed;
    }

    public float GetRotationSpeed()
    {
        return rotationSpeed;
    }

    public void ChangeInvinsible()
    {
        invinsible = !invinsible;
    }

    public void FullHp()
    {
        currentHp = maxHp;

        hpBar.SetState(currentHp, maxHp);
    }

    private void ClearWeaponSlots()
    {
        WeaponSlot[] slots = weaponSlotParent.GetComponentsInChildren<WeaponSlot>();

        for(int i = 0; i < slots.Length; i++)
        {
            Destroy(slots[i].gameObject);
        }
    }

    public void Heal(int value)
    {
        currentHp += value;

        currentHp = Mathf.Clamp(currentHp, 0, maxHp);

        hpBar.SetState(currentHp, maxHp);
    }

    public int GetCurrentPlayerLevel()
    {
        return playerLevel;
    }
}
