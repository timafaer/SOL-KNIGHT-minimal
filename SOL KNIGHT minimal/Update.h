#pragma once

#include"main.h"
class Update
{
private:
	sf::Event event;

public :

	void update(Objmanager& manager);//���������� ��� ���� ��������
	sf::Event* getevent() { return &event; }// ��������� ������� ������������ ������ ���


};

