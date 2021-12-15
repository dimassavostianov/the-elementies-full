using System.Collections.Generic;
using UnityEngine;
using System.Collections;

public class PerkSystem
{
    private Dictionary<Perk, DefensePerkEffect> _perkVisualEffectPairs = new Dictionary<Perk, DefensePerkEffect>();
    private Perk _passivePerk;

    public void UsePerk(Perk perk, AbstractTeam enemyTeam, Character character, AbstractTeam team)
    {
        if (perk.Type == PerkType.Attack)
        {
            UseAttackPerk(perk, enemyTeam, character);
        }
        else if (perk.Type == PerkType.Defense)
        {
            ApplyDefensePerk(perk, character);
        }
        else if (perk.Type == PerkType.Passive)
        {
            ApplyPassivePerk(perk, team);
        }
    }

    public void SetVisualEffectForDefensePerk(Perk perk, DefensePerkEffect visualEffect, Character character)
    {
        _perkVisualEffectPairs.TryGetValue(character.ActiveDefensePerk, out var effect);
        if (effect != null)
        {
            GameObject.Destroy(effect.gameObject);
            _perkVisualEffectPairs.Remove(character.ActiveDefensePerk);
        }

        _perkVisualEffectPairs.Add(perk, visualEffect);
    }

    private void UseAttackPerk(Perk perk, AbstractTeam enemyTeam, Character character)
    {
        if (perk.DamageType == DamageType.One)
        {
            enemyTeam.DamageCharacter(character.CalculateDamage(perk.ApplyingDamage), perk.Name);
        }
        else if (perk.DamageType == DamageType.All)
        {
            enemyTeam.DamageAllCharacters(character.CalculateDamage(perk.ApplyingDamage), perk.Name);
        }
    }

    private void ApplyDefensePerk(Perk perk, Character character)
    {
        character.SetActiveDefensePerk(perk);
    }

    private void ApplyPassivePerk(Perk perk, AbstractTeam team)
    {
        _passivePerk = perk;
        foreach (var character in team.GetActiveCharacters())
        {
            character.SetActivePassivePerk(perk);
        }
    }

    public void UseDefensePerk(Character character, AbstractTeam enemyTeam)
    {
        List<Character> enemyCharacterPositions = new List<Character>();
        _perkVisualEffectPairs.TryGetValue(character.ActiveDefensePerk, out var visualEffect);

        if (character.ActiveDefensePerk.DamageType == DamageType.One)
        {
            enemyTeam.CounterDamage(character.ActiveDefensePerk.ApplyingDamage, character.ActiveDefensePerk.Name);
            enemyCharacterPositions.Add(enemyTeam.GetCurrentActiveCharacter());
        }
        else if (character.ActiveDefensePerk.DamageType == DamageType.All)
        {
            foreach (var enemyCharacter in enemyTeam.GetActiveCharacters())
            {
                enemyCharacterPositions.Add(enemyCharacter);
            }
        }

        character.ActiveDefensePerk.DecreaseDuration();
        visualEffect.StartEndEffect(enemyCharacterPositions.ToArray());

        if (character.ActiveDefensePerk.Duration <= 0)
        {
            GameObject.Destroy(visualEffect.gameObject);
            _perkVisualEffectPairs.Remove(character.ActiveDefensePerk);
            character.ResetActiveDefensePerk();
        }
    }

    public void UsePassivePerk(AbstractTeam team)
    {
        _passivePerk.DecreaseDuration();

        if (_passivePerk.Duration <= 0)
        {
            foreach (var character in team.GetActiveCharacters())
                character.ResetActivePassivePerk();
        }
    }

    public void DestroyAllEffects()
    {
        foreach (var effect in _perkVisualEffectPairs)
        {
            effect.Value.DestroySelf();
        }
    }
}