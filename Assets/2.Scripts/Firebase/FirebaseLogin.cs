using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public enum LoginType
{
    NONE,
    GUEST,
    GOOGLE,
    APPLE
}

public class FirebaseLogin : MonoBehaviour
{
    [SerializeField] private Button guestBtn;
    [SerializeField] private Button googleBtn;
    [SerializeField] private Button appleBtn;
    [SerializeField] private GameObject loginParent;
    [SerializeField] private GameObject progressParent;

    private void Start()
    {
        guestBtn.onClick.AddListener(() => Login(LoginType.GUEST));
        googleBtn.onClick.AddListener(() => Login(LoginType.GOOGLE));
        appleBtn.onClick.AddListener(() => Login(LoginType.APPLE));
    }

    void Login(LoginType type)
    {
        progressParent.gameObject.SetActive(true);


        if (type == LoginType.GUEST)
            FirebaseInit.instance.Login_Anonymouse();

        if (type == LoginType.GOOGLE)
            FirebaseInit.instance.Login_Google();


        if (type == LoginType.APPLE)
            FirebaseInit.instance.Login_Apple();


        guestBtn.interactable = false;
        googleBtn.interactable = false;
        appleBtn.interactable = false;
    }
}
