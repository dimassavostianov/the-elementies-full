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
    [SerializeField] private AbstractSkillButton[] _skillButtons;
    [SerializeField] private SkillWheelUI _skillWheel;
    [SerializeField] private Button _allSkillsButton;
    [SerializeField] private VictoryMenu _victoryMenu;
    [SerializeField] private Button _endTurn;
    [SerializeField] private GameObject _comeSoon;
    [SerializeField] private Button _backToMenu;
    [SerializeField] private MainMenuController _mainMenu;
    [SerializeField] private AudioSource _buttonAudio;

    public void Initialize(BattleStateMachine battleStateMachine)
    {
        _comeSoon.SetActive(false);
        _battleWheel.InitializeWheel();
        _battleWheel.ElementChoosed += battleStateMachine.InTurnStart;

        foreach (var button in _skillButtons)
        {
            button.SkillButtonClicked += SetSkillUsed;
            button.SetAudioSource(_buttonAudio);
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
        DisableEndTurnButton();
    }

    public void EnableBackToMenu()
    {
        _backToMenu.interactable = true;
    }

    public void DisableBackToMenu()
    {
        _backToMenu.interactable = false;
    }

    public void OpenMainMenu()
    {
        BackToMenuPressed?.Invoke();
        _mainMenu.ShowMainMenu();
    }


    public void EnableEndTurnButton()
    {
        _endTurn.interactable = true;
    }

    public void DisableEndTurnButton()
    {
        _endTurn.interactable = false;
    }

    public void DisableAllSkillButton()
    {
        _allSkillsButton.interactable = false;
    }

    public void EnableAllSkillButton()
    {
        _allSkillsButton.interactable = true;
    }

    public void StartWheelAnimation()
    {
        _battleWheel.PlayRotationAnimation();
    }

    public void SetSkillButtonsInfo(Perk[] perks, bool[] canUsePerk)
    {
        for (int i = 0; i < _skillButtons.Length; i++)
        {
            _skillButtons[i].SetPerk(perks[i], canUsePerk[i]);
        }
    }

    public void ResetSkillButtonInfo()
    {
        foreach (var button in _skillButtons)
        {
            button.ResetButtonInfo();
        }
    }

    public void MakeSkillButtonsNonInteractable()
    {
        foreach (var button in _skillButtons)
            button.MakeButtonNonInteractable();
    }

    public void UpdateBattleWheel(ElementType[] leftTeam, ElementType[] rightTeam)
    {
        _battleWheel.UpdateInWheelElements(leftTeam, rightTeam);
    }

    private void SetSkillUsed(Perk perk)
    {
        SkillUsed?.Invoke(perk);
    }

    public void ShowLooseScren(Character[] characters)
    {
        _mainMenu.ShowLooseScren(characters);
    }

    public void ShowWinScreen(Character[] characters)
    {
        _mainMenu.ShowWinScreen(characters);
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
