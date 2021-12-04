using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{
    public GameObject sda;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)) sda.SetActive(true);
    }
}
