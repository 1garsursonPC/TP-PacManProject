#include "mainwindow.h"
#include <string>
#include <QApplication>
#include <exception>

class ExceptionSizeTab : std::exception
{
};

bool deplacer_personnage(int &x,int &y ,std::string cmd);
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);

int main(int argc, char *argv[])
{





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
    if(cmd=="RIGHT"){
        x++;
    }
    else if(cmd=="DOWN"){
        y++;
    }
    else if(cmd=="LEFT"){
        x--;
    }
    else if(cmd=="UP"){
        y--;
    }
    else if(cmd=="IDLE"){

    }


}

