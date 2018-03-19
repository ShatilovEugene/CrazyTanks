#include "enemy.hpp"

Enemy::Enemy(std::shared_ptr<MapManager> use_map_manager, unsigned int initial_x_pos, unsigned int initial_y_pos, Direction initial_direction):
    map_manager(use_map_manager),
    Tank(initial_x_pos, initial_y_pos, initial_direction)
{

}

void Enemy::move(Direction move_direction)
{

}
