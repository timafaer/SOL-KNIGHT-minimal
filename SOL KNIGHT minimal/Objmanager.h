#pragma once
#include"object.h"
#include"main.h"
#include<vector>
class Objmanager
{
private:
	static std::vector<Object&> objects;
	static int size;
public:

	static void add(Object& obj);//добавление объектов
	static Object& get(int i);	
};

