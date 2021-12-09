using UnityEngine;
using UnityEngine.EventSystems;

public class SkillButtonInBattle : AbstractSkillButton
{
    [SerializeField] private SkillUnavailable _skillUnavailable;
    [SerializeField] private TestSkill _testSkill;

    public override void OnPointerClick(PointerEventData eventData)
    {
        if (_isInteractable == true)
        {
            InvokeClickedEvent();
            _isInteractable = false;
            _audio.Play(0);
        }
    }

    public override void SetPerk(Perk perk, bool canUsePerk)
    {
        SetPerk(perk);

        if (canUsePerk == false)
        {
            _skillUnavailable.SetUnavailable();
            _isInteractable = false;
        }
        else
        {
            _skillUnavailable.SetAvailable();
            _isInteractable = true;
        }

        if (perk.IsTest == true)
        {
            _testSkill.SetAsTest();
            _skillUnavailable.SetAvailable();
            _isInteractable = false;
        }
        else
        {
            _testSkill.SetAsActive();
            _isInteractable = true;
        }
    }

    public override void ResetButtonInfo()
    {
        base.ResetButtonInfo();

        _testSkill.SetAsTest();
        _skillUnavailable.SetAvailable();
    }
}