#include <string>
#include "personnage.h"

void Personnage::setDeplacement(std::string dplmt)
{
	deplacement = dplmt;
    notify(int x, int y);
}

void Personnage::new_pos(int x, int y)
{
	pos_x = x;
	pos_y = y;
}

bool Personnage::test_collision(int x, int y)
{
  if (pos_x == x&&pos_y == y){
      return true;
  }
  else {
      return false;
  }
}
void Personnage::collision(NotifierCollision& notifieur)
{
    std::cout<<"Warning ! Collision !"<<std::endl;
}

