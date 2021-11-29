using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterHPStaUI : MonoBehaviour
{
    [SerializeField] private GameObject _hpBar;
    [SerializeField] private GameObject _energyBar;
    [SerializeField] private float _speed;

    private int _maxHelth;
    private int _maxEnergy;

    public void SetMaxHealthAndEnergy(int health, int energy)
    {
        _maxHelth = health;
        _maxEnergy = energy;
    }

    public void UpdateHealth(int newHealth)
    {
        float percentsOfMax = (float)newHealth / (float)_maxHelth;

        if (percentsOfMax < 0) percentsOfMax = 0;

        StartCoroutine(UpdateBar(_hpBar, percentsOfMax));
    }
    public void UpdateEnergy(int newEnergy)
    {
        float percentsOfMax = (float)newEnergy / (float)_maxEnergy;

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
