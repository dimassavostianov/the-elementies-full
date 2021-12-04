using System;
using UnityEngine;


public enum CharacterState
{
    Alive,
    Dead
}

public class Character : MonoBehaviour
{
    [SerializeField] private CharacterAnimationController _animationController;
    [SerializeField] private GameObject _hpStaUIObj;
    [SerializeField] private ElementsDictionary _elemetnsIcons;
    [SerializeField] private Transform _posForHpUI;

    private CharacterState _currentState;
    private Perk _activeDefensePerk;
    private Perk _activePassivePerk;
    private Perk _activeAttackPerk;

    #region Properties
    public CharacterState CurrentState => _currentState;
    public CharacterRarity Rarity => _rarity;
    public ElementType ElementType => _elementType;
    public Perk AttackPerk1 => PerkFactory.CreatePerkFormTemplate(_attackPerk1);
    public Perk AttackPerk2 => PerkFactory.CreatePerkFormTemplate(_attackPerk2);
    public Perk DefensePerk => PerkFactory.CreatePerkFormTemplate(_defensePerk);
    public Perk PassivePerk => PerkFactory.CreatePerkFormTemplate(_passivePerk);
    public int Health => _health;
    public int Damage => _damage;
    public int Defense => _defense;
    public int Power => _power;
    public int Level => _level;
    #endregion Properties

    [SerializeField] private CharacterRarity _rarity;
    [SerializeField] private ElementType _elementType;

    [SerializeField] private PerkVariant _attackPerk1;
    [SerializeField] private PerkVariant _attackPerk2;
    [SerializeField] private PerkVariant _defensePerk;
    [SerializeField] private PerkVariant _passivePerk;

    [SerializeField] private int _health;
    [SerializeField] private int _damage;
    [SerializeField] private int _defense;
    [SerializeField] private int _power;
    [SerializeField] private int _level;

    private CharacterHPStaUI _hpStaUI;
    private GameObject _hpStored;

    public void SetFieldsByCharacterContructor(
        CharacterRarity rarity,
        ElementType elementType,
        PerkVariant attackPerk1,
        PerkVariant attackPerk2,
        PerkVariant defensePerk,
        PerkVariant passivePerk,
        int health,
        int damage,
        int defense,
        int power,
        int level)
    {
        _rarity = rarity;
        _elementType = elementType;
        _attackPerk1 = attackPerk1;
        _attackPerk2 = attackPerk2;
        _defensePerk = defensePerk;
        _passivePerk = passivePerk;
        _health = health;
        _damage = damage;
        _defense = defense;
        _power = power;
        _level = level;
    }


    private void Start()
    {
        try
        {
            SetAsUnChoosed();
            _currentState = CharacterState.Alive;
            var hpObj = Instantiate(_hpStaUIObj);
            hpObj.transform.position = _posForHpUI.position;
            _hpStored = hpObj;
            _hpStaUI = hpObj.GetComponent<CharacterHPStaUI>();
            _hpStaUI.SetPRoperties(_health, _power, _elemetnsIcons.GetElementIconByType(_elementType));
            _animationController.StartRelaxAnimation();
        }
        catch (Exception ex)
        {
            
        }
    }

    public void XFlip()
    {
        _animationController.MakeXFlip();
    }

    public void SetAsChoosed()
    {
    }

    public void SetAsUnChoosed()
    {
    }

    public int CalculateDamage()
    {
        int damage = 0;

        if (_activeAttackPerk != null) damage += _activeAttackPerk.ApplyingDamage;

        if (_activePassivePerk != null) damage += _activePassivePerk.ApplyingDamage;

        return damage;
    }

    public void TakeDamage(int value)
    {
        int additionDefense = 0;

        if (_activeDefensePerk != null) additionDefense += _activeDefensePerk.ApplyingDefense;

        if (_activePassivePerk != null) additionDefense += _activePassivePerk.ApplyingDefense;

        value = (int)(value * (1 - ((float)(_defense + additionDefense) / 100)));

        _health -= value;

        _activeDefensePerk = null;

        _hpStaUI.UpdateHealth(Health);

        _animationController.StartTakingDamageAnimation();

        if (_health <= 0)
        {
            SetAsDead();
        }
    }

    public void PlayMeleeAttack(Vector3 vector)
    {
        _animationController.StartMeleeAttackAnimation(vector);
    }

    public void PlayCastAnim()
    {
        _animationController.StartCastAnimation();
    }

    public void SetActiveDefensePerk(Perk perk)
    {
        if (_activeDefensePerk == null)
        {
            _activeDefensePerk = perk;
            _power -= perk.ApplyingEnergy;
            _hpStaUI.UpdateEnergy(Power);
        }
    }

    public void SetActiveAttackPerk(Perk perk)
    {
        _activeAttackPerk = perk;
        _power -= perk.ApplyingEnergy;
        _hpStaUI.UpdateEnergy(Power);
    }

    public void SetPassivePerk(Perk perk)
    {
        if (_activePassivePerk == null)
        {
            _activePassivePerk = perk;
            _power -= perk.ApplyingEnergy;
            _hpStaUI.UpdateEnergy(Power);
        }
    }

    public void ResetActiveAttackPerks()
    {
        _activeAttackPerk = null;
    }

    private void SetAsDead()
    {
        _currentState = CharacterState.Dead;
        Destroy(_hpStored);
        _animationController.StartDeathAnimation();
    }

    private void OnDestroy()
    {
        try
        {
            Destroy(_hpStored);
        }
        catch (Exception ex)
        { }
    }
}
