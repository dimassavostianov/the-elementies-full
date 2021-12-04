using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class BattleUIController : MonoBehaviour
{
    public event Action<Perk> SkillUsed;
    public event Action EndTurnUsed;
    public event Action BackToMenuPressed;

    public ElementType ChoosedType => _battleWheel.ChoosedElement;

    [SerializeField] private BattleWheel _battleWheel;
    [SerializeField] private SkillButton[] _skillButtons;
    [SerializeField] private SkillWheelUI _skillWheel;
    [SerializeField] private GameObject _battleMenu;
    [SerializeField] private GameObject _allSkillsButton;
    [SerializeField] private VictoryMenu _victoryMenu;
    [SerializeField] private Button _endTurn;
    [SerializeField] private GameObject _comeSoon;
    [SerializeField] private Button _backToMenu;
    [SerializeField] private MainMenuController _mainMenu;

    public void Initialize(BattleStateMachine battleStateMachine)
    {
        _comeSoon.SetActive(false);
        _battleWheel.InitializeWheel();
        _battleWheel.ElementChoosed += battleStateMachine.InTurnStart;

        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked += SetSkillUsed;
            button.ResetButtonInfo();
        }
    }

    public void ShowSkillWheel()
    {
        _skillWheel.gameObject.SetActive(true);
        List<Perk> perks = new List<Perk>();
        foreach (var button in _skillButtons)
        {
            perks.Add(button.GetPerk());
        }
        _skillWheel.SetSkillsInUse(perks.ToArray());
    }

    public void EndTurn()
    {
        EndTurnUsed?.Invoke();
        _endTurn.enabled = false;
    }

    public void MakeButtonsNonInteractable()
    {
        foreach (var button in _skillButtons)
            button._interactable = false;
    }

    public void EnableBackToMenu()
    {
        _backToMenu.enabled = true;
    }

    public void DisableBackToMenu()
    {
        _backToMenu.enabled = false;
    }

    public void OpenMainMenu()
    {
        BackToMenuPressed?.Invoke();
        _mainMenu.ShowMainMenu();
    }


    public void EnableTurnButton()
    {
        _endTurn.enabled = true;
    }

    public void DisableAllSkillButton()
    {
        _allSkillsButton.GetComponent<Button>().enabled = false;
    }

    public void EnableAllSkillButton()
    {
        _allSkillsButton.GetComponent<Button>().enabled = true;
    }

    public void StartWheelAnimation()
    {
        _battleWheel.PlayRotationAnimation();
    }

    public void SetSkillButtonsInfo(Perk[] perks)
    {
        for (int i = 0; i < _skillButtons.Length; i++)
        {
            _skillButtons[i].SetPerk(perks[i]);
        }
    }

    public void ResetSkillButtonInfo()
    {
        foreach (var button in _skillButtons)
        {
            button.ResetButtonInfo();
        }
    }

    public void UpdateBattleWheel(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _battleWheel.UpdateInWheelElements(leftTeam, rightTeam);
    }

    public void SetSkillsNotAvaliable(int index)
    {
        _skillButtons[index].SetUnActive();
    }

    public void SetSkillsAvaliable()
    {
        foreach (var skill in _skillButtons)
            skill.SetUsable();
    }

    private void SetSkillUsed(Perk perk)
    {
        SkillUsed?.Invoke(perk);
    }

    public void ShowLooseScren(Character[] characters)
    {
        _victoryMenu.gameObject.SetActive(true);
        _victoryMenu.ShowLoose(characters);
        _battleMenu.SetActive(false);
    }

    public void ShowWinScreen(Character[] characters)
    {
        _victoryMenu.gameObject.SetActive(true);
        _victoryMenu.ShowVictory(characters);
        _battleMenu.SetActive(false);
    }

    public void ShowSkillsWheelUI()
    {
        _skillWheel.gameObject.SetActive(true);
    }

    public void Deinitialize(BattleStateMachine battleStateMachine)
    {
        _battleWheel.ElementChoosed -= battleStateMachine.InTurnStart;

        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked -= SetSkillUsed;
        }
    }
}
