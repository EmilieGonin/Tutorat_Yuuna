public class Entity
{
    public bool IsDead => _health == 0;
    private int _health;

    protected virtual void Shoot(Entity entity)
    {
        entity.TakeDamage(1);
    }

    protected void TakeDamage(int damage)
    {
        _health -= damage;
        if (_health < 0) _health = 0;
    }
}