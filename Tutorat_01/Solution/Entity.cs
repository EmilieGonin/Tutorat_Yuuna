public class Entity
{
    public bool IsDead => _health == 0;
    public int Health => _health;
    protected int _health;

    public virtual void Shoot(Entity entity)
    {
        entity.TakeDamage(1);
    }

    public void TakeDamage(int damage)
    {
        _health -= damage;
        if (_health < 0) _health = 0;
    }
}