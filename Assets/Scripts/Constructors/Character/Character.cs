using UnityEngine;


public enum CharacterState
{
    Alive,
    Dead
}

public class Character : MonoBehaviour
{
    [SerializeField] private CharacterAnimationController _animationController;
    [SerializeField] private CharacterHPStaUI _hpStaUI;
    [SerializeField] private GameObject _deadIndicator;
    [SerializeField] private GameObject _choosedIndicator;

    private CharacterState _currentState;
    private Perk _activeDefensePerk;
    private Perk _activePassivePerk;
    private Perk _activeAttackPerk;

    #region Properties
    public CharacterState CurrentState => _currentState;
    public CharacterRarity Rarity => _rarity;
    public ElementType ElementType => _elementType;
    public Perk AttackPerk1 => _attackPerk1;
    public Perk AttackPerk2 => _attackPerk2;
    public Perk DefensePerk => _defensePerk;
    public Perk PassivePerk => _passivePerk;
    public int Health => _health;
    public int Damage => _damage;
    public int Defense => _defense;
    public int Power => _power;
    public int Level => _level;
    #endregion Properties

    [SerializeField] private CharacterRarity _rarity;
    [SerializeField] private ElementType _elementType;

    [SerializeField] private Perk _attackPerk1;
    [SerializeField] private Perk _attackPerk2;
    [SerializeField] private Perk _defensePerk;
    [SerializeField] private Perk _passivePerk;

    [SerializeField] private int _health;
    [SerializeField] private int _damage;
    [SerializeField] private int _defense;
    [SerializeField] private int _power;
    [SerializeField] private int _level;

    public void SetFieldsByCharacterContructor(
        CharacterRarity rarity,
        ElementType elementType,
        Perk attackPerk1,
        Perk attackPerk2,
        Perk defensePerk,
        Perk passivePerk,
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
        SetAsUnChoosed();
        _currentState = CharacterState.Alive;
        _hpStaUI.SetMaxHealthAndEnergy(Health, Power);
    }

    public void XFlip()
    {
        GetComponent<SpriteRenderer>().flipX = true;
    }

    public void SetAsChoosed()
    {
        _choosedIndicator.SetActive(true);
    }

    public void SetAsUnChoosed()
    {
        _choosedIndicator.SetActive(false);
    }

    public int CalculateDamage()
    {
        int additionalDamage = 0;

        if (_activeAttackPerk != null) additionalDamage += _activeAttackPerk.ApplyingDamage;

        if (_activePassivePerk != null) additionalDamage += _activePassivePerk.ApplyingDamage;

        int damage = _damage + additionalDamage;

        return damage;
    }

    public void TakeDamage(int value)
    {
        int additionDefense = 0;

        if (_activeDefensePerk != null) additionDefense += _activeDefensePerk.ApplyingDefense;

        if (_activePassivePerk != null) additionDefense += _activePassivePerk.ApplyingDefense;

        _health -= value * (1 - ((_defense + additionDefense) / 100));

        _activeDefensePerk = null;

        _hpStaUI.UpdateHealth(Health);

        if (_health <= 0)
        {
            SetAsDead();
        }
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
        _deadIndicator.SetActive(true);
    }
}
