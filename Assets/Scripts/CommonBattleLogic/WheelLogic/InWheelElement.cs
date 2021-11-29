using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

    public void SetCurrentTeam(Teams team)
    {
        _currentTeam = team;

        if (_currentTeam == Teams.Right) _teamIndicator.SetActive(true);
        else _teamIndicator.SetActive(false);
    }

    public void SetPossibleElements(ElementType[] leftTeam, ElementType[] rightTeam)
    {
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

    private void SetAsUnused()
    {
        Color currentColor = _image.color;

        float r = currentColor.r;
        float g = currentColor.g;
        float b = currentColor.b;

        Color unshadedColor = new Color(r, g, b, 1f);

        _image.color = unshadedColor;
    }

    public void ChooseElementFromPossibles()
    {
        Sprite sprite;

        if (_currentTeam == Teams.Right)
        {
            var random = new System.Random();
            int randomIndex = random.Next(_possibleElementsRightTeam.Count);

            _currentElementType = _possibleElementsRightTeam[randomIndex];

            sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
        }
        else
        {
            var random = new System.Random();
            int randomIndex = random.Next(_possibleElementsLeftTeam.Count);

            _currentElementType = _possibleElementsLeftTeam[randomIndex];

            sprite = _elementsDictionary.GetElementIconByType(_currentElementType);
        }

        _image.sprite = sprite;
        SetAsUnused();
    }
}
