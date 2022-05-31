#include <string>
#include "NotifierCollision.h"
#include "ObserverCollision.h"


class Personnage :public NotifierCollision , public ObserverCollision
{
private:
      int pos_x;
      int pos_y;
      std::string dplmt;

public:

      bool test_collision(int x, int y);
      void collision(NotifierCollision& notifieur);
      void setDeplacement(std::string dplmt);
      void new_pos(int x, int y);
      int& getPos_X(void);
      int& getPos_Y(void);
};
