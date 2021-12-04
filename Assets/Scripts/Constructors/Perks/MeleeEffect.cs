using System.Collections;
using UnityEngine;

public class MeleeEffect : PerkVisualEffect
{
    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        var effectObj = Instantiate(_effectPrefab);
        effectObj.transform.position = new Vector3(enemyPosition.x, enemyPosition.y, 0);
        StartCoroutine(EndVisualEffectAfterDuration(effectObj));
    }

    private IEnumerator EndVisualEffectAfterDuration(GameObject obj)
    {
        yield return new WaitForSeconds(0.5f);

        StaticInfo.PerkEffectFinished = true;

        yield return new WaitForSeconds(_duration);

        Destroy(obj);
        StartCoroutine(StartSelfDestroy());
    }
}
