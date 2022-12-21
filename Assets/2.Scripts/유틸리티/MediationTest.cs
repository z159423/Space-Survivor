using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAdsMediationTestSuite.Api;

public class MediationTest : MonoBehaviour
{
    

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {

        }
    }

    public void show()
    {
        MediationTestSuite.Show();
    }
}
