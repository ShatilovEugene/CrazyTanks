#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <memory>
#include "mapmanager.hpp"
#include "player.hpp"
#include "enemymanager.hpp"

class Game
{
public:
    Game();
    ~Game();

private:
    //---------------------Operations---------------------
    void run();
    void handle_input();
    void update();
    void render();

    //---------------------Attributes---------------------
    static bool instantiated;
    static bool running;

    std::shared_ptr<MapManager> map_manager;
    std::shared_ptr<Player> player;
    std::shared_ptr<EnemyManager> enemy_manager;





};

#endif // GAMEMANAGER_H
