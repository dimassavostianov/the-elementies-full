using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New PerkVariant", menuName = "Constructors/Perks", order = 1)]
public class PerkVariant : ScriptableObject
{
    public PerkType PerkType;
    public AttackType AttackType;

    public Sprite Icon;
    public PerkVisualEffect VisualEffect;
    public PerkDiscription Discription;

    public string Name;
    public int ApplyingDamage;
    public int ApplyingDefense;
    public int ApplyingEnergy;
    public int Level;
    public bool IsTest;
}
