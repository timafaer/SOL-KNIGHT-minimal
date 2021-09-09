#pragma once
#include"main.h"


class Camera: public sf::Transformable
{
private:
	sf::View camera;
	sf::Vector2f pos;
public:
	sf::View Get() { return camera; }


};

