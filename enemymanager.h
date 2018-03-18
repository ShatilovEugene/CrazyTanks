#ifndef ENEMYMANAGER_H
#define ENEMYMANAGER_H
#include <vector>
#include "tanks.h"

class EnemyManager
{
private:
	std::vector<EnemyTank> Enemies;
	//TODO field:type
public:
	EnemyManager();
	~EnemyManager();
	//TODO method(type):type
};

#endif // ENEMYMANAGER_H
