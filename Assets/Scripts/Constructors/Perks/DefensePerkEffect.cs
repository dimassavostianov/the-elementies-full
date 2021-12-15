using UnityEngine;
using System.Collections;

public class DefensePerkEffect : PerkVisualEffect
{
    [SerializeField] private GameObject _startEffectObj;
    [SerializeField] private GameObject _middleEffectObj;
    [SerializeField] private GameObject _endEffectObj;
    [SerializeField] private bool _isDarknessCall;
    [SerializeField] private float _doDamageDelay;
    [SerializeField] private float _delayBtwFirstAndSecondEffects;

    private Vector3 _storedStartPosition;

    public override void StartEffect(Vector3 startPosition, Vector3 enemyPosition)
    {
        Vector3 offset = new Vector3(_startPositionForDistanceAttack.x, _startPositionForDistanceAttack.y, 0);

        _storedStartPosition = startPosition;
        var objStart = Instantiate(_startEffectObj, transform);
        objStart.transform.position = startPosition + offset;
        if (_isDarknessCall == false) StartCoroutine(SecondEffectAfterDelay(startPosition, enemyPosition));
    }

    private IEnumerator SecondEffectAfterDelay(Vector3 startPosition, Vector3 enemyPosition)
    {
        Vector3 offset = new Vector3(_startPositionForDistanceAttack.x, _startPositionForDistanceAttack.y, 0);

        yield return new WaitForSeconds(_delayBtwFirstAndSecondEffects);

        var objMiddle = Instantiate(_middleEffectObj, transform);
        objMiddle.transform.position = startPosition + offset;
    }

    public void StartEndEffect(Character[] characters)
    {
        Vector3 offset = new Vector3(_startPositionForDistanceAttack.x, _startPositionForDistanceAttack.y, 0);

        foreach (var character in characters)
        {
            var endObj = Instantiate(_endEffectObj);
            if (_isDarknessCall == true)
            {
                endObj.transform.position = _storedStartPosition + offset;
                endObj.GetComponent<DarknessCallSpikes>().SetDestination(character.transform.position, character);
            }
            else
            {
                endObj.transform.position = _storedStartPosition + offset;
            }
        }
    }

    public void DestroySelf()
    {
        Destroy(gameObject);
    }
}
