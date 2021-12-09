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
        _currentActiveCharacter.SetAsUnChoosed();
        StartCoroutine(SimpleMeleeAttack(_currentActiveCharacter.Damage));
        ActivateTeamEndedEvent();
    }

    public override void TurnByPlayer(Perk perk)
    {
        PerkType perkType = perk.Type;

        if (perkType == PerkType.AttackOne)
        {
            _currentActiveCharacter.SetActiveAttackPerk(perk);
            int damage = _currentActiveCharacter.CalculateDamage();
            if (perk.VisualEffect == null)
            {
                _enemyTeam.DamageCharacter(damage);
                ActivateTeamEndedEvent();
            }
            else
            {
                if (perk.AttackType == AttackType.Meele)
                {
                    StartCoroutine(EndTurnAfterMeleeAtack(damage, perk));
                }
                else if (perk.AttackType == AttackType.Distance)
                {
                    StartCoroutine(EndTurnAfterCastAndEffectEnd(damage, false, perk));
                }
            }
        }
        else if (perkType == PerkType.AttackAll)
        {
            _currentActiveCharacter.SetActiveAttackPerk(perk);
            int damage = _currentActiveCharacter.CalculateDamage();
            if (perk.VisualEffect == null)
            {
                _enemyTeam.DamageAllCharacters(damage);
                ActivateTeamEndedEvent();
            }
            else if (perk.AttackType == AttackType.Distance)
            {
                StartCoroutine(EndTurnAfterCastAndEffectEnd(damage, true, perk));
            }
        }
        else if (perkType == PerkType.Defense)
        {
            _currentActiveCharacter.SetActiveDefensePerk(perk);
            ActivateTeamEndedEvent();
        }
        else if (perkType == PerkType.Passive)
        {
            _currentActiveCharacter.SetPassivePerk(perk);
            ActivateTeamEndedEvent();
        }

        _currentActiveCharacter.SetAsUnChoosed();
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

        if (perk.VisualEffect != null && perk != null) perk.ActivateVisualEffect(startPos, enemyPos);

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
}
