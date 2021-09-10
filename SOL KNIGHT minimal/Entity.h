#pragma once
#include "ComponentStorage.h"
#include"Scence.h"
class Entity
{
private:
	ComponentStorage storage;
	Scence scence;
public:
	void add_component(Component& component);
	void remove_component(Component& component);

	auto get_component(Component::Type component);

	auto get_comonents();

	//property
	auto event_manager() { return scence.game.Get_component(Component::Type::GameEventComponent); }
};

