using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CharacterHPStaUI : MonoBehaviour
{
    [SerializeField] private GameObject _hpBar;
    [SerializeField] private GameObject _energyBar;
    [SerializeField] private TextMeshPro _hpText;
    [SerializeField] private TextMeshPro _energyText;
    [SerializeField] private SpriteRenderer _elementSprite;
    [SerializeField] private Animator _hpAnim;
    [SerializeField] private Animator _energyAnim;
    [SerializeField] private TextMeshPro _hpAnimText;
    [SerializeField] private TextMeshPro _energyAnimText;
    [SerializeField] private float _speed;

    private int _maxHealth;
    private int _maxEnergy;

    private int _storedHealth;
    private int _storedEnergy;

    private const string _hpTrigger = "Hp";
    private const string _energyTrigger = "Energy";

    public void SetPRoperties(int health, int energy, Sprite elementIcon)
    {
        _maxHealth = health;
        _maxEnergy = energy;
        _storedHealth = health;
        _storedEnergy = energy;
        _elementSprite.sprite = elementIcon;
        _hpText.text = health.ToString();
        _energyText.text = energy.ToString();
    }

    public void UpdateHealth(int newHealth)
    {
        float percentsOfMax = (float)newHealth / (float)_maxHealth;

        if (newHealth < 0) _hpText.text = "0";
        else _hpText.text = newHealth.ToString();

        PlayAnimationHp(_storedHealth - newHealth);

        if (percentsOfMax < 0) percentsOfMax = 0;

        StartCoroutine(UpdateBar(_hpBar, percentsOfMax));
        _storedHealth = newHealth;
    }
    public void UpdateEnergy(int newEnergy)
    {
        float percentsOfMax = (float)newEnergy / (float)_maxEnergy;

        if (newEnergy < 0) _energyText.text = "0";
        else _energyText.text = newEnergy.ToString();

        PlayAnimationEnergy(_storedEnergy - newEnergy);

        if (percentsOfMax < 0) percentsOfMax = 0;

        StartCoroutine(UpdateBar(_energyBar, percentsOfMax));
        _storedEnergy = newEnergy;
    }

    private void PlayAnimationHp(int value)
    {
        _hpAnim.gameObject.SetActive(true);
        _hpAnimText.text = "-" + value;
        _hpAnim.SetTrigger(_hpTrigger);
    }

    private void PlayAnimationEnergy(int value)
    {
        _energyAnim.gameObject.SetActive(true);
        _energyAnimText.text = "-" + value;
        _energyAnim.SetTrigger(_energyTrigger);
    }

    private IEnumerator UpdateBar(GameObject bar, float value)
    {
        while (bar.transform.localScale.x > value)
        {
            float xSize = bar.transform.localScale.x;
            xSize -= _speed * Time.deltaTime;
            bar.transform.localScale = new Vector3(xSize, 1f, 1f);

            yield return new WaitForEndOfFrame();
        }
    }
}
