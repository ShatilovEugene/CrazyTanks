#ifndef ENEMYMANAGER_H
#define ENEMYMANAGER_H
#include <vector>
#include <iostream>
#include "tanks.h"
#include "debug.h"

class EnemyManager
{
private:
	std::vector<EnemyTank> enemies;
	//TODO field:type
public:
	EnemyManager();
	~EnemyManager();
	//TODO method(type):type
};

#endif // ENEMYMANAGER_H
