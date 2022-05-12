#include <random>
#include <ctime>
// TODO : remove the console print
#include <stdio>

#include "ennemis.h"

void Ennemis::collision(NotifierCollision& notifieur)
{
	std::cout << "There's a collision !'" << std::endl;
}

bool Ennemis::test_collision(int x, int y)
{
	if (this->pos_x == x && this->pos_y == y)
		return true;
	return false;
}

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
