using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Teams {Left, Right};

public class BattleController : MonoBehaviour
{
    [SerializeField] private BattleStateMachine _stateMachine;
    [SerializeField] private BattleUIController _uiController;
    [SerializeField] private AbstractTeam _leftTeam;
    [SerializeField] private AbstractTeam _rightTeam;
    [SerializeField] private GameObject _battleBackground;
    [SerializeField] private GameObject _effectsHolder;

    private void OnEnable()
    {
        _leftTeam.Initialize(_rightTeam);
        _rightTeam.Initialize(_leftTeam);
        _stateMachine.Initialize(this, _uiController, _leftTeam, _rightTeam);
        _uiController.Initialize(_stateMachine);
        _leftTeam.ActiveCharacterUpdatedUI += _uiController.SetSkillButtonsInfo;
        _rightTeam.FlipCharacters();
        _battleBackground.SetActive(true);
        _effectsHolder.SetActive(true);
    }

    private void OnDisable()
    {
        _leftTeam.ActiveCharacterUpdatedUI -= _uiController.SetSkillButtonsInfo;
        _uiController.Deinitialize(_stateMachine);
        _rightTeam.Deinitialize();
        _leftTeam.Deinitialize();
        _battleBackground.SetActive(false);
        _effectsHolder.SetActive(false);
    }
}
