using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PerkVisualEffect : MonoBehaviour
{
    [SerializeField] protected GameObject _effectPrefab;
    [SerializeField] protected Transform _effectsHolder;
    [SerializeField] protected Vector2 _startPositionForDistanceAttack;
    [SerializeField] protected float _duration;
    [SerializeField] protected float _distanceOffset;
    [SerializeField] protected bool _goBackwards;
    [SerializeField] protected bool _destroyAfterFly;

    private float _passedDistance;

    public abstract void StartEffect(Vector3 startPosition, Vector3 enemyPosition);

    protected IEnumerator PlayFlyAnimation(GameObject obj, Vector3 destination)
    {
        _passedDistance = 0;
        Vector2 dir = new Vector2(destination.x - obj.transform.position.x, destination.y - obj.transform.position.y);
        float speed = Vector3.Magnitude(dir) / _duration;

        while (_passedDistance < Vector3.Magnitude(dir) - _distanceOffset)
        {
            obj.transform.position = Vector3.MoveTowards(obj.transform.position, destination, speed * Time.deltaTime);
            _passedDistance += speed * Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }

        if (_destroyAfterFly == true) Destroy(obj);

        StaticInfo.PerkEffectFinished = true;
        StartCoroutine(StartSelfDestroy());
    }

    protected IEnumerator StartSelfDestroy()
    {
        yield return new WaitForSeconds(2f);
        Destroy(gameObject);
    }
}
