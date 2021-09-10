#pragma once
#include"GameComponent.h"
#include"EventManager.h"
class GameEventComponent:public GameComponent ,public Component
{
private:

	EventManager event_manager;
public:
	void trigger_event(sf::Event& event);
	void bind(sf::Event& event, int callback);
	void unbind(sf::Event& event, int callback);

};

