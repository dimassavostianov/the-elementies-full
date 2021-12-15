using UnityEngine;
using Spine.Unity;
using System.Collections;
using Spine;
using System.Collections.Generic;

public class CharacterAnimationController : MonoBehaviour
{
    [SerializeField] private SkeletonAnimation _skeletonAnim;
    [SerializeField] private AnimationReferenceAsset _meleeAttack;
    [SerializeField] private AnimationReferenceAsset _cast;
    [SerializeField] private AnimationReferenceAsset _takeDamage;
    [SerializeField] private AnimationReferenceAsset _takeDamageFromBlade;
    [SerializeField] private AnimationReferenceAsset _takeDamageSpike;
    [SerializeField] private AnimationReferenceAsset _takeDamageTornado;
    [SerializeField] private AnimationReferenceAsset _death;
    [SerializeField] private AnimationReferenceAsset _relax;
    [SerializeField] private AnimationReferenceAsset _winPose;
    [SerializeField] private float minDistanceForMeleeAtack;

    private Dictionary<string, AnimationReferenceAsset> _attackAnimationPairs;

    public void MakeXFlip()
    {
        _skeletonAnim.skeleton.FlipX = true;
    }

    public void StartRelaxAnimation()
    {
        _skeletonAnim.state.SetAnimation(0, _relax, true).TimeScale = 1f;
    }

    public void StartMeleeAttackAnimation(Vector3 enemyPosition)
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _meleeAttack, false);
        trackEntry.TimeScale = 1f;
        StartCoroutine(MeleeAttackAnim(enemyPosition));
    }

    private IEnumerator MeleeAttack()
    {
        yield return new WaitForSeconds(0.35f);
        StaticInfo.HalfMeleeAttackComplete = true;
        yield return new WaitForSeconds(1.167f - 0.35f);
        StartRelaxAnimation();
    }

    private IEnumerator MeleeAttackAnim(Vector3 enemyPosition)
    {
        float halfAnimationDuration = 0.3f;
        float secondHalfAnimationDuration = 1.433f - halfAnimationDuration;
        Vector3 startPosition = transform.position;
        Vector3 directionToEnemy = enemyPosition - startPosition;
        float distanceToEnemy = Vector3.Magnitude(directionToEnemy);
        float speedOnFirstHalf = distanceToEnemy / halfAnimationDuration;
        float traveledDistance = 0f;

        while (traveledDistance < distanceToEnemy - 3f)
        {
            transform.position = Vector3.MoveTowards(transform.position, enemyPosition, speedOnFirstHalf * Time.deltaTime);
            traveledDistance += speedOnFirstHalf * Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }

        StaticInfo.HalfMeleeAttackComplete = true;
        traveledDistance = 0f;
        Vector3 directionToStartPos = startPosition - enemyPosition;
        float distanceBack = Vector3.Magnitude(directionToStartPos);
        float speedOnSecondHalf = distanceBack / secondHalfAnimationDuration;

        while (traveledDistance < distanceBack)
        {
            transform.position = Vector3.MoveTowards(transform.position, startPosition, speedOnSecondHalf * Time.deltaTime);
            traveledDistance += speedOnSecondHalf * Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }

        StartRelaxAnimation();
    }

    private void InitializeDictionary()
    {
        _attackAnimationPairs = new Dictionary<string, AnimationReferenceAsset>
        {
            {"Tornado", _takeDamageTornado},
            {"Vortex Blade", _takeDamageFromBlade},
            {"Deadly Spike", _takeDamageSpike}
        };
    }

    public void StartCastAnimation()
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _cast, false);
        trackEntry.TimeScale = 1f;
        trackEntry.Complete += (state) => 
        { 
            StartRelaxAnimation();
            StaticInfo.CastComplete = true;
        };
    }

    public void StartTakingDamageAnimation(string perkName)
    {
        if (_attackAnimationPairs == null) InitializeDictionary();

        if (_attackAnimationPairs.TryGetValue(perkName, out var animation))
        {
            StartTakingDamageAnimation(animation, 1f);
        }
        else
        {
            StartTakingDamageAnimation(_takeDamage, 1f);
        }
    }
    private void StartTakingDamageAnimation(AnimationReferenceAsset animation, float timeScale)
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, animation, false);
        trackEntry.TimeScale = timeScale;
        trackEntry.Complete += (state) => { StartRelaxAnimation(); };
    }

    public void StartDeathAnimation()
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _death, false);
        trackEntry.TimeScale = 1f;
        trackEntry.Complete += (state) => { gameObject.SetActive(false); };
    }

    public void StartWinAnimation()
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _winPose, false);
        trackEntry.TimeScale = 1f;
        trackEntry.Complete += (state) => 
        {
            StartRelaxAnimation();
            StartCoroutine(WinAnimationAfterDelay());
        };
    }

    private IEnumerator WinAnimationAfterDelay()
    {
        yield return new WaitForSeconds(Random.Range(2f, 2.5f));

        StartWinAnimation();
    }
}
