#include "PikWindow.h"
#include <QApplication>
#include <QtGlobal>
#include "stdio.h"
#include "stdlib.h"

void pikMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	QByteArray localMsg = msg.toLocal8Bit();
	(void)context;

	switch (type)
	{
		case QtFatalMsg:
			fprintf(stderr, "Fatal Error: %s\n", localMsg.constData());
			abort();

		default:
			fprintf(stderr, "%s\n", localMsg.constData());
			break;
	}
}

int main(int argc, char *argv[ ])
{
	qInstallMessageHandler(pikMessageHandler);
	QApplication app(argc, argv);
	PikWindow window;

	window.resize(400, 400);
	window.show();
	return app.exec();
}