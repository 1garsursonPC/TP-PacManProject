#include <string.h>

void Personnage::setDeplacement(std::string dplmt)
{
	deplacement = dplmt;
    notify(pos_x, pos_y);
}

void Personnage::new_pos(int x, int y)
{
	pos_x = x;
	pos_y = y;
}
