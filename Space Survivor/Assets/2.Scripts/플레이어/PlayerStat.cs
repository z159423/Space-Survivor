using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
using UnityEngine.Events;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;


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

    [Space]

    public int currentShieldStack = 0;
    public int maxShieldStack = 0;
    public bool shieldInvinsible = false;
    public float shieldInvinsibleTime = 1f;
    public float shieldReloadTime = 5f;
    public GameObject shieldImage;

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

    [Space]
    [SerializeField] GameObject dieVFX;

    public bool playerDie = false;
    private bool whileLevelUp = false;
    private GameObject currentShipBody;
    public UnityEvent startGameEvent;
    public UnityEvent playerDieEvent;
    public UnityEvent playerLevelUpEvent;

    [Space]

    [SerializeField] private bool invinsible = false;

    [SerializeField] private List<EnemyStat> enteredEnemyList = new List<EnemyStat>();

    private Sequence mySequence;

    private void Start()
    {

    }

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

        Utility.Explode(transform.position, 0, 20, 10, VFXType.Explode1, cameraShakeInstance);
    }

    public void GetCurrentCrystal()
    {
        UserDataManager.instance.AddCrystalValue(currentCrystal);
    }

    public void GetExp(int exp)
    {
        if (whileLevelUp || playerDie)
            return;

        //print(getMineralBouse.GetFinalStatValue());

        currentExp += Mathf.RoundToInt(exp * getMineralBouse.GetFinalStatValue());

        Vibration.Vibrate((long)30);

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
    }

    private void LevelUp()
    {
        whileLevelUp = true;
        playerLevel++;

        LevelUpManager.instance.StartWeaponUpgrade();
        playerLevelText.text = "Level " + playerLevel.ToString();

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

        moveSpeed.ClearIntModifier();
        moveSpeed.ClearPercentModifier();

        rotationSpeed.ClearIntModifier();
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

        for(int i = 0; i < playerWeapon.passivePool.Count; i++)
        {
            playerWeapon.passivePool[i].passiveStat.OnEndGame();
        }

        playerWeapon.ResetPlayerWeapon();
        ClearWeaponSlots();

        playerWeapon.additionalDamage.ClearPercentModifier();
    }

    public void PlayGame()
    {
        currentHp = maxHp;
        playerDie = false;

        hpBar.SetState(currentHp, maxHp);
    }

    public void MakeThisShip(ShipObject ship, Quaternion bodyrotation)
    {
        currentShipBody = Instantiate(ship.shipBody,transform.position,bodyrotation, transform);

        playerMovement.SetPlayerBody(currentShipBody.transform);

        for (int i = 0; i < ship.basicWeapon.Count; i++)
        {
            playerWeapon.AddNewWeapon(ship.basicWeapon[i]);
        }

        GetShipStat(ship);
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
        maxHp = shipObject.baseMaxHp;
        moveSpeed.SetBaseValue(shipObject.baseMoveSpeed);
        rotationSpeed.SetBaseValue(shipObject.baseRotationSpeed);
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
    }

    public void AddShield()
    {
        if (currentShieldStack == maxShieldStack || playerDie)
            return;

        print("쉴드 생성");

        currentShieldStack++;

        shieldImage.SetActive(true);
    }

    public IEnumerator UseShield()
    {
        print("쉴드 사용 무적 시작");
        shieldInvinsible = true;

        yield return new WaitForSeconds(shieldInvinsibleTime);

        shieldInvinsible = false;
        currentShieldStack--;

        if (currentShieldStack == 0)
            shieldImage.SetActive(false);

        print("쉴드 무적 끝");

        StartCoroutine(ReloadShield());
    }

    public IEnumerator ReloadShield()
    {
        print("쉴드 재생성 시작");

        for (int i = 0; i < playerWeapon.passivePool.Count; i++)
        {
            if (playerWeapon.passivePool[i].type == EquipmentType.EnergyShield)
            {
                playerWeapon.passivePool[i].passiveStat.StartPassiveSlotCoolTimeImage(shieldReloadTime);
                break;
            }
        }
        yield return new WaitForSeconds(shieldReloadTime);

        AddShield();
    }

    public void ResetShield()
    {
        StopCoroutine("ReloadShield");

        currentShieldStack = 0;
        maxShieldStack = 0;
    }
}
