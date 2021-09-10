#pragma once
#include"Game.h"
#include"Entity.h"
#include<vector>
#include"Component.h"
class Scence
{
private:
	std::vector<Entity> entities;
	ComponentStorage& game;
public:
	void add_entity(Entity& entity);
	void remove_entity(Entity& entity);
	auto get_entities() { return entities; }// ссылка или объект ?
	auto get_entities_with_component(Component& comp);

	friend class Entity;
};

