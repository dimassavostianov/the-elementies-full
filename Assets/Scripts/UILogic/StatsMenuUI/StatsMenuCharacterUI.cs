using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatsMenuCharacterUI : MonoBehaviour
{
    [SerializeField] private int _curentIndex;
    [SerializeField] private Character[] _characters;
    [SerializeField] private StatsMenuUIController _uiController;

    private void OnEnable()
    {
        _curentIndex = 0;
        SetActiveCharacter();
    }

    public void IndexUp()
    {
        _curentIndex++;
        SetActiveCharacter();
    }

    public void IndexDown()
    {
        _curentIndex--;
        SetActiveCharacter();
    }

    private void SetActiveCharacter()
    {
        _curentIndex = Mathf.Clamp(_curentIndex, 0, 2);

        for (int i = 0; i < _characters.Length; i++)
        {
            if (i == _curentIndex)
            {
                _characters[i].gameObject.SetActive(true);
                _uiController.UpdateCharacterInfo(_characters[i]);
                continue;
            }

            _characters[i].gameObject.SetActive(false);
        }
    }
}
