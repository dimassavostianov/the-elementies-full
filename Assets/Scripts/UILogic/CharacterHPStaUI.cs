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
    [SerializeField] private float _speed;

    private int _maxHelth;
    private int _maxEnergy;
    private Vector3 _startPosition;

    public void SetPRoperties(int health, int energy, Sprite elementIcon)
    {
        _maxHelth = health;
        _maxEnergy = energy;
        _elementSprite.sprite = elementIcon;
        _hpText.text = health.ToString();
        _energyText.text = energy.ToString();
    }

    public void UpdateHealth(int newHealth)
    {
        float percentsOfMax = (float)newHealth / (float)_maxHelth;

        if (newHealth < 0) _hpText.text = "0";
        else _hpText.text = newHealth.ToString();

        if (percentsOfMax < 0) percentsOfMax = 0;

        StartCoroutine(UpdateBar(_hpBar, percentsOfMax));
    }
    public void UpdateEnergy(int newEnergy)
    {
        float percentsOfMax = (float)newEnergy / (float)_maxEnergy;

        if (newEnergy < 0) _energyText.text = "0";
        else _energyText.text = newEnergy.ToString();

        if (percentsOfMax < 0) percentsOfMax = 0;

        StartCoroutine(UpdateBar(_energyBar, percentsOfMax));
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
