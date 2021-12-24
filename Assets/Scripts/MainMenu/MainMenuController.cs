using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuController : MonoBehaviour
{
    [SerializeField] private GameObject _mainMenu;
    [SerializeField] private GameObject _battleMenu;
    [SerializeField] private GameObject _elementiesMenu;
    [SerializeField] private VictoryMenu _victoryMenu;
    [SerializeField] private SceneTransitionShadePanel _transitionShadePanel;
    [SerializeField] private BackMusic _music;
    [SerializeField] private ParticleSystem _snowParticle;

    private void Start()
    {
        _snowParticle.Play();
    }

    public void ShowBattleMenu()
    {
        StartCoroutine(ShowBattleMenuAfterShdingAnimation());
    }

    public void ShowElementiesMenu()
    {
        StartCoroutine(ShowElementiesMenuAfterShdingAnimation());
    }

    public void ShowMainMenu()
    {
        StartCoroutine(ShowMainMenuAfterShdingAnimation());
    }

    public void ShowLooseScren(Character[] characters)
    {
        StartCoroutine(ShowLooseMenuAfterShdingAnimation(characters));
    }

    public void ShowWinScreen(Character[] characters)
    {
        StartCoroutine(ShowWinMenuAfterShdingAnimation(characters));
    }

    private IEnumerator ShowBattleMenuAfterShdingAnimation()
    {
        PlayShadeAnimation();

        yield return new WaitUntil(() => _transitionShadePanel.IsShadeCompletly == true);

        _mainMenu.SetActive(false);
        _battleMenu.SetActive(true);
        _elementiesMenu.SetActive(false);
        _victoryMenu.gameObject.SetActive(false);
        _music.PlayBattleMusic();
    }

    private IEnumerator ShowElementiesMenuAfterShdingAnimation()
    {
        PlayShadeAnimation();

        yield return new WaitUntil(() => _transitionShadePanel.IsShadeCompletly == true);

        _mainMenu.SetActive(false);
        _battleMenu.SetActive(false);
        _elementiesMenu.SetActive(true);
        _victoryMenu.gameObject.SetActive(false);
    }

    private IEnumerator ShowMainMenuAfterShdingAnimation()
    {
        PlayShadeAnimation();

        yield return new WaitUntil(() => _transitionShadePanel.IsShadeCompletly == true);

        _mainMenu.SetActive(true);
        _battleMenu.SetActive(false);
        _elementiesMenu.SetActive(false);
        _victoryMenu.gameObject.SetActive(false);
        _music.PlayPeaceMusic();
    }

    private IEnumerator ShowLooseMenuAfterShdingAnimation(Character[] characters)
    {
        PlayShadeAnimation();

        yield return new WaitUntil(() => _transitionShadePanel.IsShadeCompletly == true);

        _victoryMenu.gameObject.SetActive(true);
        _victoryMenu.ShowLoose(characters);
        _battleMenu.SetActive(false);
    }

    private IEnumerator ShowWinMenuAfterShdingAnimation(Character[] characters)
    {
        PlayShadeAnimation();

        yield return new WaitUntil(() => _transitionShadePanel.IsShadeCompletly == true);

        _victoryMenu.gameObject.SetActive(true);
        _victoryMenu.ShowVictory(characters);
        _battleMenu.SetActive(false);
    }

    private void PlayShadeAnimation()
    {
        _transitionShadePanel.gameObject.SetActive(true);
        _transitionShadePanel.PlaySceneTransitionAniamtion();
    }
}
