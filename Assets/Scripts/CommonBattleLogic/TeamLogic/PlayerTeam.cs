public class PlayerTeam : AbstractTeam
{
    public override bool TryActivateTeamTurn(ElementType characterType)
    {
        bool ans = base.TryActivateTeamTurn(characterType);
        if (ans == true)
        {
            Perk[] characterPerks = new Perk[4]
            {
            _currentActiveCharacter.AttackPerk1,
            _currentActiveCharacter.AttackPerk2,
            _currentActiveCharacter.DefensePerk,
            _currentActiveCharacter.PassivePerk,
            };
            ActivateCharacterUpdateUIEvent(characterPerks);
        }

        return ans;
    }

    public override void TurnByComputer()
    {
    }

    public override void TurnByPlayer(Perk perk)
    {
        PerkType perkType = perk.Type;

        if (perkType == PerkType.Attack)
        {
            _currentActiveCharacter.SetActiveAttackPerk(perk);
            int attackPoints = _currentActiveCharacter.CalculateDamage();
            ActivateActiveCharacterAttack(attackPoints);
        }
        else if (perkType == PerkType.Defense)
        {
            _currentActiveCharacter.SetActiveDefensePerk(perk);
            ActivateTurnEndedWithoutAttack();
        }
        else if (perkType == PerkType.Passive)
        {
            _currentActiveCharacter.SetPassivePerk(perk);
            ActivateTurnEndedWithoutAttack();
        }

        CheckIfTeamDefeated();
        _currentActiveCharacter.SetAsUnChoosed();
    }
}
