#pragma once
#include"main.h"
class EventManager
{
	//std::vector<sf::Event> handlers = {};

	void bind(sf::Event::EventType event, int callback);//доработать неверные типы 
	void unbind(sf::Event::EventType event, int callback);
};

