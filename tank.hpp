#ifndef TANK_H
#define TANK_H

enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Tank
{
public:
    Tank(unsigned int initial_x_pos, unsigned int initial_y_pos, Direction initial_direction):
        x_pos(initial_x_pos),
        y_pos(initial_y_pos),
        direction(initial_direction)
    {}

    unsigned int get_x_pos();
    unsigned int get_y_pos();
    Direction get_direction();
    virtual void move(Direction move_direction) = 0;

protected:
    unsigned int x_pos;
    unsigned int y_pos;
    Direction direction;

};

inline unsigned int Tank::get_x_pos()
{
    return x_pos;
}

inline unsigned int Tank::get_y_pos()
{
    return y_pos;
}

inline Direction Tank::get_direction()
{
    return direction;
}

#endif // TANK_H
