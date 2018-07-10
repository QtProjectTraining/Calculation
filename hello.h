#ifndef HELLO_H
#define HELLO_H

#include <QtWidgets/QMainWindow>
#include "ui_hello.h"

class hello : public QMainWindow
{
	Q_OBJECT

public:
	hello(QWidget *parent = 0);
	~hello();
	
private:
	Ui::helloClass ui;
private slots:
    void jisuan();
};

#endif // HELLO_H
