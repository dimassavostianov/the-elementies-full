using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuController : MonoBehaviour
{
    [SerializeField] private GameObject _mainMenu;
    [SerializeField] private GameObject _battleMenu;
    [SerializeField] private GameObject _elementiesMenu;
    [SerializeField] private GameObject _victoryMenu;
    [SerializeField] private BackMusic _music;

    public void ShowBattleMenu()
    {
        _mainMenu.SetActive(false);
        _battleMenu.SetActive(true);
        _elementiesMenu.SetActive(false);
        _victoryMenu.SetActive(false);
        _music.PlayBattleMusic();
    }

    public void ShowElementiesMenu()
    {
        _mainMenu.SetActive(false);
        _battleMenu.SetActive(false);
        _elementiesMenu.SetActive(true);
        _victoryMenu.SetActive(false);
    }

    public void ShowMainMenu()
    {
        _mainMenu.SetActive(true);
        _battleMenu.SetActive(false);
        _elementiesMenu.SetActive(false);
        _victoryMenu.SetActive(false);
        _music.PlayPeaceMusic();
    }
}
