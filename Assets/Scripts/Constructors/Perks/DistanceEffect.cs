using UnityEngine;

public class DistanceEffect : PerkVisualEffect
{
    [SerializeField] private Vector3 _startOffset;
    [SerializeField] private bool _rotateToEnemy;
    [SerializeField] private bool _applyOffsetToEndPoint;
    [SerializeField] private GameObject _additionalEffect;
    [SerializeField] private float _rotationToEnemyOffset;

    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        if (_additionalEffect != null)
        {
            var add = Instantiate(_additionalEffect, _effectsHolder);
            add.transform.position = new Vector3(startPosition.x + _startOffset.x, startPosition.y + _startOffset.y, 0);
        }

        var effectObj = Instantiate(_effectPrefab, _effectsHolder);
        effectObj.transform.position = new Vector3(startPosition.x + _startOffset.x, startPosition.y + _startOffset.y, 0);

        if (_rotateToEnemy == true)
        {
            Vector3 dir = enemyPosition - startPosition;
            float angle = Vector3.SignedAngle(-transform.right, dir, Vector3.forward);
            effectObj.transform.rotation = Quaternion.AngleAxis(angle + _rotationToEnemyOffset, Vector3.forward);
        }

        if (_applyOffsetToEndPoint)
        {
            StartCoroutine(PlayFlyAnimation(effectObj, enemyPosition + _startOffset));
        }
        else
        {
            StartCoroutine(PlayFlyAnimation(effectObj, enemyPosition));
        }
    }
}