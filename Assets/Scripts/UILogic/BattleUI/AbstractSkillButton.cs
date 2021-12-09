using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;
using UnityEngine.UI;
using System;

public abstract class AbstractSkillButton : MonoBehaviour, IPointerClickHandler
{
    public event Action<Perk> SkillButtonClicked;

    public bool Isinteractable => _isInteractable;

    [SerializeField] protected Perk _perk;
    [SerializeField] protected TextMeshProUGUI _energyText;
    [SerializeField] protected TextMeshProUGUI _damageText;
    [SerializeField] protected TextMeshProUGUI _defenseText;
    [SerializeField] protected TextMeshProUGUI _nameText;
    [SerializeField] protected Image _perkIcon;
    [SerializeField] protected AudioSource _audio;

    [SerializeField] private Sprite _defaultIcon;

    protected bool _isInteractable;

    public abstract void OnPointerClick(PointerEventData eventData);
    public abstract void SetPerk(Perk perk, bool canUsePerk);

    public virtual void SetPerk(Perk perk)
    {
        _perk = perk;
        _isInteractable = true;

        _energyText.text = _perk.ApplyingEnergy.ToString();
        _damageText.text = _perk.ApplyingDamage.ToString();
        _defenseText.text = _perk.ApplyingDefense.ToString();
        _nameText.text = _perk.Name.ToString();
        _perkIcon.sprite = _perk.Icon;

        _perkIcon.SetNativeSize();
    }

    public virtual void ResetButtonInfo()
    {
        _energyText.text = "0";
        _damageText.text = "0";
        _defenseText.text = "0";
        _nameText.text = "";
        _perkIcon.sprite = _defaultIcon;

        _perkIcon.SetNativeSize();
    }

    public Perk GetPerk()
    {
        return _perk;
    }

    public void MakeButtonNonInteractable()
    {
        _isInteractable = false;
    }

    public void SetAudioSource(AudioSource source)
    {
        _audio = source;
    }

    protected void InvokeClickedEvent() => SkillButtonClicked?.Invoke(_perk);
}
