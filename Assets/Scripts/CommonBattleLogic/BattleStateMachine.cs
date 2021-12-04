using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleStateMachine : MonoBehaviour
{
    private List<BattleAbstractState> _allStates;
    private BattleAbstractState _currentState;

    public void Initialize(BattleController battleController, 
        BattleUIController battleUIController,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
    {
        _allStates = new List<BattleAbstractState>
        {
            new BattleStartState(battleController, battleUIController, this, leftTeam, rightTeam),
            new TurnStartState(battleController, battleUIController, this, leftTeam, rightTeam),
            new LeftTeamTurnState(battleController, battleUIController, this, leftTeam, rightTeam),
            new RightTeamTurnState(battleController, battleUIController, this, leftTeam, rightTeam),
            new TurnEndState(battleController, battleUIController, this, leftTeam, rightTeam),
            new BattleEndState(battleController, battleUIController, this, leftTeam, rightTeam)
        };

        _currentState = _allStates[0];
        _currentState.StateStart();
    }

    public void InBattleStart() => _currentState.BattleStart();
    public void InTurnStart(Teams team) => _currentState.TurnStart(team);
    public void InLeftTeamTurn() => _currentState.LeftTeamTurn();
    public void InRightTeamTurn() => _currentState.RightTeamTurn();
    public void InTurnEnd() => _currentState.TurnEnd();
    public void InBattleEnd() => _currentState.BattleEnd();

    public void ChangeCurrentState<T>() where T : BattleAbstractState
    {
        var state = _allStates.Find(t => t is T);
        _currentState.StateStop();
        _currentState = state;
        _currentState.StateStart();
    }
}

public abstract class BattleAbstractState
{
    protected readonly BattleController _battleController;
    protected readonly BattleUIController _battleUIController;
    protected readonly BattleStateMachine _stateMachine;
    protected readonly AbstractTeam _leftTeam;
    protected readonly AbstractTeam _rightTeam;

    public BattleAbstractState(BattleController battleController, 
        BattleUIController battleUIController, 
        BattleStateMachine battleStateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
    {
        _battleController = battleController;
        _battleUIController = battleUIController;
        _stateMachine = battleStateMachine;
        _leftTeam = leftTeam;
        _rightTeam = rightTeam;
    }

    public abstract void StateStart();
    public abstract void StateStop();

    public abstract void BattleStart();
    public abstract void TurnStart(Teams team);
    public abstract void LeftTeamTurn();
    public abstract void RightTeamTurn();
    public abstract void TurnEnd();
    public abstract void BattleEnd();
}

public class BattleStartState : BattleAbstractState
{
    public BattleStartState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
    }

    public override void RightTeamTurn()
    {
    }

    public override void TurnStart(Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        //“ŒÀ‹ Œ Õ¿ œ≈–¬Œ… »“≈–¿÷»»
        _battleUIController.UpdateBattleWheel
               (
               _leftTeam.GetElementsTypesOfActiveCharacters(),
               _rightTeam.GetElementsTypesOfActiveCharacters()
               );
        _stateMachine.ChangeCurrentState<TurnStartState>();
    }

    public override void StateStop()
    {
    }
}

public class TurnStartState : BattleAbstractState
{
    public TurnStartState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
    }

    public override void RightTeamTurn()
    {
    }

    public override void TurnStart(Teams team)
    {
        if (team == Teams.Left)
        {
            _stateMachine.ChangeCurrentState<LeftTeamTurnState>();
        }
        else
        {
            _stateMachine.ChangeCurrentState<RightTeamTurnState>();
        }
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        _battleUIController.StartWheelAnimation();
        _battleUIController.DisableBackToMenu();
    }

    public override void StateStop()
    {
    }
}

public class LeftTeamTurnState : BattleAbstractState
{
    public LeftTeamTurnState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
        _battleUIController.ResetSkillButtonInfo();
        _stateMachine.ChangeCurrentState<TurnEndState>();
    }

    public override void RightTeamTurn()
    {
    }

    public override void TurnStart(Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    private void OnTurnEndPressed()
    {
        _battleUIController.ResetSkillButtonInfo();
        _stateMachine.ChangeCurrentState<TurnEndState>();
    }

    private void OnBackToMenu()
    {
        _battleUIController.ResetSkillButtonInfo();
        _stateMachine.ChangeCurrentState<TurnEndState>();
    }

    public override void StateStart()
    {

        _rightTeam.SetCharacterUnderAttack();
        _battleUIController.EnableTurnButton();
        _battleUIController.SkillUsed += _leftTeam.TurnByPlayer;
        _battleUIController.SkillUsed += (perk) => { _battleUIController.MakeButtonsNonInteractable(); };
        _battleUIController.SkillUsed += (perk) => { _battleUIController.DisableBackToMenu(); };
        _battleUIController.EndTurnUsed += OnTurnEndPressed;
        _battleUIController.EnableBackToMenu();
        _battleUIController.BackToMenuPressed += OnBackToMenu;
        bool isActive = _leftTeam.TryActivateTeamTurn(_battleUIController.ChoosedType);
        if (isActive == true)
        {
            _leftTeam.TeamEndedTurn += LeftTeamTurn;
        }
        else
        {
            _stateMachine.ChangeCurrentState<TurnEndState>();
        }

        _battleUIController.EnableAllSkillButton();


        Character actveChar = _leftTeam.GetCurrentActiveCharacter();
        if (actveChar.gameObject.activeInHierarchy == true)
        {
            int power = actveChar.Power;
            int count = 0;
            if (power < actveChar.AttackPerk1.ApplyingEnergy)
            {
                _battleUIController.SetSkillsNotAvaliable(0);
            }
            if (power < actveChar.AttackPerk2.ApplyingEnergy)
            {
                _battleUIController.SetSkillsNotAvaliable(1);
            }
            if (power < actveChar.AttackPerk1.ApplyingEnergy && power < actveChar.AttackPerk2.ApplyingEnergy)
            {
                _leftTeam.MakeDamagePlayer();
            }
        }
    }

    public override void StateStop()
    {
        _leftTeam.TeamEndedTurn -= LeftTeamTurn;
        _battleUIController.SkillUsed -= (perk) => { _battleUIController.MakeButtonsNonInteractable(); };
        _battleUIController.SkillUsed -= (perk) => { _battleUIController.DisableBackToMenu(); };
        _battleUIController.SkillUsed -= _leftTeam.TurnByPlayer;
        _battleUIController.EndTurnUsed -= OnTurnEndPressed;
        _battleUIController.SetSkillsAvaliable();
        _battleUIController.DisableAllSkillButton();
        _battleUIController.DisableBackToMenu();
        _battleUIController.BackToMenuPressed -= OnBackToMenu;
    }
}

public class RightTeamTurnState : BattleAbstractState
{
    public RightTeamTurnState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
    }

    public override void RightTeamTurn()
    {
        _stateMachine.ChangeCurrentState<TurnEndState>();
    }

    public override void TurnStart(Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        _leftTeam.SetCharacterUnderAttack();
        bool isActive = _rightTeam.TryActivateTeamTurn(_battleUIController.ChoosedType);
        if (isActive == true)
        {
            _rightTeam.TeamEndedTurn += _stateMachine.InRightTeamTurn;
            _rightTeam.TurnByComputer();
        }
        else
        {
            _stateMachine.ChangeCurrentState<TurnEndState>();
        }
    }

    public override void StateStop()
    {
        _rightTeam.TeamEndedTurn -= _stateMachine.InRightTeamTurn;
    }
}

public class TurnEndState : BattleAbstractState
{
    public TurnEndState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
    }

    public override void RightTeamTurn()
    {
    }

    public override void TurnStart(Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        _battleUIController.UpdateBattleWheel
               (
               _leftTeam.GetElementsTypesOfActiveCharacters(),
               _rightTeam.GetElementsTypesOfActiveCharacters()
               );
        StaticInfo.CastComplete = false;
        StaticInfo.HalfMeleeAttackComplete = false;
        StaticInfo.PerkEffectFinished = false;

        if (_leftTeam.CheckIfTeamDefeated() == true)
        {
            _battleUIController.ShowLooseScren(_rightTeam.GetCharactersForWinScreen());
            _stateMachine.ChangeCurrentState<BattleEndState>();
            return;
        }
        else if (_rightTeam.CheckIfTeamDefeated() == true)
        {
            _battleUIController.ShowWinScreen(_leftTeam.GetCharactersForWinScreen());
            _stateMachine.ChangeCurrentState<BattleEndState>();
            return;
        }

        _stateMachine.ChangeCurrentState<TurnStartState>();
    }

    public override void StateStop()
    {
    }
}

public class BattleEndState : BattleAbstractState
{
    public BattleEndState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine,
        AbstractTeam leftTeam,
        AbstractTeam rightTeam)
        : base(battleController, battleUIController, stateMachine, leftTeam, rightTeam)
    { }

    public override void BattleEnd()
    {
    }

    public override void BattleStart()
    {
    }

    public override void LeftTeamTurn()
    {
    }

    public override void RightTeamTurn()
    {
    }

    public override void TurnStart(Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
    }

    public override void StateStop()
    {
    }
}
