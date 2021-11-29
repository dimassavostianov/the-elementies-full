using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BattleUIController : MonoBehaviour
{
    public event Action<Perk> SkillUsed;

    [SerializeField] private BattleWheel _battleWheel;
    [SerializeField] private SkillButton[] _skillButtons;

    public void Initialize(BattleStateMachine battleStateMachine)
    {
        _battleWheel.InitializeWheel();
        _battleWheel.ElementChoosed += battleStateMachine.InTurnStart;

        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked += SetSkillUsed;
        }
    }

    public void StartWheelAnimation()
    {
        _battleWheel.PlayRotationAnimation();
    }

    public void SetSkillButtonsInfo(Perk[] perks)
    {
        for (int i = 0; i < _skillButtons.Length; i++)
        {
            _skillButtons[i].SetPerk(perks[i]);
        }
    }

    public void ResetSkillButtonInfo()
    {
        foreach (var button in _skillButtons)
        {
            button.ResetButtonInfo();
        }
    }

    public void UpdateBattleWheel(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _battleWheel.UpdateInWheelElements(leftTeam, rightTeam);
    }

    private void SetSkillUsed(Perk perk)
    {
        SkillUsed?.Invoke(perk);
    }

    public void Deinitialize(BattleStateMachine battleStateMachine)
    {
        _battleWheel.ElementChoosed -= battleStateMachine.InTurnStart;

        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked -= SetSkillUsed;
        }
    }
}
