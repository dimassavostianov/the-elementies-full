using UnityEngine;
using UnityEngine.EventSystems;

public class SkillButtonOnPointingSound : ButtonOnPointingSound
{
    [SerializeField] private AbstractSkillButton _skillButton;

    public override void OnPointerEnter(PointerEventData eventData)
    {
        if (_skillButton.Isinteractable == true) PlaySound();
    }
}
