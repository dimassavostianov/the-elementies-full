using System.Collections;
using UnityEngine;
using System;

public enum PerkType
{
    Attack,
    Defense,
    Passive
}

public enum AttackType
{
    Meele,
    Distance,
}

public enum DamageType
{
    One,
    All,
    None
}

public class Perk
{
    public string Name => _name;
    public int ApplyingDamage => _applyingDamage;
    public int ApplyingDefense => _applyingDefense;
    public int ApplyingEnergy => _applyingEnergy;
    public int Level => _level;
    public int Duration => _perkDuration;
    public bool IsTest => _isTest;

    public readonly PerkType Type;
    public readonly AttackType AttackType;
    public readonly DamageType DamageType;

    public readonly Sprite Icon;
    public readonly PerkVisualEffect VisualEffect;
    public readonly PerkDiscription Discription;

    [SerializeField] private string _name;
    [SerializeField] private int _applyingDamage;
    [SerializeField] private int _applyingDefense;
    [SerializeField] private int _applyingEnergy;
    [SerializeField] private int _level;
    private int _perkDuration;
    private bool _isTest;

    public Perk
        (
        PerkType type,
        AttackType attackType,
        DamageType damageType,
        Sprite icon,
        PerkVisualEffect visualEffect,
        PerkDiscription perkDiscription,
        string name,
        int damage,
        int defense,
        int energy, 
        int level,
        int duration,
        bool isTest)
        : this(damage, defense, energy)
    {
        Type = type;
        AttackType = attackType;
        DamageType = damageType;
        Icon = icon;
        VisualEffect = visualEffect;
        Discription = perkDiscription;
        _level = level;
        _name = name;
        _perkDuration = duration;
        _isTest = isTest;
    }

    private Perk(int damage, int defense, int energy)
    {
        if (damage >= 0) _applyingDamage = damage;
        else _applyingDamage = 0;

        if (defense >= 0) _applyingDefense = defense;
        else _applyingDefense = 0;

        if (energy >= 0) _applyingEnergy = energy;
        else _applyingEnergy = 0;
    }

    public void DecreaseDuration()
    {
        _perkDuration--;
    }

    public PerkVisualEffect ActivateVisualEffect(Vector3 startPos, Vector3 enemyPos)
    {
        var effectGameObj = GameObject.Instantiate(VisualEffect.gameObject);
        var effect = effectGameObj.GetComponent<PerkVisualEffect>();
        effect.StartEffect(startPos, enemyPos);

        return effect;
    }

    public static Perk operator +(Perk a, Perk b) => new Perk
        (a._applyingDamage + b._applyingDamage,
        a._applyingDefense + b._applyingDefense,
        a._applyingEnergy + b._applyingEnergy);

    public static Perk operator -(Perk a, Perk b) => new Perk
        (a._applyingDamage - b._applyingDamage,
        a._applyingDefense - b._applyingDefense,
        a._applyingEnergy - b._applyingEnergy);

    public static Perk operator *(Perk a, Perk b) => new Perk
        (a._applyingDamage * b._applyingDamage,
        a._applyingDefense * b._applyingDefense,
        a._applyingEnergy * b._applyingEnergy);

    public static Perk operator /(Perk a, Perk b) => new Perk
        (a._applyingDamage / b._applyingDamage,
        a._applyingDefense / b._applyingDefense,
        a._applyingEnergy / b._applyingEnergy);
}