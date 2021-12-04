using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VFXObjectLogic : MonoBehaviour
{
    [SerializeField] private GameObject _extraVFXObj;

    private void OnDestroy()
    {
        var obj = Instantiate(_extraVFXObj);
        obj.transform.position = transform.position;
    }
}
