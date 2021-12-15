using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatsMenuCharacterUI : MonoBehaviour
{
    [SerializeField] private int _curentIndex;
    [SerializeField] private Character[] _characters;
    [SerializeField] private StatsMenuUIController _uiController;

    private bool _animationOver;

    private void OnEnable()
    {
        _curentIndex = 0;
        _animationOver = true;
        SetActiveCharacter();
    }

    public void IndexUp()
    {
        if (_animationOver == true)
        {
            if (_curentIndex == _characters.Length - 1) return;

            _curentIndex++;
            SetActiveCharacterWithAnimation(true);
        }
    }

    public void IndexDown()
    {
        if (_animationOver == true)
        {
            if (_curentIndex == 0) return;

            _curentIndex--;
            SetActiveCharacterWithAnimation(false);
        }
    }

    private void SetActiveCharacter()
    {
        _curentIndex = Mathf.Clamp(_curentIndex, 0, _characters.Length - 1);

        for (int i = 0; i < _characters.Length; i++)
        {
            if (i == _curentIndex)
            {
                _characters[i].gameObject.SetActive(true);
                _uiController.UpdateCharacterInfo(_characters[i]);
                continue;
            }

            _characters[i].gameObject.SetActive(false);
        }
    }

    private void SetActiveCharacterWithAnimation(bool moveRight)
    {
        _curentIndex = Mathf.Clamp(_curentIndex, 0, _characters.Length - 1);

        if (moveRight == true)
        {
            _characters[_curentIndex].gameObject.SetActive(true);

            var animControllerOldChar = _characters[_curentIndex - 1].gameObject.GetComponent<CharacterStatsMenuAnimationController>();
            var animControllerNewChar = _characters[_curentIndex].gameObject.GetComponent<CharacterStatsMenuAnimationController>();

            animControllerOldChar.PlayeAnimFromCenterToLeft();
            animControllerOldChar.DeactivateAfterAnim = true;

            animControllerNewChar.PlayeAnimFromRightToCenter();
            animControllerNewChar.DeactivateAfterAnim = false;

            _uiController.UpdateCharacterInfo(_characters[_curentIndex]);
        }
        else
        {
            _characters[_curentIndex].gameObject.SetActive(true);

            var animControllerOldChar = _characters[_curentIndex + 1].gameObject.GetComponent<CharacterStatsMenuAnimationController>();
            var animControllerNewChar = _characters[_curentIndex].gameObject.GetComponent<CharacterStatsMenuAnimationController>();

            animControllerOldChar.PlayeAnimFromCenterToRight();
            animControllerOldChar.DeactivateAfterAnim = true;

            animControllerNewChar.PlayeAnimFromLeftToCenter();
            animControllerNewChar.DeactivateAfterAnim = false;

            _uiController.UpdateCharacterInfo(_characters[_curentIndex]);
        }
    }
}
