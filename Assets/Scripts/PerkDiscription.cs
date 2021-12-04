using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New PerkDiscription", menuName = "Constructors/PerkDiscription")]
public class PerkDiscription : ScriptableObject
{
    [TextArea] public string Description;
    public Sprite VisualDescription;
}
