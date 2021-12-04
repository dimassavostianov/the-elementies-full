using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public enum PerkType
{
    AttackOne,
    AttackAll,
    Defense,
    Passive
}

public enum AttackType
{
    Meele,
    Distance,
}

public class Perk
{
    public string Name => _name;
    public int ApplyingDamage => _applyingDamage;
    public int ApplyingDefense => _applyingDefense;
    public int ApplyingEnergy => _applyingEnergy;
    public int Level => _level;
    public bool IsTest => _isTest;

    public readonly PerkType Type;
    public readonly AttackType AttackType;

    public readonly Sprite Icon;
    public readonly PerkVisualEffect VisualEffect;
    public readonly PerkDiscription Discription;

    [SerializeField] private string _name;
    [SerializeField] private int _applyingDamage;
    [SerializeField] private int _applyingDefense;
    [SerializeField] private int _applyingEnergy;
    [SerializeField] private int _level;
    private bool _isTest;

    public Perk(PerkType type,
        AttackType attackType,
        Sprite icon,
        PerkVisualEffect visualEffect,
        PerkDiscription perkDiscription,
        string name,
        int damage,
        int defense,
        int energy, 
        int level,
        bool isTest)
        : this(damage, defense, energy)
    {
        Type = type;
        AttackType = attackType;
        Icon = icon;
        VisualEffect = visualEffect;
        Discription = perkDiscription;
        _level = level;
        _name = name;
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
