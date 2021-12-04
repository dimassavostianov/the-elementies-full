using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StationaryDistanceAttack : PerkVisualEffect
{
    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        var effectObj = Instantiate(_effectPrefab);
        effectObj.transform.position = new Vector3(startPosition.x, startPosition.y, 0);

        StartCoroutine(EndVisualEffectAfterDuration(effectObj));
    }

    private IEnumerator EndVisualEffectAfterDuration(GameObject obj)
    {
        yield return new WaitForSeconds(_duration / 2f);

        StaticInfo.PerkEffectFinished = true;

        yield return new WaitForSeconds(_duration);

        Destroy(obj);
        StartCoroutine(StartSelfDestroy());
    }
}
