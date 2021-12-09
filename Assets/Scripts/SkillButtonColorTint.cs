using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SkillButtonColorTint : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    [SerializeField] private Color _normalColor;
    [SerializeField] private Color _highlightedColor;
    [SerializeField] private Image _targetImage;
    [SerializeField] private AbstractSkillButton _skillButton;

    private void Start()
    {
        _targetImage.color = _normalColor;
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (_skillButton.Isinteractable == true)
        {
            _targetImage.color = _highlightedColor;
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        _targetImage.color = _normalColor;
    }
}
