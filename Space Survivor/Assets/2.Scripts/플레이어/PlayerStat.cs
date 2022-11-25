using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
using UnityEngine.Events;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;
using Firebase.Analytics;


public class PlayerStat : MonoBehaviour
{
    private int maxHp = 1000;
    private int currentHp = 1000;
    [SerializeField] private int maxExp = 50;
    [SerializeField] private int maxExpIncreaseValue = 70;
    private int currentExp = 0;
    public Stat getMineralBouse = new Stat();
    private int playerLevel = 1;
    public int currentCrystal = 0;
    private int lastGameCurrentCrystal = 0;

    [Space]

    public int currentShieldStack = 0;
    public int maxShieldStack = 0;
    public bool shieldInvinsible = false;
    public Stat shieldInvinsibleTime = new Stat();
    public Stat shieldReloadTime = new Stat();
    public GameObject shieldImage;
    public Color oneShieldStackColor;
    public Color twoShieldStackColor;
    public Color thereShieldStackColor;
    private Coroutine shieldReloadCoroutine;


    [Space]

    [SerializeField] private TextMeshProUGUI playerLevelText;

    [Space]
    [SerializeField] public Stat moveSpeed;
    [SerializeField] public Stat rotationSpeed;

    [Space]
    [SerializeField] private ParticleSystem HitEffect;

    [Space]
    [SerializeField] private HpBar hpBar;
    [SerializeField] private Slider expSlider;
    [SerializeField] private Image expFill;
    [SerializeField] private Color originExpColor;
    [SerializeField] private Color fadeOutExpColor;

    [SerializeField] private PlayerWeapon playerWeapon;
    [SerializeField] private PlayerMovement playerMovement;
    [SerializeField] private TextMeshProUGUI crystalText;
    [SerializeField] private Transform weaponSlotParent;
    [SerializeField] private Transform passiveSlotParent;
    [SerializeField] private CircleCollider2D resourcePullCollider;

    [Space]
    [SerializeField] GameObject dieVFX;

    public bool playerDie = false;
    public bool whileLevelUp { get; set; } = false;
    private GameObject currentShipBody;
    public UnityEvent startGameEvent;
    public UnityEvent playerDieEvent;
    public UnityEvent playerLevelUpEvent;

    [Space]

    [SerializeField] public bool invinsible = false;

    [SerializeField] private List<EnemyStat> enteredEnemyList = new List<EnemyStat>();

    private Sequence mySequence;

    private void OnEnable()
    {
        playerLevelText.text = "Level " + playerLevel.ToString();
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.transform.CompareTag("Enemy"))
        {
            TakeDamage(collision.transform.GetComponent<EnemyStat>().GetDamage());
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.transform.CompareTag("Resource"))
        {
            other.transform.GetComponent<Resource>().StartPull(transform);
        }
    }

    public void TakeDamage(int damage)
    {
        if (invinsible || playerDie || shieldInvinsible)
            return;

        if (currentShieldStack > 0)
        {
            StartCoroutine(UseShield());

            return;
        }

        Vibration.Vibrate((long)15);

        currentHp -= damage;

        hpBar.SetState(currentHp, maxHp);

        HitEffect.Play();

        if (currentHp <= 0)
            Die();
    }

    private void Die()
    {
        playerDie = true;

        playerDieEvent.Invoke();

        //gameObject.SetActive(false);

        //Instantiate(dieVFX, transform.position, Quaternion.identity);
        VFXGenerator.instance.GenerateVFX(VFXType.playerDie1, transform.position);

        //DeleteShipBody();
        DisableShipBody();

        EZCameraShake.CameraShakeInstance cameraShakeInstance = new EZCameraShake.CameraShakeInstance(4f, 4f, .2f, 1f);

        Utility.Explode(transform.position, 0, 20, 10, VFXType.AtomicExplosion, cameraShakeInstance);

        AudioManager.instance.GenerateAudioAndPlaySFX("explosion1", transform.position);

        if (GameManager.instance.revivedThisGame)
        {
            FirebaseAnalytics.LogEvent("PlayerDeathTime_Revived", "IntParam", GameManager.instance.getCurrentTime());
        }
        else
            FirebaseAnalytics.LogEvent("PlayerDeathTime", "IntParam", GameManager.instance.getCurrentTime());
    }

    public void GetCurrentCrystal()
    {
        UserDataManager.instance.AddCrystalValue(currentCrystal);
    }

    public void GetCrystalDouble()
    {
        UserDataManager.instance.AddCrystalValue(lastGameCurrentCrystal);
        GameManager.instance.ChangeGetCrystalText(lastGameCurrentCrystal);

        //if (playerDie)
        //    CrystalMotion.instance.StartCrystalMotion(0, lastGameCurrentCrystal);
        //else
        //    CrystalMotion.instance.StartCrystalMotion(0, lastGameCurrentCrystal);

    }

    public void GetExp(int exp)
    {
        if (whileLevelUp || playerDie || !GameManager.instance.gameStart)
            return;

        //print(getMineralBouse.GetFinalStatValue());

        currentExp += Mathf.RoundToInt(exp * getMineralBouse.GetFinalStatValue());

        //Vibration.Vibrate((long)30);

        OnChangeExp();
    }

    private void OnChangeExp()
    {
        if (currentExp >= maxExp)                    //������ ����ġ�� ����������
        {
            LevelUp();
        }

        float state = (float)currentExp;
        state /= maxExp;
        if (state < 0f) { state = 0f; }

        expSlider.value = state;
    }

    public void GetCrystal(int value)
    {
        currentCrystal += value;

        crystalText.text = currentCrystal.ToString();

        lastGameCurrentCrystal = currentCrystal;
    }

    private void LevelUp()
    {
        if (!GameManager.instance.gameStart)
            return;

        whileLevelUp = true;
        playerLevel++;

        LevelUpManager.instance.StartWeaponUpgrade();
        playerLevelText.text = "Level " + playerLevel.ToString();

        AudioManager.instance.PlaySFX("levelup1");

        //mySequence.Restart();
        //expFill.DOColor(fadeOutExpColor, 1f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo).SetUpdate(true);
    }

    public void AfterUpgrade()
    {
        currentExp = 0;

        maxExp += maxExpIncreaseValue;

        var remainExp = currentExp - maxExp;

        OnChangeExp();

        whileLevelUp = false;
    }

    public bool GetPlayerDie()
    {
        return playerDie;
    }

    //스탯 초기화
    public void ResetPlayerStat()
    {
        transform.position = Vector2.zero;

        currentHp = maxHp;
        playerDie = false;

        moveSpeed.ClearFloatModifier();
        moveSpeed.ClearPercentModifier();

        rotationSpeed.ClearFloatModifier();
        rotationSpeed.ClearPercentModifier();

        currentShieldStack = 0;
        maxShieldStack = 0;

        playerLevel = 1;
        currentExp = 0;
        currentCrystal = 0;
        crystalText.text = currentCrystal.ToString();
        maxExp = 5;
        getMineralBouse.ClearPercentModifier();

        playerLevelText.text = "Level " + playerLevel.ToString();

        OnChangeExp();
        hpBar.SetState(currentHp, maxHp);

        for (int i = 0; i < playerWeapon.passivePool.Count; i++)
        {
            playerWeapon.passivePool[i].passiveStat.OnEndGame();
        }

        playerWeapon.ResetPlayerWeapon();
        ClearWeaponSlots();

        playerWeapon.additionalDamage.ClearPercentModifier();
        shieldInvinsibleTime.ClearPercentModifier();
        shieldReloadTime.ClearPercentModifier();
        if (shieldReloadCoroutine != null)
            StopCoroutine(shieldReloadCoroutine);
        if (shieldImage != null)
            shieldImage.SetActive(false);

        resourcePullCollider.radius = 40f;
    }

    public void PlayGame()
    {
        currentHp = maxHp;
        playerDie = false;

        hpBar.SetState(currentHp, maxHp);
    }

    public void MakeThisShip(ShipObject ship, Quaternion bodyrotation)
    {
        currentShipBody = Instantiate(GameManager.instance.shipList.GetShipBody(ship.shipObjectData.shipCode), transform.position, bodyrotation, transform);

        playerMovement.SetPlayerBody(currentShipBody.transform);

        //for (int i = 0; i < ship.basicWeapon.Count; i++)
        //{
        //    playerWeapon.AddNewWeapon(ship.basicWeapon[i]);
        //}

        //for (int i = 0; i < ship.basicPassive.Count; i++)
        //{
        //    playerWeapon.AddNewWeapon(ship.basicPassive[i]);
        //}

        GetShipStat(ship);
    }

    public void AddBasicEquipment(ShipObjectData shipData)
    {
        for (int i = 0; i < shipData.basicWeapon.Count; i++)
        {
            // playerWeapon.AddNewWeapon(ship.basicWeapon[i]);
            playerWeapon.UpgradeWeapon(shipData.basicWeapon[i]);
        }

        for (int i = 0; i < shipData.basicPassive.Count; i++)
        {
            //playerWeapon.AddNewWeapon(ship.basicPassive[i]);
            playerWeapon.UpgradeWeapon(shipData.basicPassive[i]);
        }
    }

    public void DisableShipBody()
    {
        if (currentShipBody == null)
            return;

        currentShipBody.SetActive(false);
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

    public void GetShipStat(ShipObject shipObject)              //������� �Լ� ������ �÷��̾��� �Լ� ���ȿ� �ٿ��ֱ�
    {
        maxHp = shipObject.shipObjectData.baseMaxHp.GetFinalStatValueAsInt();
        moveSpeed.SetBaseValue(shipObject.shipObjectData.baseMoveSpeed.GetFinalStatValue());
        rotationSpeed.SetBaseValue(shipObject.shipObjectData.baseRotationSpeed.GetFinalStatValue());
    }

    public float GetMoveSpeed()
    {
        return moveSpeed.GetFinalStatValue();
    }

    public float GetRotationSpeed()
    {
        return rotationSpeed.GetFinalStatValue();
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

    public void Resurrection()
    {
        FullHp();
        currentShipBody.SetActive(true);
        playerDie = false;

        ItemGenerator.instance.DeQueueItem(ItemType.AtomicExplosion, transform.position);
    }

    public void ClearWeaponSlots()
    {
        EquipmentSlot[] weaponSlots = weaponSlotParent.GetComponentsInChildren<EquipmentSlot>();

        for (int i = 0; i < weaponSlots.Length; i++)
        {
            Destroy(weaponSlots[i].gameObject);
        }

        playerWeapon.ClearWeaponSlotList();

        EquipmentSlot[] passiveSlots = passiveSlotParent.GetComponentsInChildren<EquipmentSlot>();

        for (int i = 0; i < passiveSlots.Length; i++)
        {
            Destroy(passiveSlots[i].gameObject);
        }

        playerWeapon.ClearPassiveSlotList();
    }

    public void Heal(int value)
    {
        currentHp += value;

        currentHp = Mathf.Clamp(currentHp, 0, maxHp);

        hpBar.SetState(currentHp, maxHp);

        AudioManager.instance.GenerateAudioAndPlaySFX("upgrade2", transform.position);
    }

    public int GetCurrentPlayerLevel()
    {
        return playerLevel;
    }

    public void GetShield(GameObject shieldImage)
    {

        //print(shieldImage);
        this.maxShieldStack++;

        if (maxShieldStack == 1)
        {
            this.shieldImage = shieldImage;
            AddShield();
        }
        else
        {
            if (shieldReloadCoroutine == null)
                shieldReloadCoroutine = StartCoroutine(ReloadShield());
        }
    }

    public void AddShield()
    {
        if (currentShieldStack == maxShieldStack || playerDie)
            return;

        print("쉴드 생성");

        currentShieldStack++;
        OnChangeShieldStack();

        shieldImage.SetActive(true);

        AudioManager.instance.GenerateAudioAndPlaySFX("shield1", transform.position);
    }

    public IEnumerator UseShield()
    {
        print("쉴드 사용 무적 시작");
        shieldInvinsible = true;

        yield return new WaitForSeconds(shieldInvinsibleTime.GetFinalStatValue());

        shieldInvinsible = false;
        currentShieldStack--;

        if (currentShieldStack == 0)
            shieldImage.SetActive(false);

        print("쉴드 무적 끝");

        OnChangeShieldStack();

        if (shieldReloadCoroutine == null)
            shieldReloadCoroutine = StartCoroutine(ReloadShield());
    }

    public IEnumerator ReloadShield()
    {
        print("쉴드 재생성 시작");

        for (int i = 0; i < playerWeapon.passivePool.Count; i++)
        {
            if (playerWeapon.passivePool[i].type == EquipmentType.EnergyShield)
            {
                playerWeapon.passivePool[i].passiveStat.StartPassiveSlotCoolTimeImage(shieldReloadTime.GetFinalStatValue());
                break;
            }
        }
        yield return new WaitForSeconds(shieldReloadTime.GetFinalStatValue());

        AddShield();

        shieldReloadCoroutine = null;

        if (currentShieldStack < maxShieldStack)
            shieldReloadCoroutine = StartCoroutine(ReloadShield());
    }

    public void ResetShield()
    {
        StopCoroutine("ReloadShield");

        currentShieldStack = 0;
        maxShieldStack = 0;
    }

    private void OnChangeShieldStack()
    {
        switch (currentShieldStack)
        {
            case 0:

                break;

            case 1:
                shieldImage.GetComponent<SpriteRenderer>().color = oneShieldStackColor;
                break;

            case 2:
                shieldImage.GetComponent<SpriteRenderer>().color = twoShieldStackColor;
                break;

            case 3:
                shieldImage.GetComponent<SpriteRenderer>().color = thereShieldStackColor;
                break;

        }
    }
}
