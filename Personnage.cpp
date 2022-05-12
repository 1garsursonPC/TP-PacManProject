#include <string.h>

void Personnage::void setDeplacement(std::string dplmt)
{
	deplacement = dplmt;
	notify(int x, int y);
}

void Personnage::void new_pos(int x, int y)
{
	pos_x = x;
	pos_y = y;
}