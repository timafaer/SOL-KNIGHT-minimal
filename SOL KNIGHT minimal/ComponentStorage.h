#pragma once


#include"Component.h"
#include<vector>
class ComponentStorage
{
private:
	std::vector<Component> components;

public:
	void AddComponent(Component& component);	
	void RemoveComponent(Component& component);
	auto get_comonents() { return components; }//ссылка или объект ?

	auto Get_component(Component::Type component);
};

