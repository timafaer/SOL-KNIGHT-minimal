#pragma once
#include"main.h"

class Textures
{

private:
	std::vector<sf::Texture> m_textures;
	unsigned size = 0;

public:
	sf::Texture& Gettext(unsigned numb) { return m_textures[numb]; }
	void add(std::string filename);



};

