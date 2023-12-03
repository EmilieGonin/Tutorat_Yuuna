public class Weapon
{
    public int Ammo => _ammo;
    public int Damage => _damage;

    private int _ammo;
    private int _damage;

    public Weapon()
    {
        _ammo = 3;
        _damage = 5;
    }

    public void RemoveAmmo()
    {
        _ammo--;
    }
}