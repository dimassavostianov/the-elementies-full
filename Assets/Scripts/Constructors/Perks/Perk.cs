using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public enum PerkType
{
    Attack,
    Defense,
    Passive
}

//ÏÅÐÂÀ ÈÒÅÐÀÖÈß ÒÎËÜÊÎ
[Serializable]
public class Perk
{
    public string Name => _name;
    public int ApplyingDamage => _applyingDamage;
    public int ApplyingDefense => _applyingDefense;
    public int ApplyingEnergy => _applyingEnergy;
    public int Level => _level;

    public /*readonly*/ PerkType Type;

    public /*readonly*/ Sprite Icon;
    public /*readonly*/ ParticleSystem Particles;

    [SerializeField] private string _name;
    [SerializeField] private int _applyingDamage;
    [SerializeField] private int _applyingDefense;
    [SerializeField] private int _applyingEnergy;
    [SerializeField] private int _level;

    public Perk(PerkType type,
        Sprite icon,
        ParticleSystem particles,
        string name,
        int damage,
        int defense,
        int energy, 
        int level)
        : this(damage, defense, energy)
    {
        Type = type;
        Icon = icon;
        Particles = particles;
        _level = level;
        _name = name;
    }

    private Perk(int damage, int defense, int energy)
    {
        if (damage > 0) _applyingDamage = damage;
        else _applyingDamage = 1;

        if (defense > 0) _applyingDefense = defense;
        else _applyingDefense = 1;

        if (energy > 0) _applyingEnergy = energy;
        else _applyingEnergy = 1;
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
