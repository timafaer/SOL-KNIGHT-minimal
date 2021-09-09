#pragma once

#include"main.h"
class Update
{
private:
	sf::Event event;

public :

	void update(Objmanager& manager);//обновление для всех объектов
	sf::Event* getevent() { return &event; }// получение событий произошедших только что


};

