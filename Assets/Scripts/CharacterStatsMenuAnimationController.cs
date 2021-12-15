using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterStatsMenuAnimationController : MonoBehaviour
{
    public bool DeactivateAfterAnim;

    [SerializeField] private Animator _animator;
    [SerializeField] private const string _fromCenterToLeft = "FromCenterToLeft";
    [SerializeField] private const string _fromCenterToRight = "FromCenterToRight";
    [SerializeField] private const string _fromLeftToCenter = "FromLeftToCenter";
    [SerializeField] private const string _fromRightToCenter = "FromRightToCenter";

    public void PlayeAnimFromCenterToLeft()
    {
        _animator.SetTrigger(_fromCenterToLeft);
    }
    public void PlayeAnimFromCenterToRight()
    {
        _animator.SetTrigger(_fromCenterToRight);
    }
    public void PlayeAnimFromLeftToCenter()
    {
        _animator.SetTrigger(_fromLeftToCenter);
    }
    public void PlayeAnimFromRightToCenter()
    {
        _animator.SetTrigger(_fromRightToCenter);
    }

    public void DisableIfNeed()
    {
        if (DeactivateAfterAnim == true)
        {
            gameObject.SetActive(false);
        }
    }
}
