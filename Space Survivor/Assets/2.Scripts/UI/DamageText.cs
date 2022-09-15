using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageText : MonoBehaviour
{
    public Vector3 textPosition;
    public Camera cam;

    private void LateUpdate()
    {
        if(cam != null)
            transform.position = cam.WorldToScreenPoint(textPosition);
    }
}
