#include "game.h"
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;

#define DEBUGMODE

Game::Game():
	map(),
	player(&map)
{
#ifdef DEBUGMODE
	std::cout <<"\nGame constructor" << std::endl;
#endif

	// Initialization of members here if needed

	// Ask user whether he wants to continue here

	// once initialization is done:
	running = true;
	run();
}

Game::~Game()
{
#ifdef DEBUGMODE
	std::cout <<"\nGame destructor" << std::endl;
#endif
	//TODO realization
}

void Game::run()
{


	while(running)
	{
		handle_input();
		update();
		render();
	}
}


void Game::handle_input()
{
	cout << "Handle input" << endl;

	char control = getch();

	// if the first value is esc
		//getch(); // skip the [
		switch(control)
		{ // the real value
			//case 255:
			case 'W':
			case 'w':
				player.Move(Direction::UP);
				break;
			case 'S':
			case 's':
				player.Move(Direction::DOWN);
				break;
			case 'D':
			case 'd':
				player.Move(Direction::RIGHT);
				break;
			case 'A':
			case 'a':
				player.Move(Direction::LEFT);
				break;
			default:
			{
				cout << "Get Out!!!" << endl;
				running = false;
			}
			cout << control << endl;
		}

}

void Game::update()
{

	cout << "UPDATE";
	// For enemymanger
}

void Game::render()
{
	system("CLS");
	cout << "RENDER" << endl;
	//int x = player.LogicPosition.Y_Coordinate;
	//int y = player.LogicPosition.Y_Coordinate;

	map.testshow();

	// clear the console
	// draw the map with the player in it

}






