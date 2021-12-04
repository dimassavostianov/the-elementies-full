public class EnemyPlayerTeam : AbstractTeam
{
    public override void MakeDamagePlayer()
    {
    }

    public override bool TryActivateTeamTurn(ElementType characterType)
    {
        return false;
    }

    public override void TurnByComputer()
    {

    }

    public override void TurnByPlayer(Perk perk)
    {

    }
}
