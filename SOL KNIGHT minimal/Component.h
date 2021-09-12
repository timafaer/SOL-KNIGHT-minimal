#pragma once
#include"Entity.h"
class Component
{
public:
	virtual void applied_on_entity(Entity& entity);
	virtual void removed();
};
// add components
enum ComponentType {
	component,
	GameComonent


};