using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using UnityEngine.UI;

public class InWheelSkillButton : MonoBehaviour, IPointerClickHandler
{
    public event Action<int> ButtonClicked;
    public int Index;
    public SkillButton SkillButton;

    [SerializeField] private Image _backframe;
    [SerializeField] private Sprite _defaultBackframe;
    [SerializeField] private Sprite _defaultBackFrameInUse;
    [SerializeField] private AudioSource _buttonSound;

    public void OnPointerClick(PointerEventData eventData)
    {
        if (SkillButton._interactable == true)
        {
            ButtonClicked?.Invoke(Index);
            _buttonSound.Play(0);
        }
    }

    public void SetBackframe(Sprite sprite)
    {
        if(SkillButton._interactable == false)
            _backframe.sprite = _defaultBackframe;
        else
            _backframe.sprite = sprite;
    }

    private void Update()
    {
        if (SkillButton._interactable == false)
            _backframe.sprite = _defaultBackframe;
        else
            _backframe.sprite = _defaultBackFrameInUse;
    }

    public void ResetBackframe()
    {
        if (SkillButton._interactable == true) _backframe.sprite = _defaultBackFrameInUse;
        else _backframe.sprite = _defaultBackframe;
    }
}
