#include "mainwindow.h"
#include <string>
#include <QApplication>
#include <exception>
#include <iostream>
#include <personnage.h>

class ExceptionSizeTab : std::exception
{
};

bool deplacer_personnage(int &x,int &y ,std::string cmd);
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);

int main(int argc, char *argv[])
{
    std::string saisie;
    std::getline(std::cin,saisie);
    std::cout << "Vous avez saisi " << saisie << std::endl;
    deplacer_personnage(Personnage.getPos_X(),Personnage.getPos_X(),saisie);




	try
	{
		detecter_collision({0, 45, -2}, {12, 3, 4}, 3, -2, 4);
	}
	catch (ExceptionSizeTab& exception)
	{
		std::cout << "Panic !" << std::endl;
		return -1;
	}

	try
	{
		detecter_collision({0, 45, -2}, {12, 3, 4}, -3, -2, 4);
	}
	catch (ExceptionSizeTab& exception)
	{
		std::cout << "This is fine" << std::endl;
	}





    return 0;
}















bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
	if (nb_ennemis < 0)
	{
		throw ExceptionSizeTab("nb_ennemis négatif");
	}

	for (unsigned i = 0; i < nb_ennemis; i++)
	{
		if (ennemis_x[i] == x && ennemis_y[i] == y)
			return true;
	}
	return false;
}



bool deplacer_personnage(int &x,int &y ,std::string cmd){

    const int xmin=0;
    const int xmax=32;
    const int ymin=0;
    const int ymax=15;


    if(cmd=="RIGHT"){
        if (x!=xmax){
            x++;
            return true;
        }
        else return false;

    }
    else if(cmd=="DOWN"){
        if(y!=ymax){
            y++;
            return true;
        }
        else return false;
    }
    else if(cmd=="LEFT"){
        if(x!=xmin){
            x--;
            return true;
        }
        else return false;

    }
    else if(cmd=="UP"){
        if(y!=ymin){
            y--;
            return true;
        }
        else return false;
    }
    else if(cmd=="IDLE"){
        return false;
    }

}

