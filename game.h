#ifndef GAME_H
#define GAME_H
#include "tanks.h"
#include "mapmanager.h"
#include "enemymanager.h"
#include "player.h"
#include "render.h"
#include "debug.h"

class Game
{
private:
	MapManager map;
	Player player;
	EnemyManager enemy;
	Render renderer;

	bool running {false};
	//TODO field:type

	void run();
	void handle_input();
	void update();
	void render();

public:
	Game();
	~Game();
	//TODO method(type):type
};

#endif // GAME_H
