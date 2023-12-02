public class Weapon
{
    public int Ammo => _ammo;

    public int _ammo;
    private int _damage;

    public Weapon()
    {
        _ammo = 3;
        _damage = 5;
    }
}