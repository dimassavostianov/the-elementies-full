using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System;

public class InWheelElement : MonoBehaviour
{
    [SerializeField] private Image _image;
    [SerializeField] private ObjectOffScreenNotifier _offScreenNotifier;
    [SerializeField] private List<ElementType> _possibleElementsLeftTeam;
    [SerializeField] private List<ElementType> _possibleElementsRightTeam;
    [SerializeField] private GameObject _teamIndicator;
    [SerializeField] private ElementsDictionary _elementsDictionary;

    private ElementType _currentElementType;
    private Teams _currentTeam;

    private void OnEnable()
    {
        _elementsDictionary.InitializeDictionary();
    }

    public void InitializeWheelElement(int indexForLeft, int indexForRight, out int indexForLeftQueue, out int indexForRightQueue)
    {
        ChooseElementFromPossiblesOnEnable(indexForLeft, indexForRight, out indexForLeftQueue, out indexForRightQueue);
    }

    public void SetCurrentTeam(Teams team)
    {
        _currentTeam = team;

        if (_currentTeam == Teams.Right) _teamIndicator.SetActive(true);
        else _teamIndicator.SetActive(false);
    }

    public void SetPossibleElements(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _possibleElementsLeftTeam = new List<ElementType>();
        _possibleElementsRightTeam = new List<ElementType>();

        _possibleElementsLeftTeam.AddRange(leftTeam);
        _possibleElementsRightTeam.AddRange(rightTeam);
    }

    public ElementType GetCurrentElementType()
    {
        return _currentElementType;
    }

    public Teams GetCurrentTeam()
    {
        return _currentTeam;
    }

    public void SetAsUsed()
    {
        Color currentColor = _image.color;

        float r = currentColor.r;
        float g = currentColor.g;
        float b = currentColor.b;

        Color shadedColor = new Color(r, g, b, 0.5f);

        _image.color = shadedColor;
    }

    public void SetAsUnused()
    {
        Color currentColor = _image.color;

        float r = currentColor.r;
        float g = currentColor.g;
        float b = currentColor.b;

        Color unshadedColor = new Color(r, g, b, 1f);

        _image.color = unshadedColor;
    }

    public void ChooseElementFromPossibles(int indexForLeft, int indexForRight, out int indexForLeftQueue, out int indexForRightQueue)
    {
        indexForRightQueue = -1;
        indexForLeftQueue = -1;

        if (_offScreenNotifier.CheckIfOffScreen() == true)
        {
            Sprite sprite;

            if (_currentTeam == Teams.Right)
            {
                try
                {
                    _currentElementType = _possibleElementsRightTeam[indexForRight];
                    indexForRightQueue = indexForRight;
                }
                catch (Exception ex)
                {
                    _currentElementType = _possibleElementsRightTeam[0];
                    indexForRightQueue = indexForRight;
                }

                sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
            }
            else
            {
                try
                {
                    _currentElementType = _possibleElementsLeftTeam[indexForLeft];
                    indexForLeftQueue = indexForLeft;
                }
                catch (Exception ex)
                {
                    _currentElementType = _possibleElementsLeftTeam[0];
                    indexForLeftQueue = indexForLeft;
                }

                sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
            }

            _image.sprite = sprite;
            SetAsUnused();
        }
    }

    private bool CheckIfNeedChangeElement(Teams team)
    {
        if (team == Teams.Left)
        {
            bool exist = _possibleElementsLeftTeam.Any(t => t == _currentElementType);
            return !exist;
        }
        else
        {
            bool exist = _possibleElementsRightTeam.Any(t => t == _currentElementType);
            return !exist;
        }
    }

    private void ChooseElementFromPossiblesOnEnable(int indexForLeft, int indexForRight, out int indexForLeftQueue, out int indexForRightQueue)
    {
        indexForRightQueue = -1;
        indexForLeftQueue = -1;

        Sprite sprite;

        if (_currentTeam == Teams.Right)
        {
            _currentElementType = _possibleElementsRightTeam[indexForRight];
            indexForLeftQueue = indexForLeft;

            sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
        }
        else
        {
            _currentElementType = _possibleElementsLeftTeam[indexForLeft];
            indexForRightQueue = indexForRight;

            sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
        }

        _image.sprite = sprite;
    }
}
