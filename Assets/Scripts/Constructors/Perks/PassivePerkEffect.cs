using UnityEngine;

public class PassivePerkEffect : PerkVisualEffect
{
    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        var effectObj = Instantiate(_effectPrefab, transform);
        Vector3 offset = new Vector3(_startPositionForDistanceAttack.x, _startPositionForDistanceAttack.y, 0);
        effectObj.transform.position = startPosition + offset;
    }
}