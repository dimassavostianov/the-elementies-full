using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ComingSoon : MonoBehaviour
{

    [SerializeField, Range(0, 1)] private float _shadingSpeed;
    [SerializeField] private TextMeshProUGUI _shadingPlane;
    [SerializeField] private float _maxAlpha;
    [SerializeField] private float _stayTime;

    private Color _panelColor;
    private float _alpha;

    public void PlayAnim()
    {
        _panelColor = _shadingPlane.color;
        _alpha = 0;
        StartCoroutine(Anim());
    }

    private IEnumerator Anim()
    {
        while (_alpha < _maxAlpha)
        {
            _alpha += _shadingSpeed * Time.deltaTime;
            _panelColor.a = Mathf.Clamp01(_alpha);
            _shadingPlane.color = _panelColor;

            yield return new WaitForEndOfFrame();
        }

        yield return new WaitForSeconds(_stayTime);

        StartCoroutine(BackAnim());
    }

    private IEnumerator BackAnim()
    {
        while (_alpha > 0)
        {
            _alpha -= _shadingSpeed * Time.deltaTime;
            _panelColor.a = Mathf.Clamp01(_alpha);
            _shadingPlane.color = _panelColor;

            yield return new WaitForEndOfFrame();
        }

        gameObject.SetActive(false);
    }
}
