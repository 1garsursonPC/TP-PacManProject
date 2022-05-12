#include <random>
#include <ctime>

#include "ennemis.h"

void Ennemis::deplacer(int x, int y)
{
	this->pos_x = x;
	this->pos_y = y;
}

Clyde::Clyde()
{
	srand(time(NULL));
}

void Clyde::new_pos()
{
	this->pos_x += (rand() % 11 - 5);
	this->pos_y += (rand() % 11 - 5);

}
