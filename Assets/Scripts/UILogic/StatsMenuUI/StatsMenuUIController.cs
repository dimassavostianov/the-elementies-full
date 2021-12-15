using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class StatsMenuUIController : MonoBehaviour
{
    [SerializeField] private AbstractSkillButton[] _skillButtons;
    [SerializeField] private TextMeshProUGUI _healthText;
    [SerializeField] private TextMeshProUGUI _attackText;
    [SerializeField] private TextMeshProUGUI _defenseText;
    [SerializeField] private TextMeshProUGUI _energyText;
    [SerializeField] private TextMeshProUGUI _characterTypeText;
    [SerializeField] private SkillsDescriptionMenu _descriptionMenu;
    [SerializeField] private AudioSource _buttonSound;

    private void OnEnable()
    {
        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked += ShowDescription;
            button.SetAudioSource(_buttonSound);
        }
    }

    public void UpdateCharacterInfo(Character character)
    {
        List<Perk> perks = new List<Perk>();
        perks.Add(character.AttackPerk1);
        perks.Add(character.AttackPerk2);
        perks.Add(character.DefensePerk);
        perks.Add(character.PassivePerk);

        for (int i = 0; i < _skillButtons.Length; i++)
        {
            _skillButtons[i].SetPerk(perks[i]);
        }

        _healthText.text = character.Health.ToString();
        _attackText.text = character.Damage.ToString();
        _defenseText.text = character.Defense.ToString();
        _energyText.text = character.Power.ToString();
        _characterTypeText.text = character.ElementType.ToString();
    }

    private void ShowDescription(Perk perk)
    {
        _descriptionMenu.gameObject.SetActive(true);
        _descriptionMenu.SetPerkInfo(perk);
    }

    private void OnDisable()
    {
        foreach (var button in _skillButtons)
            button.SkillButtonClicked -= ShowDescription;
    }
}
