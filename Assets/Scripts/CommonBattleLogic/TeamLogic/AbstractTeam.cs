using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public abstract class AbstractTeam : MonoBehaviour
{
    public event Action<Perk[], bool[]> ActiveCharacterUpdatedUI;
    public event Action CharacterDied;
    public event Action TeamEndedTurn;

    [SerializeField] private Transform[] _positionsForTeam;
    [SerializeField] private Character[] _charactersInTeam = new Character[3];
    [SerializeField] private Character[] _charactersForWinScrenn;

    protected AbstractTeam _enemyTeam;
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

    public Character[] GetCharactersForWinScreen()
    {
        return _charactersForWinScrenn;
    }

    public Character[] GetActiveCharacters()
    {
        return _activeCharacters.ToArray();
    }

    public Character GetCharacterUnderAttack()
    {
        return _currentCharacterUnderAttack;
    }

    public Character GetCurrentActiveCharacter()
    {
        return _currentActiveCharacter;
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

    public virtual void Initialize(AbstractTeam enemyTeam)
    {
        _enemyTeam = enemyTeam;
        _activeCharacters = new List<Character>();

        for (int characterIndex = 0; characterIndex < _charactersInTeam.Length; characterIndex++)
        {
            var characterObj = Instantiate(_charactersInTeam[characterIndex].gameObject);
            Character charOnScene = characterObj.GetComponent<Character>();
            _activeCharacters.Add(charOnScene);
            Vector2 posForCharacter = _positionsForTeam[characterIndex].position;
            characterObj.transform.position = new Vector3(posForCharacter.x, posForCharacter.y, 0);
        }
    }

    public void Deinitialize()
    {
        _enemyTeam = null;

        if (_activeCharacters.Count > 0)
        {
            foreach (var character in _activeCharacters)
            {
                try
                {
                    Destroy(character.gameObject);
                }
                catch (Exception ex)
                { }
            }
        }
    }

    public void SetCharacterUnderAttack()
    {
        _currentCharacterUnderAttack = _activeCharacters.Find(t => t.CurrentState == CharacterState.Alive);
    }

    public void DamageCharacter(int damage)
    {
        _currentCharacterUnderAttack.TakeDamage(damage);

        if (_currentCharacterUnderAttack.CurrentState == CharacterState.Dead)
        {
            ActivateCharacterDiedUpdate();
        }
    }

    public void DamageAllCharacters(int damage)
    {
        foreach (var character in _activeCharacters)
        {
            if (character.CurrentState == CharacterState.Alive)
            {
                character.TakeDamage(damage);

                if (character.CurrentState == CharacterState.Dead)
                {
                    ActivateCharacterDiedUpdate();
                }
            }
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
    public void FlipCharacters()
    {
        foreach (var a in _activeCharacters)
        {
            a.XFlip();
        }
    }

    public virtual void DeactivateTeamTurn()
    {
        _currentActiveCharacter.ResetActiveAttackPerks();
    }

    public abstract void TurnByPlayer(Perk perk);
    public abstract void TurnByComputer();

    public bool CheckIfTeamDefeated() 
    {
        bool defeated = true;

        foreach (var character in _activeCharacters)
        {
            if (character.CurrentState == CharacterState.Alive)
            {
                defeated = false;
            }
        }

        return defeated;
    }

    public void DestroyCharactersOnDefeat()
    {
        foreach (var character in _activeCharacters)
            Destroy(character.gameObject);
    }

    public abstract void MakeDamagePlayer();

    protected void ActivateCharacterUpdateUIEvent(Perk[] perks, bool[] canUsePerk) => ActiveCharacterUpdatedUI?.Invoke(perks, canUsePerk);
    protected void ActivateCharacterDiedUpdate() => CharacterDied?.Invoke();
    protected void ActivateTeamEndedEvent() => TeamEndedTurn?.Invoke();
}