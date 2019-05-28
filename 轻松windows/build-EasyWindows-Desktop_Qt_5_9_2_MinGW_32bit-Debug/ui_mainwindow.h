/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionExport;
    QAction *actionExit_2;
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QPushButton *pushButton_wjj;
    QComboBox *comboBox;
    QComboBox *comboBoxlist;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *tab_9;
    QGraphicsView *graphicsView;
    QLabel *label;
    QWidget *tab_10;
    QWidget *tab_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuWindows;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(930, 477);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QStringLiteral("actionExit_2"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 911, 421));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 50, 75, 23));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 100, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 60, 75, 23));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 110, 75, 23));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 160, 75, 23));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 210, 75, 23));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(60, 260, 121, 31));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pushButton_wjj = new QPushButton(tab_8);
        pushButton_wjj->setObjectName(QStringLiteral("pushButton_wjj"));
        pushButton_wjj->setGeometry(QRect(760, 40, 41, 23));
        comboBox = new QComboBox(tab_8);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(300, 40, 441, 21));
        comboBoxlist = new QComboBox(tab_8);
        comboBoxlist->setObjectName(QStringLiteral("comboBoxlist"));
        comboBoxlist->setGeometry(QRect(120, 40, 161, 22));
        radioButton = new QRadioButton(tab_8);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 50, 89, 16));
        radioButton_2 = new QRadioButton(tab_8);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 80, 89, 16));
        radioButton_3 = new QRadioButton(tab_8);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 110, 89, 16));
        radioButton_4 = new QRadioButton(tab_8);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(0, 140, 89, 16));
        radioButton_5 = new QRadioButton(tab_8);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(0, 170, 89, 16));
        radioButton_6 = new QRadioButton(tab_8);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(0, 200, 89, 16));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        graphicsView = new QGraphicsView(tab_9);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(190, 30, 411, 231));
        label = new QLabel(tab_9);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 601, 31));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tabWidget->addTab(tab_10, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 930, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuWindows = new QMenu(menuBar);
        menuWindows->setObjectName(QStringLiteral("menuWindows"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuWindows->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExit_2);
        menuHelp->addAction(action_2);
        menuHelp->addAction(action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        actionExport->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\351\205\215\347\275\256", Q_NULLPTR));
        actionExit_2->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\346\226\271\346\263\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "dism++", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "diskgenius", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\273\264\346\212\244", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "diskgenius", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "hdtune", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "sniffer", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "everything", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\350\207\252\345\274\200\345\217\221\346\243\200\346\237\245\346\226\207\344\273\266\346\225\260Py", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\216\257\345\242\203\347\273\264\346\212\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\347\241\254\347\233\230\347\273\264\346\212\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\265\204\346\226\231\347\273\264\346\212\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\273\264\346\212\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\347\224\237\346\200\201\347\273\264\346\212\244", Q_NULLPTR));
        pushButton_wjj->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C:/", Q_NULLPTR)
        );
        comboBoxlist->clear();
        comboBoxlist->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "dism++", Q_NULLPTR)
         << QApplication::translate("MainWindow", "diskgenius", Q_NULLPTR)
        );
        radioButton->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\273\264\346\212\244", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203\347\273\264\346\212\244", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "\347\241\254\347\233\230\347\273\264\346\212\244", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "\350\265\204\346\226\231\347\273\264\346\212\244", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\273\264\346\212\244", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("MainWindow", "\347\224\237\346\200\201\347\273\264\346\212\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\351\205\215\347\275\256\347\273\264\346\212\244", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\246\202\346\236\234\345\270\246\345\223\245\345\226\234\346\254\242\350\277\231\344\270\252\350\275\257\344\273\266\357\274\214\345\217\257\344\273\245\350\265\204\345\212\251\346\210\221\347\202\271\347\203\202\351\222\261\345\216\273\344\271\260\346\224\257\346\277\200\345\205\211\347\254\224\345\260\204\345\255\231\347\213\227", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "\350\265\236\345\212\251", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\351\241\265", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menuWindows->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
