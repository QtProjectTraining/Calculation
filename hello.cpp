#include "hello.h"

hello::hello(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

hello::~hello()
{

}
void hello::jisuan()
{
	bool ok;
	QString tempStr;
	QString valueStr = this->ui.textEdit->toPlainText();
	int valueInt = valueStr.toInt();
	double area = valueInt *valueInt *3.14;
	ui.label_3->setText(tempStr.setNum(area));
}