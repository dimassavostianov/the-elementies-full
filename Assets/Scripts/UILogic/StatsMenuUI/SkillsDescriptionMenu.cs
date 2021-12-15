using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class SkillsDescriptionMenu : MonoBehaviour
{
    [SerializeField] private GameObject _backButton;
    [SerializeField] private Image _visualDescription;
    [SerializeField] private TextMeshProUGUI _descriptionText;
    [SerializeField] private TextMeshProUGUI _perkTitle;
    [SerializeField] private ShadePanel _shadePanel;
    [SerializeField] private AnimationForDescription _anim;

    private void OnEnable()
    {
        _shadePanel.gameObject.SetActive(true);
        _shadePanel.PlayAnim();
        _backButton.SetActive(true);
    }

    public void SetPerkInfo(Perk perk)
    {
        _visualDescription.sprite = perk.Discription.VisualDescription;
        _descriptionText.text = perk.Discription.Description;
        _perkTitle.text = perk.Name;
    }

    public void Deactivate()
    {
        _shadePanel.PlayBackAnim();
        _backButton.SetActive(false);
        _anim.StartClosingAnim();
    }
}
