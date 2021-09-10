#pragma once
#include"main.h"
#include"Object_draw.h"
class Object :public Object_draw
{
protected:
	sf::Vector2f pos;
	sf::RenderWindow& window;


};

