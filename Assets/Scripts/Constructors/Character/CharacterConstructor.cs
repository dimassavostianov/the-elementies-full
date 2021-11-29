using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

[ExecuteInEditMode]
[RequireComponent(typeof(Character), typeof(CharacterAnimationController))]
public class CharacterConstructor : MonoBehaviour
{
    [SerializeField] private CharacterVariant _variant;
    [SerializeField] private CharacterAnimationController _animationController;
    [SerializeField] private Character _character;

    [SerializeField] private SpriteRenderer _horns;
    [SerializeField] private SpriteRenderer _eyes;
    [SerializeField] private SpriteRenderer _mouth;
    [SerializeField] private SpriteRenderer _ears;
    [SerializeField] private SpriteRenderer _tail;
    [SerializeField] private SpriteRenderer _body;

    [SerializeField] private Perk _attackPerk1;
    [SerializeField] private Perk _attackPerk2;
    [SerializeField] private Perk _defensePerk;
    [SerializeField] private Perk _passivePerk;

    [SerializeField] private string _nameForVariant;

    private const string _path = "Assets/Prefabs/";

    public void ConstructCharacter()
    {
        _horns.sprite = _variant.Horns;
        _eyes.sprite = _variant.Eyes;
        _mouth.sprite = _variant.Mouth;
        _ears.sprite = _variant.Ears;
        _tail.sprite = _variant.Tail;
        _body.sprite = _variant.Body;

        _attackPerk1 = PerkFactory.CreatePerkFormTemplate(_variant.AttackPerk1);
        _attackPerk2 = PerkFactory.CreatePerkFormTemplate(_variant.AttackPerk2);
        _defensePerk = PerkFactory.CreatePerkFormTemplate(_variant.DefensePerk);
        _passivePerk = PerkFactory.CreatePerkFormTemplate(_variant.PassivePerk);

        _character.SetFieldsByCharacterContructor(
            _variant.Rarity,
            _variant.ElementType,
            _attackPerk1,
            _attackPerk2,
            _defensePerk,
            _passivePerk,
            _variant.Health,
            _variant.Damage,
            _variant.Defense,
            _variant.Power,
            _variant.Level);
    }

    public void SaveVariantAsPrefab()
    {
        try
        {
            if (String.IsNullOrEmpty(_nameForVariant))
            {
                throw new Exception("Set name for variant");
            }
            if (_variant = null)
            {
                throw new Exception("Set Character Variant");
            }

            var newPrefab = gameObject;
            string localPath = _path + _nameForVariant + ".prefab";
            localPath = AssetDatabase.GenerateUniqueAssetPath(localPath);
            PrefabUtility.SaveAsPrefabAsset(newPrefab, localPath, out bool success);

            if (success == true)
            {
                Debug.Log("Variant saved successful");
            }
            else
            {
                Debug.Log("Variant does not saved");
            }
        }
        catch (Exception ex)
        {
            Debug.LogError(ex.Message);
        }
    }
}
