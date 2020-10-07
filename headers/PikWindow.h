#ifndef PIKWINDOW_H
# define PIKWINDOW_H

# include <QWidget>
# include <QEvent>

class PikWindow : public QWidget
{
	public:
		bool event(QEvent *event);
};

#endif // PIKWINDOW_H