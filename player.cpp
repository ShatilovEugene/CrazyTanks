#include "player.hpp"

Player::Player(std::shared_ptr<MapManager> use_map_manager, unsigned int initial_x_pos,
	unsigned int initial_y_pos, Direction initial_direction):
	map_manager(use_map_manager),
    Tank(initial_x_pos, initial_y_pos, initial_direction)
{

}

void Player::move(Direction move_direction)
{
    unsigned int target_x_pos;
    unsigned int target_y_pos;

    switch (direction)
    {
    case UP:
        target_x_pos = x_pos;
        target_y_pos = y_pos - 1;
        break;
    case DOWN:
        target_x_pos = x_pos - 1;
        target_y_pos = y_pos;
        break;
    case RIGHT:
        target_x_pos = x_pos + 1;
        target_y_pos = y_pos;
        break;
    case LEFT:
        target_x_pos = x_pos;
        target_y_pos = y_pos + 1;
        break;
    default:
        break;
    }

    bool movement_permitted = map_manager->check_collision(target_x_pos, target_y_pos);
    if(movement_permitted)
    {
        x_pos = target_x_pos;
        y_pos = target_y_pos;
    }
}


