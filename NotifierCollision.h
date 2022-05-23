#include "ObserverCollision.h"

class NotifierCollision
{
public:
	void addOberver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);
	void notify(int x, int y);
};
