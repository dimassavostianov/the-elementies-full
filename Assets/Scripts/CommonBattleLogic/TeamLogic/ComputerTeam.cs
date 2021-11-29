public class ComputerTeam : AbstractTeam
{
    public override void Initialize()
    {
        base.Initialize();

        foreach (var a in _activeCharacters)
        {
            a.XFlip();
        }
    }

    public override void TurnByComputer()
    {
        bool useAttackPerk = _currentActiveCharacter.Health > 10;

        if (useAttackPerk == true)
        {
            _currentActiveCharacter.SetActiveAttackPerk(_currentActiveCharacter.AttackPerk1);
            int damage = _currentActiveCharacter.CalculateDamage();
            ActivateActiveCharacterAttack(damage);
        }
        else
        {
            _currentActiveCharacter.SetActiveDefensePerk(_currentActiveCharacter.DefensePerk);
            ActivateTurnEndedWithoutAttack();
        }

        CheckIfTeamDefeated();
        _currentActiveCharacter.SetAsUnChoosed();
    }

    public override void TurnByPlayer(Perk perk)
    {

    }
}