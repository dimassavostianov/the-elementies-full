using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIButtonOnPointingSound : ButtonOnPointingSound
{
    [SerializeField] private Button _button;

    public override void OnPointerEnter(PointerEventData eventData)
    {
        if (_button.interactable == true) PlaySound();
    }
}
