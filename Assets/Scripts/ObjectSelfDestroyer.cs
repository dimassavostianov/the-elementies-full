using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSelfDestroyer : MonoBehaviour
{
    [SerializeField] private float _delay;

    private void Start()
    {
        StartCoroutine(DestroyAfterDelay());
    }

    private IEnumerator DestroyAfterDelay()
    {
        yield return new WaitForSeconds(_delay);

        Destroy(gameObject);
    }
}
