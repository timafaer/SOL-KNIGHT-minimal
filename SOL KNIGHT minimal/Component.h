#pragma once
#include"Entity.h"
class Component
{
public:
	enum Type {
		GameEventComponent
	};
	virtual void applied_on_entity(Entity& entity);
	virtual void removed();
};

