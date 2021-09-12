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

	void add_entity(Entity entity, unsigned id = 0);// мб там ссылки хранить надо я хз
	bool remove_entity(unsigned id = 0);
	
	std::vector<Entity&> get_entities();

	std::vector<Entity&> get_entities_with_component(ComponentType component);



	friend class Entity;
};

