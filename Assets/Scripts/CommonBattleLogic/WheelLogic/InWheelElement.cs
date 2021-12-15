using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System;

public class InWheelElement : MonoBehaviour
{
    public bool IsOffscreen => _offScreenNotifier.CheckIfOffScreen();

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

    public void SetCurrentTeam(Teams team)
    {
        _currentTeam = team;

        if (_currentTeam == Teams.Right) _teamIndicator.SetActive(true);
        else _teamIndicator.SetActive(false);
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

    public void SetElement(ElementType elementType)
    {
        Sprite sprite;

        sprite = _elementsDictionary.GetElementIconByType(elementType);

        _image.sprite = sprite;
        _currentElementType = elementType;
        SetAsUnused();
    }
}
