using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[CreateAssetMenu(fileName = "New ElementDictionary", menuName = "Tools/Elements", order = 2)]
public class ElementsDictionary : ScriptableObject
{
    [SerializeField] private Sprite _darkness;
    [SerializeField] private Sprite _electicity;
    [SerializeField] private Sprite _fire;
    [SerializeField] private Sprite _grass;
    [SerializeField] private Sprite _light;
    [SerializeField] private Sprite _slime;
    [SerializeField] private Sprite _time;
    [SerializeField] private Sprite _water;
    [SerializeField] private Sprite _wind;

    private Dictionary<ElementType, Sprite> _elementIconPairs;

    public void InitializeDictionary()
    {
        _elementIconPairs = new Dictionary<ElementType, Sprite>();

        _elementIconPairs.Add(ElementType.Dark, _darkness);
        _elementIconPairs.Add(ElementType.Electricity, _electicity);
        _elementIconPairs.Add(ElementType.Fire, _fire);
        _elementIconPairs.Add(ElementType.Grass, _grass);
        _elementIconPairs.Add(ElementType.Light, _light);
        _elementIconPairs.Add(ElementType.Slime, _slime);
        _elementIconPairs.Add(ElementType.Time, _time);
        _elementIconPairs.Add(ElementType.Water, _water);
        _elementIconPairs.Add(ElementType.Wind, _wind);
    }

    public Sprite GetElementIconByType(ElementType type)
    {
        _elementIconPairs.TryGetValue(type, out var sprite);

        return sprite;
    }
}
