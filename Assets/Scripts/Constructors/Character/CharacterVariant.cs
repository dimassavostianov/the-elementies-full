using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New CharacterVariant", menuName = "Constructors/Characters", order = 1)]
public class CharacterVariant : ScriptableObject
{
    public AnimationClip Idle;
    public AnimationClip Attack;
    public AnimationClip TakingDamage;
    public AnimationClip UseAbility;
    public AnimationClip Death;

    public Sprite Horns;
    public Sprite Eyes;
    public Sprite Mouth;
    public Sprite Ears;
    public Sprite Tail;
    public Sprite Body;

    public PerkVariant AttackPerk1;
    public PerkVariant AttackPerk2;
    public PerkVariant DefensePerk;
    public PerkVariant PassivePerk;

    public CharacterRarity Rarity;
    public ElementType ElementType;

    public int Health;
    public int Damage;
    public int Defense;
    public int Power;

    public int Level;
}
