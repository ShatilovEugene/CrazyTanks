#ifndef MAPMANAGER_H
#define MAPMANAGER_H
#include <vector>
#include "debug.h"

class MapManager
{
private:
	std::vector<std::vector<int>> map;
	unsigned int row_num;
	unsigned int column_num;

	//TODO field:type

public:
	MapManager();
	~MapManager();
	void testshow();
	//TODO method(type):type


	unsigned int getRow_num() const;
	unsigned int getColumn_num() const;

	bool check_collision(unsigned int target_x, unsigned int target_y);
};

#endif // MAPMANAGER_H
