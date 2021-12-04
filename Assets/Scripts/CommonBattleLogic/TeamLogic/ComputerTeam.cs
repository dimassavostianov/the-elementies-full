using System;
using System.Collections;
using UnityEngine;

public class ComputerTeam : AbstractTeam
{
    public override void TurnByComputer()
    {
        var perk = ChoosePerk();

        if (perk.ApplyingEnergy > _currentActiveCharacter.Power)
        {
            _currentActiveCharacter.SetAsUnChoosed();
            StartCoroutine(SimpleMeleeAttack(_currentActiveCharacter.Damage));
            ActivateTeamEndedEvent();
            return;
        }

        if (perk.Type == PerkType.AttackOne)
        {
            _currentActiveCharacter.SetActiveAttackPerk(perk);
            int damage = _currentActiveCharacter.CalculateDamage();
            if (perk.AttackType == AttackType.Distance)
            {
                StartCoroutine(EndTurnAfterCastAndEffectEnd(damage, false, perk));
            }
            else
            {
                StartCoroutine(EndTurnAfterMeleeAtack(damage, perk));
            }
        }
        else if (perk.Type == PerkType.Defense)
        {
            _currentActiveCharacter.SetActiveDefensePerk(perk);
            StartCoroutine(EndTurnWithDelay(1f));
        }

        _currentActiveCharacter.SetAsUnChoosed();
    }

    public override void TurnByPlayer(Perk perk)
    {

    }

    private IEnumerator SimpleMeleeAttack(int damage)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayMeleeAttack(enemyPos);

        yield return new WaitUntil(() => StaticInfo.HalfMeleeAttackComplete == true);

        _enemyTeam.DamageCharacter(damage);

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterMeleeAtack(int damage, Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayMeleeAttack(enemyPos);

        yield return new WaitUntil(() => StaticInfo.HalfMeleeAttackComplete == true);

        if (perk.VisualEffect != null) perk.ActivateVisualEffect(startPos, enemyPos);

        yield return new WaitUntil(() => StaticInfo.PerkEffectFinished == true);

        _enemyTeam.DamageCharacter(damage);

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterCastAndEffectEnd(int damage, bool damageAll, Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayCastAnim();

        yield return new WaitUntil(() => StaticInfo.CastComplete == true);

        if (perk.VisualEffect != null && perk != null) perk.ActivateVisualEffect(startPos, enemyPos);

        yield return new WaitUntil(() => StaticInfo.PerkEffectFinished == true);

        if (damageAll == true) _enemyTeam.DamageAllCharacters(damage);
        else _enemyTeam.DamageCharacter(damage);

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnWithDelay(float sec)
    {
        yield return new WaitForSeconds(sec);

        ActivateTeamEndedEvent();
    }

    private Perk ChoosePerk()
    {
        return _currentActiveCharacter.AttackPerk1;
    }

    public override void MakeDamagePlayer()
    {

    }
}