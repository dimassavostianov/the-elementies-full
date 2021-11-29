using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleStateMachine : MonoBehaviour
{
    private List<BattleAbstractState> _allStates;
    private BattleAbstractState _currentState;

    public void Initialize(BattleController battleController, BattleUIController battleUIController)
    {
        _allStates = new List<BattleAbstractState>
        {
            new BattleStartState(battleController, battleUIController, this),
            new TurnStartState(battleController, battleUIController, this),
            new LeftTeamTurnState(battleController, battleUIController, this),
            new RightTeamTurnState(battleController, battleUIController, this),
            new TurnEndState(battleController, battleUIController, this),
            new BattleEndState(battleController, battleUIController, this)
        };

        _currentState = _allStates[0];
        _currentState.StateStart();
    }

    public void InBattleStart() => _currentState.BattleStart();
    public void InTurnStart(ElementType element, Teams team) => _currentState.TurnStart(element, team);
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

    public BattleAbstractState(BattleController battleController, 
        BattleUIController battleUIController, 
        BattleStateMachine battleStateMachine)
    {
        _battleController = battleController;
        _battleUIController = battleUIController;
        _stateMachine = battleStateMachine;
    }

    public abstract void StateStart();
    public abstract void StateStop();

    public abstract void BattleStart();
    public abstract void TurnStart(ElementType element, Teams team);
    public abstract void LeftTeamTurn();
    public abstract void RightTeamTurn();
    public abstract void TurnEnd();
    public abstract void BattleEnd();
}

public class BattleStartState : BattleAbstractState
{
    public BattleStartState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        //“ŒÀ‹ Œ Õ¿ œ≈–¬Œ… »“≈–¿÷»»
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
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
    {
        if (team == Teams.Left)
        {
            _stateMachine.ChangeCurrentState<LeftTeamTurnState>();
            _battleController.ActivateLeftTeamTurn(element);
        }
        else
        {
            _stateMachine.ChangeCurrentState<RightTeamTurnState>();
            _battleController.ActivateRightTeamTurn(element);
        }
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        _battleUIController.StartWheelAnimation();
    }

    public override void StateStop()
    {
    }
}

public class LeftTeamTurnState : BattleAbstractState
{
    public LeftTeamTurnState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
        _battleController.PlayerTeamTurnStart();
    }

    public override void StateStop()
    {
        _battleController.PlayerTeamTurnEnd();
        _battleController.DeactivateLefttTeamTurn();
    }
}

public class RightTeamTurnState : BattleAbstractState
{
    public RightTeamTurnState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
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
        _battleController.DeactivateRightTeamTurn();
    }
}

public class TurnEndState : BattleAbstractState
{
    public TurnEndState(BattleController battleController,
        BattleUIController battleUIController,
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
    {
    }

    public override void TurnEnd()
    {
    }

    public override void StateStart()
    {
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
        BattleStateMachine stateMachine)
        : base(battleController, battleUIController, stateMachine)
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

    public override void TurnStart(ElementType element, Teams team)
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
