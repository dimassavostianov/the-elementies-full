using System.Collections;
using UnityEngine;

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

            bool[] canCharacterUsePerks = new bool[4]
            {
            characterPerks[0].ApplyingEnergy <= _currentActiveCharacter.Power,
            characterPerks[1].ApplyingEnergy <= _currentActiveCharacter.Power,
            characterPerks[2].ApplyingEnergy <= _currentActiveCharacter.Power,
            characterPerks[3].ApplyingEnergy <= _currentActiveCharacter.Power,
            };

            ActivateCharacterUpdateUIEvent(characterPerks, canCharacterUsePerks);
        }

        return ans;
    }

    public override void TurnByComputer()
    {
    }

    public override void MakeDamagePlayer()
    {
        StartCoroutine(SimpleMeleeAttack(_currentActiveCharacter.Damage));
        ActivateTeamEndedEvent();
    }

    public override void TurnByPlayer(Perk perk)
    {
        PerkType perkType = perk.Type;

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
            StartCoroutine(EndTurnAfterCast(perk));
        }
        else if (perkType == PerkType.Passive)
        {
            StartCoroutine(EndTurnAfterCast(perk));
        }

        _currentActiveCharacter.PerkBeenUsed(perk);
    }

    private IEnumerator SimpleMeleeAttack(int damage)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayMeleeAttack(enemyPos);

        yield return new WaitUntil(() => StaticInfo.HalfMeleeAttackComplete == true);

        _enemyTeam.DamageCharacter(_currentActiveCharacter.CalculateDamage(damage), "none");
        Attack();

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterMeleeAtack(Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayMeleeAttack(enemyPos);

        yield return new WaitUntil(() => StaticInfo.HalfMeleeAttackComplete == true);

        if (perk.VisualEffect != null && perk != null) perk.ActivateVisualEffect(startPos, enemyPos);

        yield return new WaitUntil(() => StaticInfo.PerkEffectFinished == true);

        _perkSysytem.UsePerk(perk, _enemyTeam, _currentActiveCharacter, this);
        Attack();

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
        Attack();

        ActivateTeamEndedEvent();
    }

    private IEnumerator EndTurnAfterCast(Perk perk)
    {
        Vector3 startPos = GetCurrentActiveCharacter().gameObject.transform.position;
        Vector3 enemyPos = _enemyTeam.GetCharacterUnderAttack().gameObject.transform.position;

        _currentActiveCharacter.PlayCastAnim();

        yield return new WaitUntil(() => StaticInfo.CastComplete == true);

        _perkSysytem.UsePerk(perk, _enemyTeam, _currentActiveCharacter, this);

        if (perk.VisualEffect != null && perk != null)
        {
            var visualEffect = perk.ActivateVisualEffect(startPos, enemyPos);

            if (perk.Type == PerkType.Defense) _perkSysytem.SetVisualEffectForDefensePerk(perk, visualEffect as DefensePerkEffect,
               _currentActiveCharacter);
        }

        ActivateTeamEndedEvent();
    }
}
