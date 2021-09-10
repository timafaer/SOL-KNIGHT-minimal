#pragma once
#include"main.h"
class Object_draw :public sf::Drawable
{
public:
	virtual void process_logic();
	virtual void process_draw();
	virtual void process_event(sf::Event& event);

};

