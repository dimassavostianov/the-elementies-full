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

        if (perk.IsTest == true)
        {
            _testSkill.SetAsTest();
            _skillUnavailable.SetAvailable();
            _isInteractable = false;
            return;
        }
        else
        {
            _testSkill.SetAsActive();
            _isInteractable = true;
        }

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
    }

    public override void ResetButtonInfo()
    {
        base.ResetButtonInfo();

        _testSkill.SetAsTest();
        _skillUnavailable.SetAvailable();
    }
}