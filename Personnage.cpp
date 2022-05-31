#include <string>
#include "personnage.h"
#include <iostream>
#include <NotifierCollision.h>

void Personnage::setDeplacement(std::string _newdplmt)
{
    dplmt = _newdplmt;
    notify(pos_x,pos_y);
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

int Personnage::getPos_X(void){
    return pos_x;
}

int Personnage::getPos_Y(void){
    return pos_y;
}

