#ifndef PIKWINDOW_H
# define PIKWINDOW_H

# include <QWidget>
# include <QEvent>
# include <QTouchEvent>

class PikWindow : public QWidget
{
	public:
		PikWindow();

		bool touchEvent(QTouchEvent *event);
		bool event(QEvent *event);
};

#endif // PIKWINDOW_H