#pragma once
#include "Organism.h"
class World
{
	int const size_x = 20, size_y = 20;
	Organism* organisms;

public:
	World();
	void playTurn();
	void drawWorld();
	~World();
};

