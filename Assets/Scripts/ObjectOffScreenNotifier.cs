using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObjectOffScreenNotifier : MonoBehaviour
{
    public event Action ObjectOffScreen;

    [SerializeField] private Camera _camera;
    [SerializeField] private float _timeBetweenCheck;

    private void OnEnable()
    {
        StartCoroutine(CheckWithDelay());
    }

    private IEnumerator CheckWithDelay()
    {
        yield return new WaitForSeconds(_timeBetweenCheck);

        Vector2 posOnScreen = _camera.WorldToViewportPoint(transform.position);

        if (posOnScreen.x < 0f || posOnScreen.x > 1f)
        {
            ObjectOffScreen?.Invoke();
            yield break;
        }
        if (posOnScreen.y < 0f || posOnScreen.y > 1f)
        {
            ObjectOffScreen?.Invoke();
            yield break;
        }

        StartCoroutine(CheckWithDelay());
    }

    private void OnDisable()
    {
        StopCoroutine(CheckWithDelay());
    }
}
