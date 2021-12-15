using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationForDescription : MonoBehaviour
{
    [SerializeField] private float _openAnimationSpeed;
    [SerializeField] private float _startScale;

    private void OnEnable()
    {
        gameObject.transform.localScale = new Vector3(0, 0, 1);
        StartCoroutine(OpenAnimation());
    }

    private IEnumerator OpenAnimation()
    {
        float xScale = gameObject.transform.localScale.x;
        float yScale = gameObject.transform.localScale.y;

        while (xScale < _startScale && yScale < _startScale)
        {
            xScale += Time.deltaTime * _openAnimationSpeed;
            yScale += Time.deltaTime * _openAnimationSpeed;

            gameObject.transform.localScale = new Vector3(xScale, yScale, 1);

            yield return new WaitForEndOfFrame();
        }
    }

    public void StartClosingAnim()
    {
        StartCoroutine(CloseAnimation());
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
}
