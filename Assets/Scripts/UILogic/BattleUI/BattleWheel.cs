using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

[RequireComponent(typeof(RectTransform))]
public class BattleWheel : MonoBehaviour
{
    public event Action<ElementType, Teams> ElementChoosed; 

    [SerializeField] private float _rotationSpeed;
    [SerializeField] private InWheelElement[] _wheelElements;
    [SerializeField] private RectTransform _wheelRectTransform;

    private const float _cellOffsetDegrees = 51.42f;
    private float _currentAdditionalRotation;
    private int _currentElementIndex;
    private int _elementToChangeIndex;
    private Teams _prevTeam;

    public void InitializeWheel()
    {
        _currentElementIndex = 0;
        _prevTeam = GetRandomTeam();
        SetFlagsOnStart();
    }

    public void PlayRotationAnimation()
    {
        StartCoroutine(PlayAnimation());
    }

    public void UpdateInWheelElements(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        foreach (var element in _wheelElements)
        {
            element.SetPossibleElements(leftTeam, rightTeam);
        }
    }

    public void ForceInWheelElementsUpdating()
    {
        foreach (var element in _wheelElements)
        {
            element.ChooseElementFromPossibles();
        }
    }

    private IEnumerator PlayAnimation()
    {
        _currentAdditionalRotation = 0;
        float startRotation = _wheelRectTransform.transform.eulerAngles.z;

        while (_currentAdditionalRotation < _cellOffsetDegrees)
        {
            _currentAdditionalRotation += _rotationSpeed * Time.deltaTime;
            Quaternion rotation = Quaternion.AngleAxis(_currentAdditionalRotation + startRotation, Vector3.forward);
            _wheelRectTransform.transform.rotation = rotation;

            yield return new WaitForEndOfFrame();
        }

        _currentElementIndex++;

        if (_currentElementIndex == 7)
        {
            _currentElementIndex = 0;
        }

        SetChoosedElement();
        UpdateOffScreenElement();
    }

    private void SetChoosedElement()
    {
        var elementType = _wheelElements[_currentElementIndex].GetCurrentElementType();
        var elementTeam = _wheelElements[_currentElementIndex].GetCurrentTeam();

        _wheelElements[_currentElementIndex].SetAsUsed();

        ElementChoosed?.Invoke(elementType, elementTeam);
    }

    private void UpdateOffScreenElement()
    {
        for (int i = 3; i < 6; i++)
        {
            _elementToChangeIndex = _currentElementIndex + i;
            if (_elementToChangeIndex >= 7)
            {
                _elementToChangeIndex -= 7;
            }

            Teams team = _prevTeam;

            if (_prevTeam == Teams.Right) team = Teams.Left;
            else if (_prevTeam == Teams.Left) team = Teams.Right;

            _prevTeam = team;

            _wheelElements[_elementToChangeIndex].SetCurrentTeam(team);
            _wheelElements[_elementToChangeIndex].ChooseElementFromPossibles();
        }    }

    private void SetFlagsOnStart()
    {
        for (int i = 0; i < _wheelElements.Length - 1; i++)
        {
            Teams team = _prevTeam;

            if (_prevTeam == Teams.Right) team = Teams.Left;
            else if (_prevTeam == Teams.Left) team = Teams.Right;

            _prevTeam = team;

            _wheelElements[i].SetCurrentTeam(team);
            _wheelElements[i].ChooseElementFromPossibles();
        }
    }

    private Teams GetRandomTeam()
    {
        var random = new System.Random();
        int a = random.Next(2);

        if (a == 0) return Teams.Left;
        else return Teams.Right;
    }
}
