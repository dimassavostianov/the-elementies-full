using System.Collections;
using UnityEngine;

public class DistanceEffectSelfPositioning : PerkVisualEffect
{
    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        Camera camera = Camera.main;
        _startPositionForDistanceAttack = camera.ViewportToWorldPoint(new Vector2(0.5f, 1.1f));
        var effectObj = Instantiate(_effectPrefab);
        effectObj.transform.position = _startPositionForDistanceAttack;
        effectObj.transform.LookAt(enemyPosition);
        StartCoroutine(PlayFlyAnimation(effectObj, enemyPosition));
    }
}