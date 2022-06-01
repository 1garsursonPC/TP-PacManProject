#include <string>
#include "interactive.h"
#include "NotifierCollision.h"
#include "ObserverCollision.h"

class Personnage : public NotifierCollision, public ObserverCollision, public Interactive
{
private:
      std::string dplmt;

public:
      Personnage(int x, int y, Background *background);

      void setDeplacement(std::string dplmt);

      void key_pressed(char key);
      void arrow_pressed(std::string cmd);

      void update_pos();

      bool test_collision(int x, int y);
      void collision(NotifierCollision& notifieur);

      void new_pos(int x, int y);
      int& getPos_X(void);
      int& getPos_Y(void);
};
