#include "PikWindow.h"
#include <QDebug>

PikWindow::PikWindow()
{
	setAttribute(Qt::WA_AcceptTouchEvents);
}

bool PikWindow::event(QEvent *event)
{
	switch (event->type())
	{
		case QEvent::TouchBegin:
		case QEvent::TouchUpdate:
		case QEvent::TouchEnd:
			return touchEvent(static_cast<QTouchEvent *>(event));

		default:
			break ;
	}

	return true;
}

bool PikWindow::touchEvent(QTouchEvent *event)
{
	qDebug() << "Touch Event";

	QList<QTouchEvent::TouchPoint> touchPoints = event->touchPoints();

	for (QTouchEvent::TouchPoint touchPoint : touchPoints)
		qDebug() << "\tPoint " << touchPoint.id() << touchPoint.pos();

	qDebug() << "\n";
	return true;
}