#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

public class GameMode : EditorWindow
{
    [MenuItem("ChangeGameMode/TestMode")]
    public static void TestMode()
    {
        QScene.OpenScene("Assets/1.Scenes/MainScene.unity");
        GameObject.Find("GameManager").GetComponent<GameManager>().editmode = true;
        GameObject.Find("IngameDebugConsole").transform.GetChild(0).gameObject.SetActive(true);
        GameObject.Find("UI").transform.Find("InGameMenu").transform.Find("Console").gameObject.SetActive(true);
        EditorSceneManager.SaveScene(EditorSceneManager.GetActiveScene());
        QScene.OpenScene("Assets/1.Scenes/Login.unity");
    }

    [MenuItem("ChangeGameMode/BuildMode")]
    public static void BuildMode()
    {
        QScene.OpenScene("Assets/1.Scenes/MainScene.unity");
        GameObject.Find("GameManager").GetComponent<GameManager>().editmode = false;
        GameObject.Find("IngameDebugConsole").transform.GetChild(0).gameObject.SetActive(false);
        GameObject.Find("UI").transform.Find("InGameMenu").transform.Find("Console").gameObject.SetActive(false);
        EditorSceneManager.SaveScene(EditorSceneManager.GetActiveScene());
        QScene.OpenScene("Assets/1.Scenes/Login.unity");

    }

}
#endif