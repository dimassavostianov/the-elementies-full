using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Teams { Left, Right};

public class BattleController : MonoBehaviour
{
    [SerializeField] private BattleStateMachine _stateMachine;
    [SerializeField] private BattleUIController _uiController;
    [SerializeField] private AbstractTeam _leftTeam;
    [SerializeField] private AbstractTeam _rightTeam;

    private void OnEnable()
    {
        _leftTeam.Initialize();
        _rightTeam.Initialize();
        _stateMachine.Initialize(this, _uiController);
        OnCharacterDied();
        _uiController.Initialize(_stateMachine);
        _leftTeam.ActiveCharacterUpdatedUI += _uiController.SetSkillButtonsInfo;
        _leftTeam.CharacterDied += OnCharacterDied;
        _rightTeam.CharacterDied += OnCharacterDied;
    }

    public void ActivateRightTeamTurn(ElementType typeToActivate)
    {
        bool isActive = _rightTeam.TryActivateTeamTurn(typeToActivate);
        if (isActive == true)
        {
            _rightTeam.ActiveCharacterAttack += _leftTeam.DamageCharacter;
            _rightTeam.ActiveCharacterAttack += (int value) => { _stateMachine.InRightTeamTurn(); };
            _rightTeam.TurnEndedWithoutAttack += _stateMachine.InRightTeamTurn;
            _rightTeam.TurnByComputer();
        }
        else
        {
            _stateMachine.ChangeCurrentState<TurnEndState>();
        }
    }

    public void DeactivateRightTeamTurn()
    {
        _rightTeam.ActiveCharacterAttack -= _leftTeam.DamageCharacter;
        _rightTeam.ActiveCharacterAttack -= (int value) => { _stateMachine.InRightTeamTurn(); };
        _rightTeam.TurnEndedWithoutAttack -= _stateMachine.InRightTeamTurn;
    }

    public void ActivateLeftTeamTurn(ElementType typeToActivate)
    {
        bool isActive = _leftTeam.TryActivateTeamTurn(typeToActivate);
        if (isActive == true)
        {
            _leftTeam.ActiveCharacterAttack += _rightTeam.DamageCharacter;
            _leftTeam.ActiveCharacterAttack += (int value) => { _stateMachine.InLeftTeamTurn(); };
            _leftTeam.TurnEndedWithoutAttack += _stateMachine.InLeftTeamTurn;
        }
        else
        {
            _stateMachine.ChangeCurrentState<TurnEndState>();
        }
    }

    public void DeactivateLefttTeamTurn()
    {
        _leftTeam.ActiveCharacterAttack -= _rightTeam.DamageCharacter;
        _leftTeam.ActiveCharacterAttack -= (int value) => { _stateMachine.InLeftTeamTurn(); };
        _leftTeam.TurnEndedWithoutAttack -= _stateMachine.InLeftTeamTurn;
    }

    public void PlayerTeamTurnStart()
    {
        _uiController.SkillUsed += _leftTeam.TurnByPlayer;
    }

    public void PlayerTeamTurnEnd()
    {
        _uiController.SkillUsed -= _leftTeam.TurnByPlayer;
    }

    private void OnCharacterDied()
    {
        _uiController.UpdateBattleWheel
            (
            _leftTeam.GetElementsTypesOfActiveCharacters(),
            _rightTeam.GetElementsTypesOfActiveCharacters()
            );
    }

    private void OnDisable()
    {
        _leftTeam.ActiveCharacterUpdatedUI -= _uiController.SetSkillButtonsInfo;
        _leftTeam.CharacterDied -= OnCharacterDied;
        _rightTeam.CharacterDied -= OnCharacterDied;
    }
}
