#include "ObserverCollision.h"
#include "NotifierCollision.h"

class Ennemis : public ObserverCollision, public NotifierCollision
{
public:
	void virtual new_pos() = 0;
	void deplacer(int x, int y);
	
	void collision(NotifierCollision& notifieur);
	bool test_collision(int x, int y);
	
protected:
	int pos_x;
	int pos_y;
};

class Clyde : public Ennemis
{
public:
	Clyde();
	void new_pos();
};
