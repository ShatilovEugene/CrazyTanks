#ifndef TANKS_H
#define TANKS_H


class Tanks
{
private:
	int X_LogicCoordinate;
	int Y_LogicCoordinate;
	int direction;

public:
	Tanks();
	virtual ~Tanks();
	virtual bool Detect_collisions() = 0;
	virtual void Move() = 0;
	virtual int position() = 0;
//TODO method(type):type
};

class Player: public Tanks
{
private:
//TODO field:type
public:
	Player();
	~Player();
	virtual bool Detect_collisions();
	virtual void Move();
	virtual int position();
//TODO method(type):type

};

class EnemyTank: public Tanks
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
