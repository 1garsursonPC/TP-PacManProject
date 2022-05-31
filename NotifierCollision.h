#pragma once
#include <vector>
class ObserverCollision;
class NotifierCollision
{
private:
  std::vector<ObserverCollision*> bob;
public:
    void addObserver(ObserverCollision* obs);
    void removeObserver(ObserverCollision* obs);
	void notify(int x, int y);
};
