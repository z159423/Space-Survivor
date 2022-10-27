using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Localization;
using UnityEngine.Localization.Settings;
using System.Linq;
using System;

public class SettingManager : MonoBehaviour
{
    public static SettingManager instance;

    //public SettingData settingData = new SettingData();

    public bool vibration = true;
    public bool sound = true;

    [Header("MainMenuSetting")]
    public GameObject settingPanel;
    public Slider mainMenuSoundSlider;
    public Slider mainMenuVibrationSlider;
    public Image soundSliderFill;
    public Image vibrationSliderFill;
    public TextMeshProUGUI soundOnOffText;
    public TextMeshProUGUI vibrationOnOffText;
    public TMP_Dropdown LanguageDropdown;
    public Text versionText;

    [Space]

    public Color onColor;
    public Color offColor;

    [Space]
    public GameObject goToMainMenuBtn;
    [SerializeField] private GameObject InGame;
    [SerializeField] private Button mainMenuBtn;

    IEnumerator Start()
    {
        LoadSettingData();

        // Wait for the localization system to initialize, loading Locales, preloading etc.
        yield return LocalizationSettings.InitializationOperation;

        // Generate list of available Locales
        var options = new List<TMP_Dropdown.OptionData>();
        int selected = 0;
        for (int i = 0; i < LocalizationSettings.AvailableLocales.Locales.Count; ++i)
        {
            var locale = LocalizationSettings.AvailableLocales.Locales[i];
            if (LocalizationSettings.SelectedLocale == locale)
                selected = i;
            options.Add(new TMP_Dropdown.OptionData(locale.name));
        }
        LanguageDropdown.options = options;

        LanguageDropdown.value = selected;
        LanguageDropdown.onValueChanged.AddListener(LocaleSelected);

        versionText.text = "version : " + Application.version;
    }

    private void Awake()
    {
        instance = this;

        IEnumerator LocalInit()
        {
            yield return LocalizationSettings.InitializationOperation;

            if (Application.systemLanguage == SystemLanguage.English)
            {
                LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[0];
            }
            else if (Application.systemLanguage == SystemLanguage.Korean)
            {
                LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[1];
            }
            else
            {
                LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[0];
            }
        }

        StartCoroutine(LocalInit());
    }

    public void TurnSettingPanel()
    {
        settingPanel.SetActive(!settingPanel.activeSelf);

        if (settingPanel.activeSelf)
            Time.timeScale = 0;
        else
            Time.timeScale = 1;

        goToMainMenuBtn.SetActive(InGame.activeSelf);

        if (!settingPanel.activeSelf)
        {
            SaveSettingData();
        }
    }

    public void OnChangeSoundSlider()
    {
        if (mainMenuSoundSlider.value == 0)
        {
            soundSliderFill.color = offColor;
            soundOnOffText.text = "OFF";
            sound = false;
        }
        else
        {
            soundSliderFill.color = onColor;
            soundOnOffText.text = "ON";
            sound = true;
        }
    }

    public void OnChangeVibrationSlider()
    {
        if (mainMenuVibrationSlider.value == 0)
        {
            vibrationSliderFill.color = offColor;
            vibrationOnOffText.text = "OFF";
            vibration = false;
        }
        else
        {
            vibrationSliderFill.color = onColor;
            vibrationOnOffText.text = "ON";
            vibration = true;
        }
    }

    public void OnClickMainMenuBtn()
    {
        TurnSettingPanel();
        mainMenuBtn.onClick.Invoke();
    }

    public void SaveSettingData()
    {
        print("save");

        int soundValue = (sound == true) ? 1 : 0;
        int vibraitonValue = (vibration == true) ? 1 : 0;

        PlayerPrefs.SetInt("Sound", soundValue);
        PlayerPrefs.SetInt("Vibration", vibraitonValue);
    }

    public void LoadSettingData()
    {
        print("load");

        if (PlayerPrefs.HasKey("Sound"))
            mainMenuSoundSlider.value = PlayerPrefs.GetInt("Sound");
        if (PlayerPrefs.HasKey("Vibration"))
            mainMenuVibrationSlider.value = PlayerPrefs.GetInt("Vibration");

        print(sound + " " + vibration);

        OnChangeSoundSlider();
        OnChangeVibrationSlider();
    }



    static void LocaleSelected(int index)
    {
        LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[index];
    }

}

