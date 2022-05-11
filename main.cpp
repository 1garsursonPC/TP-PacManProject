#include "mainwindow.h"

#include <QApplication>

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
	for (unsigned i = 0; i < nb_ennemis; i++)
	{
		if (ennemis_x[i] == x && ennemis_y[i] == y)
			return true;
	}
	return false;
}

