using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SkillWheelUI : MonoBehaviour
{
    public PerkVariant PerkVariant;

    [SerializeField] private SkillButton _centralSkill;
    [SerializeField] private GameObject _additionalInfo;
    [SerializeField] private InWheelSkillButton[] _skillButtons;
    [SerializeField] private SkillButton[] _skillsInUse;
    [SerializeField] private SkillButton[] _skillsNoInUse;
    [SerializeField] private Image _background;
    [SerializeField] private Sprite _blueBackframe;
    [SerializeField] private Sprite _greenBackframe;
    [SerializeField] private GameObject _skillWheelBack;
    [SerializeField] private ShadePanel _shadePanel;
    [SerializeField] private GameObject _backButton;
    [SerializeField] private Image _visualDescription;
    [SerializeField] private TextMeshProUGUI _descriptionText;
    [SerializeField] private TextMeshProUGUI _perkTitle;
    [SerializeField] private float _openAnimationSpeed;
    [SerializeField] private float _wheelRotationSpeed;
    
    private const float _angleOffset = 45f;

    private void OnEnable()
    {
        _skillWheelBack.transform.rotation = Quaternion.identity;
        _additionalInfo.SetActive(true);
        _backButton.SetActive(true);
        gameObject.transform.localScale = new Vector3(0, 0, 1);
        _shadePanel.gameObject.SetActive(true);
        _shadePanel.PlayAnim();
        StartCoroutine(OpenAnimation());
        SetSkillsNoInUse();
    }

    public void SetSkillsInUse(Perk[] perk)
    {
        for (int i = 0; i < _skillsInUse.Length; i++)
        {
            if (i == 0)
            {
                _centralSkill.SetPerk(perk[i]);
                UpdateDescriptionInfo(perk[i]);
            }

            _skillsInUse[i].SetPerk(perk[i]);
        }

        for (int i = 0; i < _skillButtons.Length; i++)
        {
            if (i == 0)
            {
                _skillButtons[i].SetBackframe(_blueBackframe);
            }

            _skillButtons[i].ButtonClicked += OnSkillButtonClicked;
            _skillButtons[i].Index = i;
        }
    }

    public void UpdateDescriptionInfo(Perk perk)
    {
        _visualDescription.sprite = perk.Discription.VisualDescription;
        _descriptionText.text = perk.Discription.Description;
        _perkTitle.text = perk.Name;
    }

    private void SetSkillsNoInUse()
    {
        foreach (var button in _skillsNoInUse)
            button.SetPerk(PerkFactory.CreatePerkFormTemplate(PerkVariant));
    }

    private IEnumerator OpenAnimation()
    {
        float xScale = gameObject.transform.localScale.x;
        float yScale = gameObject.transform.localScale.y;

        while (xScale < 1 && yScale < 1)
        {
            xScale += Time.deltaTime * _openAnimationSpeed;
            yScale += Time.deltaTime * _openAnimationSpeed;

            gameObject.transform.localScale = new Vector3(xScale, yScale, 1);

            yield return new WaitForEndOfFrame();
        }
    }

    private IEnumerator CloseAnimation()
    {
        float xScale = gameObject.transform.localScale.x;
        float yScale = gameObject.transform.localScale.y;

        while (xScale > 0 && yScale > 0)
        {
            xScale -= Time.deltaTime * _openAnimationSpeed;
            yScale -= Time.deltaTime * _openAnimationSpeed;

            gameObject.transform.localScale = new Vector3(xScale, yScale, 1);

            yield return new WaitForEndOfFrame();
        }

        gameObject.SetActive(false);
    }

    private void OnSkillButtonClicked(int index)
    {
        StartCoroutine(RotationAnimation(index));
    }

    private IEnumerator RotationAnimation(int index)
    {
        float turn = CalculateFastestRotationDegrees(index);
        float addirionalRot = 0;
        float startRotation = _skillWheelBack.transform.rotation.eulerAngles.z;

        while (Mathf.Abs(addirionalRot) < Mathf.Abs(turn))
        {
            addirionalRot += _wheelRotationSpeed * Time.deltaTime * Mathf.Clamp(turn, -1, 1);
            Quaternion toRot = Quaternion.AngleAxis(startRotation + addirionalRot, Vector3.forward);
            _skillWheelBack.transform.rotation = toRot;

            yield return new WaitForEndOfFrame();
        }

        _centralSkill.SetPerk(_skillButtons[index].SkillButton.GetPerk());
        UpdateDescriptionInfo(_skillButtons[index].SkillButton.GetPerk());
    }

    private float CalculateFastestRotationDegrees(int index)
    {
        float currentRotation = Mathf.Deg2Rad * _skillWheelBack.transform.rotation.eulerAngles.z;
        float indexRotation = Mathf.Deg2Rad * _angleOffset * index;

        Vector2 curentRotVec = new Vector2(Mathf.Cos(currentRotation), Mathf.Sin(currentRotation));
        Vector2 indexRotVec = new Vector2(Mathf.Cos(indexRotation), Mathf.Sin(indexRotation));

        float turn = Vector2.SignedAngle(curentRotVec, indexRotVec);

        return turn;
    }

    public void Deactivate()
    {
        _shadePanel.PlayBackAnim();
        _backButton.SetActive(false);
        _additionalInfo.SetActive(false);
        if (gameObject.activeSelf) StartCoroutine(CloseAnimation());
    }

    private void OnDisable()
    {
        for (int i = 0; i < _skillButtons.Length; i++)
        {
            _skillButtons[i].ButtonClicked -= OnSkillButtonClicked;
        }
    }
}
