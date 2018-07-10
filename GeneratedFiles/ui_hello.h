/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *helloClass)
    {
        if (helloClass->objectName().isEmpty())
            helloClass->setObjectName(QStringLiteral("helloClass"));
        helloClass->resize(600, 456);
        centralWidget = new QWidget(helloClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 155, 81, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 150, 71, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 150, 151, 41));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Sunken);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 150, 121, 41));
        textEdit->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 222, 121, 41));
        pushButton->setFont(font);
        helloClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(helloClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(helloClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(helloClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        helloClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(helloClass);
        QObject::connect(pushButton, SIGNAL(clicked()), helloClass, SLOT(jisuan()));

        QMetaObject::connectSlotsByName(helloClass);
    } // setupUi

    void retranslateUi(QMainWindow *helloClass)
    {
        helloClass->setWindowTitle(QApplication::translate("helloClass", "hello", 0));
        label->setText(QApplication::translate("helloClass", "\345\215\212\345\276\204", 0));
        label_2->setText(QApplication::translate("helloClass", "\351\235\242\347\247\257", 0));
        label_3->setText(QString());
        textEdit->setHtml(QApplication::translate("helloClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("helloClass", "\350\256\241\347\256\227", 0));
        menu->setTitle(QApplication::translate("helloClass", "\345\234\206\351\235\242\347\247\257\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class helloClass: public Ui_helloClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
