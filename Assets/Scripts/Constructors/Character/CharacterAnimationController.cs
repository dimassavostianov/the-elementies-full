using UnityEngine;
using Spine.Unity;
using System.Collections;
using Spine;

public class CharacterAnimationController : MonoBehaviour
{
    [SerializeField] private SkeletonAnimation _skeletonAnim;
    [SerializeField] private AnimationReferenceAsset _meleeAttack;
    [SerializeField] private AnimationReferenceAsset _cast;
    [SerializeField] private AnimationReferenceAsset _takeDamage;
    [SerializeField] private AnimationReferenceAsset _death;
    [SerializeField] private AnimationReferenceAsset _defence;
    [SerializeField] private AnimationReferenceAsset _relax;
    [SerializeField] private float minDistanceForMeleeAtack;

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

    private IEnumerator MeleeAttackAnim(Vector3 enemyPosition)
    {
        float halfAnimationDuration = 0.35f;
        float secondHalfAnimationDuration = 1.167f - halfAnimationDuration;
        Vector3 startPosition = transform.position;
        Vector3 directionToEnemy = enemyPosition - startPosition;
        float distanceToEnemy = Vector3.Magnitude(directionToEnemy);
        float speedOnFirstHalf = distanceToEnemy / halfAnimationDuration;
        float traveledDistance = 0f;

        StartCoroutine(TemporalCostil());

        while (traveledDistance < distanceToEnemy - 1.5f)
        {
            transform.position = Vector3.MoveTowards(transform.position, enemyPosition, speedOnFirstHalf * Time.deltaTime);
            traveledDistance += speedOnFirstHalf * Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }

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

    private IEnumerator TemporalCostil()
    {
        yield return new WaitForSeconds(0.1f);

        StaticInfo.HalfMeleeAttackComplete = true;
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

    public void StartTakingDamageAnimation()
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _takeDamage, false);
        trackEntry.TimeScale = 1f;
        trackEntry.Complete += (state) => { StartRelaxAnimation();};
    }

    public void StartDeathAnimation()
    {
        TrackEntry trackEntry = _skeletonAnim.state.SetAnimation(0, _death, false);
        trackEntry.TimeScale = 1f;
        trackEntry.Complete += (state) => { gameObject.SetActive(false); };
    }

    public void StartDefenceAnimation()
    {
        _skeletonAnim.state.SetAnimation(0, _defence, false).TimeScale = 1f;
    }
}
