#pragma once

#include"main.h"
#include"Entity.h"
class Game:public Entity
{
private:
	sf::RenderWindow window;
	bool runing;
	//Scence currentscence;
	//Settings settings;
public:
	

	sf::Vector2u screen_size();
	void run();
	void game_tick();
	void exit();

};

