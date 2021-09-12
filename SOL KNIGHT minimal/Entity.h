#pragma once
#include "ComponentStorage.h"
#include"Scence.h"
class Entity
{
private:
	ComponentStorage storage;
	Scence& scence;
public:
	bool add_componet(ComponentType component, unsigned id = 0);
	bool remove_component(ComponentType component, unsigned id = 0);
	Component& get_component(ComponentType component, unsigned id = 0);

	std::vector<Component&> get_components(ComponentType component);

	bool have_component(ComponentType component);

	void event_manager();	

};

