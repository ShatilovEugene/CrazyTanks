#include <cassert>
#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <memory>
//#include <termios.h>

#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

#include "game.hpp"

using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_shared;

//----------------------------------------------------

bool Game::instantiated = false;
bool Game::running = false;

Game::Game()
{
    assert(!instantiated);

    map_manager = make_shared<MapManager>();
    player = make_shared<Player>(map_manager, 0, 0, Direction::DOWN);
    enemy_manager = make_shared<EnemyManager>(map_manager);

    instantiated = true;

    run();
}

Game::~Game()
{
    instantiated = running = false;
}

void Game::run()
{
    assert(!running);
    running = true;

    // Main game loop:
    while(running)
    {
        handle_input();
        //update();
        render();
    }
}

void Game::handle_input()
{
    cout << "Handle input" << endl;

    int key = getch(); //std::cin.get();

    switch(key)
    {
        case 'W':
        case 'w':
            player->move(Direction::UP);
            break;
        case 'S':
        case 's':
            player->move(Direction::DOWN);
            break;
        case 'D':
        case 'd':
            player->move(Direction::RIGHT);
            break;
        case 'A':
        case 'a':
            player->move(Direction::LEFT);
            break;
        // TO DO: if "Enter" shoots, handle shooting here as well
        default:
        {
            cout << "Get Out!!!" << endl;
            running = false;
        }
    }
}

void Game::update()
{
    // TO DO: make enemymanager move the enemies here
}

void Game::render()
{
	system("CLS");

	for(unsigned int i = 0; i < map_manager->maze.size(); ++i)
    {
		for(unsigned int j = 0; j < map_manager->maze[i].size(); ++j)
        {
            if(player->get_x_pos() == i && player->get_y_pos() == j)
            {
                cout << "T"; // player
            }
            else
            {
                cout << map_manager->maze[i][j];
            }
        }
        cout << std::endl;
     }
}
