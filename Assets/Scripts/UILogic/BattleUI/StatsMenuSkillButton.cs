using UnityEngine.EventSystems;
using System;
using UnityEngine;

public class StatsMenuSkillButton : AbstractSkillButton
{
    [SerializeField] private TestSkill _testSkill;

    public override void OnPointerClick(PointerEventData eventData)
    {
        if (_isInteractable == true)
        {
            InvokeClickedEvent();
            _audio.Play(0);
        }
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
        }
    }

    public override void SetPerk(Perk perk, bool canUsePerk)
    {
    }
}
