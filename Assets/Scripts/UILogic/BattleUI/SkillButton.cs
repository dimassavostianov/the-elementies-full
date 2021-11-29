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

    public void OnPointerClick(PointerEventData eventData)
    {
        SkillButtonClicked?.Invoke(_perk);
    }

    public void SetPerk(Perk perk)
    {
        _perk = perk;

        _energyText.text = _perk.ApplyingEnergy.ToString();
        _damageText.text = _perk.ApplyingDamage.ToString();
        _defenseText.text = _perk.ApplyingDefense.ToString();
        _nameText.text = _perk.Name.ToString();
        _perkIcon.sprite = _perk.Icon;
    }

    public void ResetButtonInfo()
    {
        _energyText.text = "0";
        _damageText.text = "0";
        _defenseText.text = "0";
        _nameText.text = "";
        _perkIcon.sprite = _defaultIcon;
    }
}
