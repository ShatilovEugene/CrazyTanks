#include "tanks.h"


Tank::Tank()
{
					//TODO realization
}

Tank::~Tank()
{
					//TODO realization
}


//methods EnemyTanks

EnemyTank::EnemyTank()
{
#ifdef DEBUGMODE
	std::cout <<"\nEnemy Tank constructor" << std::endl;
#endif
					//TODO realization
}

EnemyTank::~EnemyTank()
{
#ifdef DEBUGMODE
	std::cout <<"\nEnemy Tank destructor" << std::endl;
#endif
					//TODO realization
}

bool EnemyTank::Detect_collisions()
{
#ifdef DEBUGMODE
	std::cout <<"\nbool EnemyTank::Detect_collisions()" << std::endl;
#endif
	return false;	//TODO realization
}

void EnemyTank::Move()
{
#ifdef DEBUGMODE
	std::cout <<"\nvoid EnemyTank::Move()" << std::endl;
#endif
					//TODO realization
}

int EnemyTank::position()
{
#ifdef DEBUGMODE
	std::cout <<"\nint EnemyTank::position()" << std::endl;
#endif
	return 0;		//TODO realization
}
