#ifndef ENEMY_H
#define ENEMY_H

#include <memory>
#include "tank.hpp"
#include "mapmanager.hpp"

class Enemy : public Tank
{
public:
    Enemy(std::shared_ptr<MapManager> use_map_manager, unsigned int initial_x_pos, unsigned int initial_y_pos, Direction initial_direction);
    virtual void move(Direction move_direction);

private:
    std::shared_ptr<MapManager> map_manager;
};

#endif // ENEMY_H
