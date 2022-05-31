#include "NotifierCollision.h"
#include "personnage.h"

void NotifierCollision::notify(int x, int y)
{
	
    bool verif = Personnage.test_collision(x,y);
	if (verif==true)
	{
        collision(bob);
	}

}
