#pragma once
#include"main.h"

class Object :public sf::Drawable, public  sf::Transformable
{
protected:
	sf::Vector2f pos;
	
public:
	virtual sf::Vector2f Pos() { return pos; }// возврат для проверки коллизий 
	virtual void update(sf::Time m_elapsed,sf::Event& ivent);//здесь пишем логику и управление 
	virtual void Draw(sf::RenderWindow& window);// здесь отрисовываем как надо
	

	friend class Objectmanager;
};

