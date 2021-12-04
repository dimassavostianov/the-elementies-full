using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SkillUnavailable : MonoBehaviour
{
    [SerializeField] private GameObject _lock;
    [SerializeField] private Image _frame;
    [SerializeField] private Image _back;
    [SerializeField] private TextMeshProUGUI[] _text;

    public void SetUnavailable()
    {
        _lock.SetActive(true);
        float a = 0.5f;
        Color frame = _frame.color;
        frame.r = a;
        frame.g = a;
        frame.b = a;
        _frame.color = frame;
        Color back = _back.color;
        back.r = a;
        back.g = a;
        back.b = a;
        _back.color = back;

        foreach (var text in _text)
            text.color = back;
    }

    public void SetAvailable()
    {
        float a = 1f;
        Color frame = _frame.color;
        frame.r = a;
        frame.g = a;
        frame.b = a;
        _frame.color = frame;
        Color back = _back.color;
        back.r = a;
        back.g = a;
        back.b = a;
        _back.color = back;

        foreach (var text in _text)
            text.color = back;
    }
}
