using UnityEngine;

//Objectif : corriger le code pour que le joueur perde la partie au 15�me tour.
//L'ennemi doit survivre avec 5 HP restants.
//Interdiction de modifier le taux de HP des entit�s.

public class GameManager : MonoBehaviour
{
    private Entity _player;
    private Entity _enemy;

    private void Awake()
    {
        _player = new Player();
        _enemy = new Enemy();

        int turn = 0;

        while (!_player.IsDead && !_enemy.IsDead)
        {
            turn++;
            if (turn == 20) break; //Petite s�curit� pour �viter les boucles infinies

            _player.Shoot(_enemy);

            if (_enemy.IsDead) break;
            _enemy.Shoot(_player);
        }

        Debug.Log($"Turn : {turn}");
        Debug.Log($"Player health = {_player.Health}");
        Debug.Log($"Enemy health = {_enemy.Health}");
    }
}