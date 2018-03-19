#ifndef PLAYER_H
#define PLAYER_H

#include <memory>
#include "tank.hpp"
#include "mapmanager.hpp"

class Player : public Tank
{
public:
    Player(std::shared_ptr<MapManager> use_map_manager, unsigned int initial_x_pos, unsigned int initial_y_pos, Direction initial_direction);
    virtual void move(Direction move_direction);

private:
    std::shared_ptr<MapManager> map_manager;
};

#endif // PLAYER_H
