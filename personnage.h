#include <string.h>
#include "NotifierCollision.h"

class Personnage :public NotifierCollision
{
private:
      int pos_x;
      int pos_y;
      std::string dplmt;

public:
      void setDeplacement(std::string dplmt);
      void new_pos(int x, int y);
};
