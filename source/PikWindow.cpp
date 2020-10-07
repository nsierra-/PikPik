#include "PikWindow.h"
#include <iostream>

bool PikWindow::event(QEvent *event)
{
	switch (event->type())
	{
		case QEvent::TouchBegin:
		case QEvent::TouchUpdate:
		case QEvent::TouchEnd:
		{
			break ;
		}
		default:
			break ;
	}
	(void)event;
	std::cout << "Wesh" << std::endl;
	return true;
}