#pragma once
#include"main.h"
#include"object.h"

class Tilemap
{
private:
	sf::VertexArray m_vertex;
	sf::Texture m_tileset;
    sf::Vector2u tileSize;
    int** map;
   

public:
    Tilemap();
    void create();

};

