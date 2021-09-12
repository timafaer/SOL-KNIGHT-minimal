#pragma once
#include"Component.h"
#include<vector>
class ComponentStorage
{
private:
	std::vector<Component> components;


public:
	bool add_component(ComponentType component, unsigned id = 0);
	std::vector<Component&> get_components(ComponentType component);
	Component& get_component_byID(ComponentType component,unsigned id);
	bool remove_component(ComponentType component, unsigned id = 0);
	std::vector<Component&> get_all_components();

	bool have_component(ComponentType component);

};

