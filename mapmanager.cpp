#include "mapmanager.h"
#include <iostream>

using std::cout;



MapManager::MapManager()
{
	// HEY TO DO: fill this with zeros only
	map = {{{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
			 {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1},
			 {1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1},
			 {1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1},
			 {1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
			 {1, 1, 1, 1, 0, 1, 1, 1, 3, 1, 3, 1, 1, 1, 0, 1, 1, 1, 1},
			 {3, 3, 3, 1, 0, 1, 3, 3, 3, 3, 3, 3, 3, 1, 0, 1, 3, 3, 3},
			 {1, 1, 1, 1, 0, 1, 3, 1, 1, 4, 1, 1, 3, 1, 0, 1, 1, 1, 1},
			 {3, 3, 3, 3, 0, 3, 3, 1, 3, 3, 3, 1, 3, 3, 0, 3, 3, 3, 3},
			 {1, 1, 1, 1, 0, 1, 3, 1, 1, 1, 1, 1, 3, 1, 0, 1, 1, 1, 1},
			 {3, 3, 3, 1, 0, 1, 3, 3, 3, 3, 3, 3, 3, 1, 0, 1, 3, 3, 3},
			 {1, 1, 1, 1, 0, 1, 3, 1, 1, 1, 1, 1, 3, 1, 0, 1, 1, 1, 1},
			 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
			 {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1},
			 {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 1},
			 {1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1},
			 {1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
			 {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
			 {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}};
	row_num = map.size();
	column_num = map[0].size();

	// HEY TO DO: delete this
	for(int i = 0; i < map.size(); ++i)
	{
		for(int j = 0; j < map[i].size(); ++j)
			map[i][j] = 0; //.push_back(0);
	}

#ifdef DEBUGMODE
	cout << "This is test";
	testshow();
#endif

}

MapManager::~MapManager()
{
			//TODO realization
}

void MapManager::testshow()
{
	for(int i = 0; i < map.size(); ++i)
	{
		for(int j = 0; j < map[i].size(); ++j)
			std::cout << map[i][j];
		std::cout << std::endl;
	}
}

unsigned int MapManager::getRow_num() const
{
	return row_num;
}

unsigned int MapManager::getColumn_num() const
{
	return column_num;
}

bool MapManager::check_collision(unsigned int target_x, unsigned int target_y)
{
	//

	// unsigned int row_num; target_y [0,(rows - 1)]
	// unsigned int column_num; target_x [0,(columns - 1)]
	// return false
	if(target_y > (row_num - 1) || target_x > (column_num - 1))
		return false;

	if(map[target_y][target_x] == 0)
		return true;
	else
		return false;


}





