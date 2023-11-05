using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

public class AndroidAutoKeystore : IPreprocessBuildWithReport
{
    public int callbackOrder => 0;

    public void OnPreprocessBuild(BuildReport report)
    {
        PlayerSettings.Android.useCustomKeystore = true;
        PlayerSettings.Android.keystorePass = "z7412369";
        PlayerSettings.Android.keyaliasName = "tero";
        PlayerSettings.Android.keyaliasPass = "z7412369";
    }
}
