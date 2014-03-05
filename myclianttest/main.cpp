#include "myclianttest.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	myclianttest w;
	w.show();
	return a.exec();
}
