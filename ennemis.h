#include "ObserverCollision"

class Ennemis : public ObserverCollision
{
public:
	void virtual new_pos() = 0;
	void deplacer(int x, int y);
	
	void collision(NotifierCollision& notifieur);
	bool test_collision(int x, int y);
	
private:
	int pos_x;
	int pos_y;
};

class Clyde : public Ennemis
{
public:
	Clyde();
	void new_pos();
};