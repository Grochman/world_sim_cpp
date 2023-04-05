#include "Animal.h"
#include <cstdlib>
#include <iostream>

void Animal::action() {
	srand((unsigned) time(NULL));

	int dir = rand() % 4;

	switch (dir) {
	case 0:
		pos_x++;
		break;
	case 1:
		pos_x--;
		break;
	case 2:
		pos_y++;
		break;
	case 3:
		pos_y--;
		break;
	}
}
