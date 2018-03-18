#ifndef PLAYER_H
#define PLAYER_H
#include "tanks.h"
#include "mapmanager.h"
#include <iostream>

class Player: public Tank
{
private:
	MapManager* map_manager {nullptr};
	coordinate LogicPosition;

public:
	Player(MapManager* use_mapmanager);
	~Player();
	//virtual bool Detect_collisions();
	virtual void Move(Direction direction);
	virtual int position();
//TODO method(type):type

};
#endif // PLAYER_H
