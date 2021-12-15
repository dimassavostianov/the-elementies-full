using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DarknessCallSpikes : MonoBehaviour
{
    [SerializeField] private float _speed;
    [SerializeField] private PerkVariant _darknessCall;

    private Vector3 _destination;
    private Character _charToDamage;
    private bool _isDamaged;

    private Perk DarknessCall => PerkFactory.CreatePerkFormTemplate(_darknessCall);

    public void SetDestination(Vector3 target, Character character)
    {
        _destination = target;
        _charToDamage = character;
        _isDamaged = false;
    }

    private void Update()
    {
        transform.LookAt(_destination);
        transform.position = Vector3.MoveTowards(transform.position, _destination, _speed * Time.deltaTime);

        if (Vector3.Distance(transform.position, _destination) <= 0.5f && _isDamaged == false)
        {
            _charToDamage.TakeDamage(DarknessCall.ApplyingDamage, DarknessCall.Name);
            _isDamaged = true;
        }
    }
}
