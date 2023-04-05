#pragma once
#include "World.h"

class Organism
{
protected:
	int strength;
	int iniciative;
	int pos_x, pos_y;
	World& my_world;
	char symbol;
public:
	Organism();
	virtual void action();
	void colision(Organism other);
	void draw();
	~Organism();
};

