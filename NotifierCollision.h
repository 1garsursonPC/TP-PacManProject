# include 'ObserverCollision.h'

class NotifierCollision
{
public:
	void addOberver(ObserverCollision obs);
	void removeObserver(ObserverCollison obs);
	void notify(int x, int y);
}