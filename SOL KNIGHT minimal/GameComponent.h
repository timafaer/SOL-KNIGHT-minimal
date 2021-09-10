#pragma once
#include"Game.h"
#include"Entity.h"
class GameComponent:public Component
{
private:
	Entity& game;
	//property class
public:
	
	void applied_on_entity(Entity& entity);

	virtual void applien_on_game(Entity& game);

	//abstractmethod

	virtual void game_tick();

};

