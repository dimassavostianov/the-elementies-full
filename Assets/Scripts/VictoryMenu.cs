using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class VictoryMenu : MonoBehaviour
{
    [SerializeField] private Transform[] _positionsForCharacters;
    [SerializeField] private TextMeshProUGUI _victoryText;

    private GameObject[] _characters = new GameObject[3];

    public void ShowVictory(Character[] characters)
    {
        for (int i = 0; i < characters.Length; i++)
        {
            var charObj = Instantiate(characters[i].gameObject);
            charObj.transform.position = new Vector3(_positionsForCharacters[i].position.x, _positionsForCharacters[i].position.y, 0);
            _characters[i] = charObj;
        }

        _victoryText.text = "VICTORY!";
    }

    public void ShowLoose(Character[] characters)
    {
        for (int i = 0; i < characters.Length; i++)
        {
            var charObj = Instantiate(characters[i].gameObject);
            charObj.transform.position = new Vector3(_positionsForCharacters[i].position.x, _positionsForCharacters[i].position.y, 0);
            _characters[i] = charObj;
        }

        _victoryText.text = "YOU LOST!";
    }

    public void OnDisable()
    {
        foreach (var obj in _characters) Destroy(obj);
    }
}
