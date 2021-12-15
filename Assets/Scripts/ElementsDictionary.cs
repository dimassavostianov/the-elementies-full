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
        _elementIconPairs = new Dictionary<ElementType, Sprite>
        {
            { ElementType.Dark, _darkness },
            { ElementType.Electricity, _electicity },
            { ElementType.Fire, _fire },
            { ElementType.Grass, _grass },
            { ElementType.Light, _light },
            { ElementType.Slime, _slime },
            { ElementType.Time, _time },
            { ElementType.Water, _water },
            { ElementType.Wind, _wind }
        };
    }

    public Sprite GetElementIconByType(ElementType type)
    {
        _elementIconPairs.TryGetValue(type, out var sprite);

        return sprite;
    }
}
