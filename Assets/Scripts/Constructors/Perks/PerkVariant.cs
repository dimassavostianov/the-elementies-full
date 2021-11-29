using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New PerkVariant", menuName = "Constructors/Perks", order = 1)]
public class PerkVariant : ScriptableObject
{
    public PerkType PerkType;

    public Sprite Icon;
    public ParticleSystem Particles;

    public string Name;
    public int ApplyingDamage;
    public int ApplyingDefense;
    public int ApplyingEnergy;
    public int Level;
}
