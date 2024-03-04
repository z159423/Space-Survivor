using UnityEngine;
using UnityEditor;

public class AdMobSettingsEditor : EditorWindow
{
    [MenuItem("Ad Mob/Settings")]
    public static void ShowWindow()
    {
        EditorWindow.GetWindow(typeof(AdMobSettingsEditor), false, "Ad Mob");
    }

    private AdMobSettings settings;

    void OnEnable()
    {
        settings = AssetDatabase.LoadAssetAtPath<AdMobSettings>("Assets/Resources/AdMobSettings.asset");
        if (settings == null)
        {
            settings = CreateInstance<AdMobSettings>();
            AssetDatabase.CreateAsset(settings, "Assets/Resources/AdMobSettings.asset");
            AssetDatabase.SaveAssets();
        }
    }

    void OnGUI()
    {
        GUILayout.Label("AdMob Settings", EditorStyles.boldLabel);

        settings.adMobAndroidId = EditorGUILayout.TextField("AdMob Android ID", settings.adMobAndroidId);
        settings.adMobIosId = EditorGUILayout.TextField("AdMob iOS ID", settings.adMobIosId);
        GUILayout.Space(10);
        settings.androidRv = EditorGUILayout.TextField("Android - RV", settings.androidRv);
        settings.androidIs = EditorGUILayout.TextField("Android - IS", settings.androidIs);
        settings.androidBn = EditorGUILayout.TextField("Android - BN", settings.androidBn);
        GUILayout.Space(10);
        settings.iosRv = EditorGUILayout.TextField("iOS - RV", settings.iosRv);
        settings.iosIs = EditorGUILayout.TextField("iOS - IS", settings.iosIs);
        settings.iosBn = EditorGUILayout.TextField("iOS - BN", settings.iosBn);

        if (GUILayout.Button("Save"))
        {
            EditorUtility.SetDirty(settings);
            AssetDatabase.SaveAssets();
        }
    }
}