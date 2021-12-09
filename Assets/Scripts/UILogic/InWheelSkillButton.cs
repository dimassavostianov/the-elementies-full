using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using UnityEngine.UI;

public class InWheelSkillButton : AbstractSkillButton, IPointerClickHandler
{
    public event Action<int> ButtonClicked;
    public int Index;

    [SerializeField] private Image _backframe;
    [SerializeField] private Sprite _defaultBackframe;
    [SerializeField] private Sprite _defaultBackFrameInUse;
    [SerializeField] private TestSkill _testSkill;

    public override void OnPointerClick(PointerEventData eventData)
    {
        if (_isInteractable == true)
        {
            ButtonClicked?.Invoke(Index);
            _audio.Play(0);
        }
    }

    public void SetBackframe(Sprite sprite)
    {
        if(_isInteractable == false)
            _backframe.sprite = _defaultBackframe;
        else
            _backframe.sprite = sprite;
    }

    public void ResetBackframe()
    {
        if (_isInteractable == true) _backframe.sprite = _defaultBackFrameInUse;
        else _backframe.sprite = _defaultBackframe;
    }

    public override void SetPerk(Perk perk)
    {
        base.SetPerk(perk);

        if (perk.IsTest == true)
        {
            _testSkill.SetAsTest();
            _isInteractable = false;
        }
        else
        {
            _testSkill.SetAsActive();
            _isInteractable = true;
            ResetBackframe();
        }
    }

    public override void SetPerk(Perk perk, bool canUsePerk)
    {

    }
}
