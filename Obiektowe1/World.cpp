#include <iostream>
#include <stdio.h>
#include "conio2.h"
#include "World.h"

#define LEGENDA_END 20


World::World(){
	organisms = new Organism[size_x * size_y];
	srand((unsigned)time(NULL));
	int x;

	for (int i = 0; i < size_x * size_y; i++) {
		x = rand() % 4;
		if (x == 0) {
			organisms[i];
		}
	}
	//generowanie losowej tablicy orgnizmow
}
void World::playTurn(){}
void World::drawWorld(){
	clrscr();
	gotoxy(1, 1);
	cputs("LEGENDA");
	//to w petli
	gotoxy(1, 3);
	cputs("W:	wilk");

	for (int i = 0; i < size_x + 2; i++) {
		gotoxy(LEGENDA_END + i, 1);
		putch('*');
		gotoxy(LEGENDA_END + i, 1 + size_y + 1);
		putch('*');
	}
	for (int i = 0; i < size_y + 2; i++) {
		gotoxy(LEGENDA_END, 1 + i);
		putch('*');
		gotoxy(LEGENDA_END + size_x + 1, 1 + i);
		putch('*');
	}

	gotoxy(LEGENDA_END + size_x + 3, 1);
	cputs("LOGS");
}
World::~World(){}