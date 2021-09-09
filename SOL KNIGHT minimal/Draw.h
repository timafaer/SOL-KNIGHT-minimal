#pragma once
#include"main.h"
#include"Camera.h"
#include"Textures.h"
#include"Update.h"
class Draw
{
private:
	sf::RenderWindow window;
	Objmanager manager;
	Camera* camera;
	Textures texture;
	Update update;
	sf::Time time;
public:
	//void Draw();
	void up();
	void write();
	void present();
	void mainloop();



};

