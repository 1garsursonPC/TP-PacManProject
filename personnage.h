#include <string>

#include "interactive.h"
#include "NotifierCollision.h"

class Personnage : public NotifierCollision, public Interactive
{
private:
      std::string dplmt;

public:
      Personnage(int x, int y, Background *background);

      void setDeplacement(std::string dplmt);
      void new_pos(int x, int y);

      void key_pressed(char key);
      void arrow_pressed(std::string cmd);

      void update_pos();
};
