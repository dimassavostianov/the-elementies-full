using System.Collections;
using UnityEngine;

public class SceneTransitionShadePanel : ShadePanel
{
    public bool IsAnimationPlaying => _isAnimationPlaying;
    public bool IsShadeCompletly => _isShdeCompletely;

    [SerializeField, Range(0,1)] private float _shadeUnshdeDelay;

    private bool _isAnimationPlaying;
    private bool _isShdeCompletely;

    public void PlaySceneTransitionAniamtion()
    {
        _isShdeCompletely = false;
        _isAnimationPlaying = true;
        StartCoroutine(StartAnim());
    }

    private IEnumerator StartAnim()
    {
        PlayAnim();

        yield return new WaitUntil(() => _shadeComplete == true);
        yield return new WaitForSeconds(_shadeUnshdeDelay);

        _isShdeCompletely = true;

        PlayBackAnim();
    }

    private void OnDisable()
    {
        _isAnimationPlaying = false;
    }
}
