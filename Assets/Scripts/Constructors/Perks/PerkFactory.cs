using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PerkFactory
{
    public static Perk CreatePerkFormTemplate (PerkVariant perkVariant)
    {
        var perk = new Perk(perkVariant.PerkType,
            perkVariant.Icon,
            perkVariant.Particles,
            perkVariant.Name,
            perkVariant.ApplyingDamage,
            perkVariant.ApplyingDefense,
            perkVariant.ApplyingEnergy,
            perkVariant.Level);

        return perk;
    }
}
