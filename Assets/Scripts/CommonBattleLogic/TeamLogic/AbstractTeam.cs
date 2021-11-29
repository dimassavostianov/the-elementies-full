using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public abstract class AbstractTeam : MonoBehaviour
{
    public event Action<Perk[]> ActiveCharacterUpdatedUI;
    public event Action CharacterDied;
    public event Action<int> ActiveCharacterAttack;
    public event Action TurnEndedWithoutAttack;
    public event Action TeamDefeated;

    [SerializeField] private Transform[] _positionsForTeam;
    [SerializeField] private Character[] _charactersInTeam = new Character[3];

    protected List<Character> _activeCharacters = new List<Character>();
    protected Character _currentActiveCharacter;
    protected Character _currentCharacterUnderAttack;

    public void SetCharactersInTeam(Character[] characters)
    {
        for (int i = 0; i < _charactersInTeam.Length; i++)
        {
            _charactersInTeam[i] = characters[i];
        }
    }

    public Character[] GetActiveCharacters()
    {
        return _activeCharacters.ToArray();
    }

    public ElementType[] GetElementsTypesOfActiveCharacters()
    {
        List<ElementType> elementTypes = new List<ElementType>();

        foreach (var character in _activeCharacters)
        {
            if (character.CurrentState == CharacterState.Alive)
            {
                elementTypes.Add(character.ElementType);
            }
        }

        return elementTypes.ToArray();
    }

    public virtual void Initialize()
    {
        for (int characterIndex = 0; characterIndex < _charactersInTeam.Length; characterIndex++)
        {
            var characterObj = Instantiate(_charactersInTeam[characterIndex].gameObject);
            Character charOnScene = characterObj.GetComponent<Character>();
            _activeCharacters.Add(charOnScene);
            Vector2 posForCharacter = _positionsForTeam[characterIndex].position;
            characterObj.transform.position = new Vector3(posForCharacter.x, posForCharacter.y, 0);
        }
    }

    public void DamageCharacter(int damage)
    {
        _currentCharacterUnderAttack = _activeCharacters.Find(t => t.CurrentState == CharacterState.Alive);

        _currentCharacterUnderAttack.TakeDamage(damage);

        if (_currentCharacterUnderAttack.CurrentState == CharacterState.Dead)
        {
            ActivateCharacterDiedUpdate();
        }
    }

    public virtual bool TryActivateTeamTurn(ElementType characterType) 
    {
        bool ans = true;
        _currentActiveCharacter = _activeCharacters.Find(t => t.ElementType == characterType);
        if (_currentActiveCharacter.CurrentState == CharacterState.Alive)
        {
            _currentActiveCharacter.SetAsChoosed();
            ans = true;
        }
        else if (_currentActiveCharacter.CurrentState == CharacterState.Dead)
        {
            ans = false;
        }

        return ans;
    }

    public virtual void DeactivateTeamTurn()
    {
        _currentActiveCharacter.ResetActiveAttackPerks();
    }

    public abstract void TurnByPlayer(Perk perk);
    public abstract void TurnByComputer();

    protected void CheckIfTeamDefeated() 
    {
        bool defeated = true;

        foreach (var character in _activeCharacters)
        {
            if (character.CurrentState == CharacterState.Alive) defeated = false;
        }

        if (defeated == true) TeamDefeated?.Invoke();
    }

    protected void ActivateCharacterUpdateUIEvent(Perk[] perks) => ActiveCharacterUpdatedUI?.Invoke(perks);
    protected void ActivateCharacterDiedUpdate() => CharacterDied?.Invoke();
    protected void ActivateActiveCharacterAttack(int value) => ActiveCharacterAttack?.Invoke(value);
    protected void ActivateTurnEndedWithoutAttack() => TurnEndedWithoutAttack?.Invoke();
}