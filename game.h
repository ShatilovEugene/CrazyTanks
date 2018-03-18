#ifndef GAME_H
#define GAME_H
#include "tanks.h"
#include "mapmanager.h"
#include "enemymanager.h"

class Game
{
private:
	Player palyer;
	MapManager map;
	EnemyManager enemy;
	//TODO field:type

public:
	Game();
	//TODO method(type):type
};

#endif // GAME_H
