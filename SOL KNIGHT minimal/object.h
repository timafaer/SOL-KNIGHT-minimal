#pragma once
#include"main.h"

class Object :public sf::Drawable, public  sf::Transformable
{
protected:
	sf::Vector2f pos;
	
public:
	virtual sf::Vector2f Pos() { return pos; }// ������� ��� �������� �������� 
	virtual void update(sf::Time m_elapsed,sf::Event& ivent);//����� ����� ������ � ���������� 
	virtual void Draw(sf::RenderWindow& window);// ����� ������������ ��� ����
	

	friend class Objectmanager;
};

