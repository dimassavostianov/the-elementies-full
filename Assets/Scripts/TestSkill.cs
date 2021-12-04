using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestSkill : MonoBehaviour
{
    [SerializeField] private GameObject _frame;
    [SerializeField] private GameObject _lock;
    [SerializeField] private BoxCollider2D _collider;

    public void SetAsTest()
    {
        _frame.SetActive(false);
        _lock.SetActive(true);
        _collider.enabled = false;
    }

    public void SetAsActive()
    {
        _frame.SetActive(true);
        _lock.SetActive(false);
        _collider.enabled = true;
    }
}
