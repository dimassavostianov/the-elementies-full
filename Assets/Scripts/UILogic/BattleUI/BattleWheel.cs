using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

[RequireComponent(typeof(RectTransform))]
public class BattleWheel : MonoBehaviour
{
    public event Action<Teams> ElementChoosed;

    public ElementType ChoosedElement => _choosedElement;

    [SerializeField] private float _rotationSpeed;
    [SerializeField] private InWheelElement[] _wheelElements;
    [SerializeField] private RectTransform _wheelRectTransform;

    private const float _cellOffsetDegrees = 51.42f;
    private float _currentAdditionalRotation;
    private int _currentElementIndex;
    private int _elementToChangeIndex;
    private int _turnsLeft;
    private int _turnsRight;
    private Teams _prevTeam;
    private ElementType _choosedElement;

    private List<ElementType> _rightTeamPossibleElements;
    private List<ElementType> _leftTeamPossibleElements;
    private Queue<ElementType> _rightTeamElementQueue;
    private Queue<ElementType> _leftTeamElementQueue;

    private bool _isElemntsUpdated;

    private void OnEnable()
    {
        transform.rotation = Quaternion.identity;
    }

    public void InitializeWheel()
    {
        _currentElementIndex = 0;
        _prevTeam = GetRandomTeam();
        _turnsLeft = 0;
        _turnsRight = 0;
        SetFlagsOnStart();
        _isElemntsUpdated = false;
        StartCoroutine(UpdateElementsOnStartCoroutine());
    }

    private IEnumerator UpdateElementsOnStartCoroutine()
    {
        yield return new WaitWhile(() => _isElemntsUpdated == true);

        ChooseElementTypeForWheelElementsOnStart();
    }

    public void PlayRotationAnimation()
    {
        StartCoroutine(PlayAnimation());
    }

    public void UpdateInWheelElements(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _rightTeamPossibleElements = new List<ElementType>();
        _leftTeamPossibleElements = new List<ElementType>();

        _rightTeamElementQueue = new Queue<ElementType>();
        _leftTeamElementQueue = new Queue<ElementType>();

        _rightTeamPossibleElements.AddRange(rightTeam);
        _leftTeamPossibleElements.AddRange(leftTeam);

        AddElementsToQueues();
        AddElementsToQueues();
        _isElemntsUpdated = true;
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

        if (_wheelElements[_currentElementIndex].GetCurrentTeam() == Teams.Left) _turnsLeft++;
        if (_wheelElements[_currentElementIndex].GetCurrentTeam() == Teams.Right) _turnsRight++;

        SetChoosedElement();
        UpdateOffScreenElementsFlags();

        int left;
        if (_leftTeamPossibleElements.Count == 3) left = _leftTeamPossibleElements.Count - 1;
        else left = _leftTeamPossibleElements.Count;
        int right;
        if (_rightTeamPossibleElements.Count == 3) right = _rightTeamPossibleElements.Count - 1;
        else right = _rightTeamPossibleElements.Count;

        if (_turnsLeft >= left)
        {
            UpdateElementsForLeftTeam();
            _turnsLeft = 0;
        }
        if (_turnsRight >= right)
        {
            UpdateElementsForRightTeam();
            _turnsRight = 0;
        }
    }

    private void AddElementsToQueues()
    {
        if (_leftTeamPossibleElements.Count == 3) _leftTeamPossibleElements.Shuffle();
        if (_rightTeamPossibleElements.Count == 3) _rightTeamPossibleElements.Shuffle();

        foreach (var element in _leftTeamPossibleElements)
            _leftTeamElementQueue.Enqueue(element);

        foreach (var element in _rightTeamPossibleElements)
            _rightTeamElementQueue.Enqueue(element);
    }

    private void AddElementsToRightQueue()
    {
        if (_rightTeamPossibleElements.Count == 3) _rightTeamPossibleElements.Shuffle();

        foreach (var element in _rightTeamPossibleElements)
            _rightTeamElementQueue.Enqueue(element);
    }

    private void AddElementsToLeftQueue()
    {
        if (_leftTeamPossibleElements.Count == 3) _leftTeamPossibleElements.Shuffle();

        foreach (var element in _leftTeamPossibleElements)
            _leftTeamElementQueue.Enqueue(element);
    }

    private void SetChoosedElement()
    {
        var elementType = _wheelElements[_currentElementIndex].GetCurrentElementType();
        var elementTeam = _wheelElements[_currentElementIndex].GetCurrentTeam();

        _wheelElements[_currentElementIndex].SetAsUsed();

        _choosedElement = elementType;
        ElementChoosed?.Invoke(elementTeam);
    }

    private void UpdateOffScreenElementsFlags()
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
            _wheelElements[_elementToChangeIndex].SetAsUnused();
        }    
    }

    private void SetFlagsOnStart()
    {
        for (int i = 0; i < _wheelElements.Length - 1; i++)
        {
            Teams team = _prevTeam;

            if (_prevTeam == Teams.Right) team = Teams.Left;
            else if (_prevTeam == Teams.Left) team = Teams.Right;

            _prevTeam = team;

            _wheelElements[i].SetCurrentTeam(team);
        }
    }

    private void ChooseElementTypeForWheelElementsOnStart()
    {
        for (int i = 0; i < _wheelElements.Length; i++)
        {
            Teams team = _wheelElements[i].GetCurrentTeam();

            if (team == Teams.Left)
            {
                var type = _leftTeamElementQueue.Dequeue();
                _wheelElements[i].SetElement(type);
            }
            else
            {
                var type = _rightTeamElementQueue.Dequeue();
                _wheelElements[i].SetElement(type);
            }
        }
    }

    private void UpdateElementsForRightTeam()
    {
        AddElementsToRightQueue();

        foreach (var item in _wheelElements)
        {
            if (item.IsOffscreen == false) continue;

            if (item.GetCurrentTeam() == Teams.Left) continue;

            var element = _rightTeamElementQueue.Dequeue();
            item.SetElement(element);
        }
    }

    private void UpdateElementsForLeftTeam()
    {
        AddElementsToLeftQueue();

        foreach (var item in _wheelElements)
        {
            if (item.IsOffscreen == false) continue;

            if (item.GetCurrentTeam() == Teams.Right) continue;

            var element = _leftTeamElementQueue.Dequeue();
            item.SetElement(element);
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

public static class ListExtension
{
    public static void Shuffle<T>(this IList<T> list)
    {
        System.Random random = new System.Random();
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = random.Next(n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }
}
