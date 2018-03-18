#include "player.h"

//methods Player

using std::cout;
using std::endl;

Player::Player(MapManager *use_mapmanager)
{
	LogicPosition.X_Coordinate = 0;
	LogicPosition.Y_Coordinate = 0;
	map_manager = use_mapmanager;
	if(map_manager)
		cout << "Obtained the pointer";
}

Player::~Player()
{
					//TODO realization
}

/*
bool Player::Detect_collisions()
{
#ifdef DEBUGMODE
	std::cout <<"\nbool Player::Detect_collisions()" << std::endl;
#endif
	return false;	//TODO realization
}
*/

void Player::Move(Direction direction)
{
#ifdef DEBUGMODE
	std::cout <<"\nvoid Player::Move()" << std::endl;
#endif

	// 1. Оценить клеточку на которую юзер хочет
	//чтобы он передвинулся и вычислить её по Х или У
	//сдвинуться
	// 2. Надо запросить у мап менеджера данные что находится
	// в клетке по движению
	// 3. Если там что-то находится, то никуда не ехать
	// 4. Если не находится то нужно перезаписать свои текущие
	//координаты на вычислынные(целевые)

	unsigned int X_target;
	unsigned int Y_target;

	switch (direction)
	{
	case UP:
		X_target = LogicPosition.X_Coordinate;
		Y_target = LogicPosition.Y_Coordinate - 1;
		break;
	case DOWN:
		X_target = LogicPosition.X_Coordinate - 1;
		Y_target = LogicPosition.Y_Coordinate;
		break;
	case RIGHT:
		X_target = LogicPosition.X_Coordinate + 1;
		Y_target = LogicPosition.Y_Coordinate;
		break;
	case LEFT:
		X_target = LogicPosition.X_Coordinate;
		Y_target = LogicPosition.Y_Coordinate + 1;
		break;
	default:
		break;
	}

	bool movement_permitted = map_manager->check_collision(X_target, Y_target);
	if(movement_permitted)
	{
		LogicPosition.X_Coordinate = X_target;
		LogicPosition.Y_Coordinate = Y_target;
	}
}


int Player::position()
{
#ifdef DEBUGMODE
	std::cout <<"\nint Player::position()" << std::endl;
#endif
	return 0;		//TODO realization
}
