using System;
using System.Collections;
using UnityEngine;

public class ComputerTeam : AbstractTeam
{
    public override void TurnByComputer()
    {
        var perk = ChoosePerk();
        PerkType perkType = perk.Type;

        if (perk.ApplyingEnergy > _currentActiveCharacter.Power)
        {
            StartCoroutine(SimpleMeleeAttack(_currentActiveCharacter.Damage));
            ActivateTeamEndedEvent();
            return;
        }

        if (perkType == PerkType.Attack)
        {
            if (perk.AttackType == AttackType.Meele)
            {
                StartCoroutine(EndTurnAfterMeleeAtack(perk));
            }
            else if (perk.AttackType == AttackType.Distance)
            {
                StartCoroutine(EndTurnAfterCastAndEffectEnd(perk));
            }
        }
        else if (perkType == PerkType.Defense)
        {
            StartCoroutine(EndTurnAfterCastAndEffectEnd(perk));
        }
        else if (perkType == PerkType.Passive)
        {
            StartCoroutine(EndTurnAfterCastAndEffectEnd(perk));
        }

        _currentActiveCharacter.PerkBeenUsed(perk);
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

        _enemyTeam.DamageCharacter(_currentActiveCharacter.CalculateDamage(damage), "none");

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterMeleeAtack(Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayMeleeAttack(enemyPos);

        yield return new WaitUntil(() => StaticInfo.HalfMeleeAttackComplete == true);

        if (perk.VisualEffect != null) perk.ActivateVisualEffect(startPos, enemyPos);

        yield return new WaitUntil(() => StaticInfo.PerkEffectFinished == true);

        _perkSysytem.UsePerk(perk, _enemyTeam, _currentActiveCharacter, this);

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterCastAndEffectEnd(Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayCastAnim();

        yield return new WaitUntil(() => StaticInfo.CastComplete == true);

        if (perk.VisualEffect != null && perk != null) perk.ActivateVisualEffect(startPos, enemyPos);

        yield return new WaitUntil(() => StaticInfo.PerkEffectFinished == true);

        _perkSysytem.UsePerk(perk, _enemyTeam, _currentActiveCharacter, this);

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