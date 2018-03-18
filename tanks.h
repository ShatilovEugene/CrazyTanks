#ifndef TANKS_H
#define TANKS_H
#include "debug.h"

enum Direction
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

class Tank // TO DO: Tank
{
protected:
	struct coordinate{
	unsigned int X_Coordinate;
	unsigned int Y_Coordinate;
	};
	unsigned int direction;

public:
	Tank();
	virtual ~Tank();
	//virtual bool Detect_collisions() = 0;
	virtual void Move(Direction direction) = 0;
	virtual int position() = 0;

};

class EnemyTank: public Tank
{
private:
//TODO field:type
public:
	EnemyTank();
	~EnemyTank();
	bool Detect_collisions();
	void Move();
	int position();
	//TODO method(type):type
};
#endif // TANKS_H
