using System.Collections.Generic;

public class Player : Entity
{
    private List<Weapon> _inventory;
    private Weapon _equippedWeapon;

    public Player()
    {
        _health = 15; //Ne pas modifier la valeur
        _inventory = new();

        Weapon weapon = new Weapon();

        _equippedWeapon = weapon;
        _inventory.Add(weapon);
    }

    public override void Shoot(Entity entity)
    {
        if (_equippedWeapon.Ammo <= 0) return; //Ne pas supprimer
        entity.TakeDamage(_equippedWeapon.Damage);
        _equippedWeapon.RemoveAmmo();
    }
}