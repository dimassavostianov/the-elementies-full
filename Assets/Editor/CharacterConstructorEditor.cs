using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(CharacterConstructor))]
public class CharacterConstructorEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        CharacterConstructor constructor = (CharacterConstructor)target;

        if (GUILayout.Button("Construct Variant"))
        {
            constructor.ConstructCharacter();
        }

        if (GUILayout.Button("Save Variant As Prefab"))
        {
            constructor.SaveVariantAsPrefab();
        }
    }
}
