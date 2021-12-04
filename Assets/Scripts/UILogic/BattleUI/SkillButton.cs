using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;
using UnityEngine.UI;
using System;

public class SkillButton : MonoBehaviour, IPointerClickHandler
{
    public event Action<Perk> SkillButtonClicked;

    [SerializeField] private Perk _perk;
    [SerializeField] private TextMeshProUGUI _energyText;
    [SerializeField] private TextMeshProUGUI _damageText;
    [SerializeField] private TextMeshProUGUI _defenseText;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private Image _perkIcon;

    [SerializeField] private Sprite _defaultIcon;
    [SerializeField] private TestSkill _testSkill;
    [SerializeField] private AudioSource _buttonSound;
    [SerializeField] private SkillUnavailable _skillUnavailable;

    private bool _usedInThisTurn;
    public bool _interactable;

    public void OnPointerClick(PointerEventData eventData)
    {
        if (_interactable == true)
        {
            if (_usedInThisTurn == false)
            {
                SkillButtonClicked?.Invoke(_perk);
                _buttonSound.Play(0);
                _usedInThisTurn = true;
            }
        }
    }

    public void SetPerk(Perk perk)
    {
        _perk = perk;
        _interactable = true;

        _energyText.text = _perk.ApplyingEnergy.ToString();
        _damageText.text = _perk.ApplyingDamage.ToString();
        _defenseText.text = _perk.ApplyingDefense.ToString();
        _nameText.text = _perk.Name.ToString();
        _perkIcon.sprite = _perk.Icon;
        _usedInThisTurn = false;

        _perkIcon.SetNativeSize();
        if (_perk.IsTest == true) SetTest();
        else SetActive();
    }

    public Perk GetPerk()
    {
        return _perk;
    }

    public void ResetButtonInfo()
    {
        _energyText.text = "0";
        _damageText.text = "0";
        _defenseText.text = "0";
        _nameText.text = "";
        _perkIcon.sprite = _defaultIcon;
        _usedInThisTurn = false;

        _perkIcon.SetNativeSize();

        SetTest();
    }

    public void ResetButtonInfoInAllElementsUI()
    {
        _energyText.text = "0";
        _damageText.text = "0";
        _defenseText.text = "0";
        _nameText.text = "";

        _perkIcon.SetNativeSize();
    }

    public void SetUnActive()
    {
        _skillUnavailable.SetUnavailable();
        _interactable = false;
    }
    public void SetUsable()
    {
        _skillUnavailable.SetAvailable();
    }

    private void SetTest()
    {
        _testSkill.SetAsTest();
        _interactable = false;
    }

    public void Setinteractable()
    {
        _interactable = true;
        _usedInThisTurn = false;
    }

    private void SetActive()
    {
        _testSkill.SetAsActive();
    }
}
