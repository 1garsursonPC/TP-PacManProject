#include "personnage.h"

void Personnage::setDeplacement(std::string dplmt)
{
    this->dplmt = dplmt;
    notify(pos_x, pos_y);
}

void Personnage::new_pos(int x, int y)
{
	pos_x = x;
	pos_y = y;
}

void Personnage::key_pressed(char key)
{
    if (key == 'z')
        dplmt = "UP";
    else if (key == 's')
        dplmt = "DOWN";
    else if (key == 'q')
        dplmt = "LEFT";
    else if (key == 'd')
        dplmt = "RIGHT";
    else
        dplmt = "IDLE";
}

void Personnage::arrow_pressed(std::string cmd)
{
    const int xmin=0;
    const int xmax=32;
    const int ymin=0;
    const int ymax=15;


    if(cmd=="RIGHT"){
        if (pos_x!=xmax){
            pos_x++;
        }

    }
    else if(cmd=="DOWN"){
        if(pos_y!=ymax){
            pos_y++;
        }
    }
    else if(cmd=="LEFT"){
        if(pos_x!=xmin){
            pos_x--;
        }

    }
    else if(cmd=="UP"){
        if(pos_y!=ymin){
            pos_y--;
        }
    }
    else if(cmd=="IDLE"){
    }

}

Personnage::Personnage(int x, int y, Background * background)
    :     Interactive(pos_x, pos_y, background)
{
    pos_x = x;
    pos_y = y;
    background->set_background_image("images/pacman_dr_1");
}

void Personnage::update_pos()
{
    arrow_pressed(dplmt);
}
