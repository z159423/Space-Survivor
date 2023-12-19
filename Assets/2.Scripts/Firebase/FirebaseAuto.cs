using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirebaseAuto : MonoBehaviour
{

    Firebase.Auth.FirebaseAuth auth = Firebase.Auth.FirebaseAuth.DefaultInstance;

    public void Login_Anonymouse()
    {
        auth.SignInAnonymouslyAsync().ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInAnonymouslyAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
                return;
            }

            Firebase.Auth.FirebaseUser result = task.Result;


        });
    }

    public void Login_Google()
    {
    //     Firebase.Auth.Credential credential =
    // Firebase.Auth.GoogleAuthProvider.GetCredential(googleIdToken, googleAccessToken);
    //     auth.SignInAndRetrieveDataWithCredentialAsync(credential).ContinueWith(task =>
    //     {
    //         if (task.IsCanceled)
    //         {
    //             Debug.LogError("SignInAndRetrieveDataWithCredentialAsync was canceled.");
    //             return;
    //         }
    //         if (task.IsFaulted)
    //         {
    //             Debug.LogError("SignInAndRetrieveDataWithCredentialAsync encountered an error: " + task.Exception);
    //             return;
    //         }

    //         Firebase.Auth.SignInResult result = task.Result;
    //         Debug.LogFormat("User signed in successfully: {0} ({1})",
    //             result.User.DisplayName, result.User.UserId);
    //     });
    }
}
