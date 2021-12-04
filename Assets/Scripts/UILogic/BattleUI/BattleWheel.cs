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
    private Teams _prevTeam;
    private ElementType _choosedElement;

    private Queue<int> _indexesForLeftTeam = new Queue<int>();
    private Queue<int> _indexesForRightTeam = new Queue<int>();
    private int _leftTeamElemtsAmount;
    private int _rightTeamElemtsAmount;
    private int _wheelTurnedCount;
    private int _updateElementsAfterTurnsCount;

    private void OnEnable()
    {
        transform.rotation = Quaternion.identity;
    }

    public void InitializeWheel()
    {
        _currentElementIndex = 0;
        _prevTeam = GetRandomTeam();
        SetFlagsOnStart();
        _wheelTurnedCount = 0;

        foreach (var element in _wheelElements)
        {
            CheckIfNeedToFillQueues();
            int indexForLeft = _indexesForLeftTeam.Peek();
            int indexForRight = _indexesForRightTeam.Peek();
            element.InitializeWheelElement(indexForLeft, indexForRight, out int indexForLeftQueueu, out int indexForRightQueue);
            element.SetAsUnused();
            RemoveIndexesToQueues(indexForLeftQueueu, indexForRightQueue);
        }
    }

    public void PlayRotationAnimation()
    {
        StartCoroutine(PlayAnimation());
    }

    public Queue<int> FillQueue(Teams team)
    {
        Queue<int> queue = new Queue<int>();
        var random = new System.Random();

        if (team == Teams.Left)
        {
            for (int i = 1; i <= _leftTeamElemtsAmount; i++)
            {
                int num = random.Next(_leftTeamElemtsAmount);
                while (queue.Contains(num))
                {
                    num = random.Next(_leftTeamElemtsAmount);
                }
                queue.Enqueue(num);
            }
        }
        else
        {
            for (int i = 1; i <= _rightTeamElemtsAmount; i++)
            {
                int num = random.Next(_rightTeamElemtsAmount);
                while (queue.Contains(num))
                {
                    num = random.Next(_rightTeamElemtsAmount);
                }
                queue.Enqueue(num);
            }
        }

        return queue;
    }

    public void UpdateInWheelElements(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _leftTeamElemtsAmount = leftTeam.Length;
        _rightTeamElemtsAmount = rightTeam.Length;
        _updateElementsAfterTurnsCount = _leftTeamElemtsAmount;
        CheckIfNeedToFillQueues();

        foreach (var element in _wheelElements)
        {
            element.SetPossibleElements(leftTeam, rightTeam);
        }
    }

    private void RemoveIndexesToQueues(int leftIndex, int rightIndex)
    {
        if (leftIndex != -1) _indexesForLeftTeam.Dequeue();
        if (rightIndex != -1) _indexesForRightTeam.Dequeue();
    }

    private void CheckIfNeedToFillQueues()
    {
        if (_indexesForLeftTeam.Count == 0)
        {
            _indexesForLeftTeam = FillQueue(Teams.Left);
        }
        if (_indexesForRightTeam.Count == 0)
        {
            _indexesForRightTeam = FillQueue(Teams.Right);
        }

        if (_indexesForLeftTeam.Count > _leftTeamElemtsAmount)
        {
            _indexesForLeftTeam = FillQueue(Teams.Left);
        }
        if (_indexesForRightTeam.Count > _rightTeamElemtsAmount)
        {
            _indexesForRightTeam = FillQueue(Teams.Right);
        }
    }

    private IEnumerator PlayAnimation()
    {
        _wheelTurnedCount++;
        if (_wheelTurnedCount >= _updateElementsAfterTurnsCount)
        {
            foreach (var element in _wheelElements)
            {
                CheckIfNeedToFillQueues();
                int indexForLeft = _indexesForLeftTeam.Peek();
                int indexForRight = _indexesForRightTeam.Peek();
                element.ChooseElementFromPossibles(indexForLeft, indexForRight, out int indexForLeftQueueu, out int indexForRightQueue);
                RemoveIndexesToQueues(indexForLeftQueueu, indexForRightQueue);
            }
            _wheelTurnedCount = 0;
        }

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
        UpdateOffScreenElementsFlags();
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

    private Teams GetRandomTeam()
    {
        var random = new System.Random();
        int a = random.Next(2);

        if (a == 0) return Teams.Left;
        else return Teams.Right;
    }
}
