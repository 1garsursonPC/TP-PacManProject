#include "NotifierCollision.h"
#include "personnage.h"
#include "ObserverCollision.h"


void NotifierCollision::notify(int x, int y)
{
    for(int i=0;i<bob.size();i++){
        bool verif =bob[i]->test_collision(x,y);

        if (verif==true)
        {
            bob[i]->collision(*this);
        }
    }


}


void NotifierCollision::addObserver(ObserverCollision* obs){
    bob.push_back(obs);
}



void NotifierCollision::removeObserver(ObserverCollision* obs){
    bob.pop_back();
}


