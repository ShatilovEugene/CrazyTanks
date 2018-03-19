#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include <vector>

class MapManager
{
public:
    MapManager();
    bool check_collision(unsigned int target_x, unsigned int target_y);

private:
    std::vector<std::vector<int>> maze;
    unsigned int maze_height;
    unsigned int maze_width;

    friend class Game;
};

#endif // MAPMANAGER_H
