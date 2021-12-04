using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObjectOffScreenNotifier : MonoBehaviour
{
    [SerializeField] private Camera _camera;

    public bool CheckIfOffScreen()
    {
        Vector2 posOnScreen = _camera.WorldToViewportPoint(transform.position);

        if (posOnScreen.x < 0f || posOnScreen.x > 1f)
        {
            return true;
        }
        if (posOnScreen.y < 0f || posOnScreen.y > 1f)
        {
            return true;
        }

        return false;
    }
}
