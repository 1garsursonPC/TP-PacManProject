#include "ObserverCollision.h"
#include <vector>

class NotifierCollision
{
private:
  std::vector<ObserverCollision> bob;
public:
	void addOberver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);
	void notify(int x, int y);
};
