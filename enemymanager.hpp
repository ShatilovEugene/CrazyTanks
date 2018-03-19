#ifndef ENEMYMANAGER_H
#define ENEMYMANAGER_H

#include <memory>
#include "mapmanager.hpp"

class EnemyManager
{
public:
    EnemyManager(std::shared_ptr<MapManager> use_map_manager);

private:
    std::shared_ptr<MapManager> map_manager;
};

#endif // ENEMYMANAGER_H
