#ifndef OBSERVER_COLLISION_H
#define OBSERVER_COLLISION_H

#include "NotifierCollision.h"

class ObserverCollision
{
public:
	virtual void collision(NotifierCollision& notifieur) = 0;
	virtual bool test_collision(int x, int y) = 0;
};

#endif
