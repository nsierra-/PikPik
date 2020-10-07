#include "PikWindow.h"
#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[ ])
{
	QApplication app(argc, argv);
	PikWindow window;

	window.showMaximized();
	return app.exec();
}