#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<pthread.h>
#include<string>
#include<fstream>
#include<iostream>
#include<QCoreApplication>
#include <windows.h>

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <QDebug>
#include <QMessageBox>
//#include "resources.h"
#include <cstdlib>
#include <QTime>
#include <QFileDialog>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#include "QFile"
#include "QSettings"
#include "QProcess"
#include "QKeyEvent"
//#include <stdafx.h>


#include <QWidget>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setWindowTitle(tr("维护工具集"));
    this->setWindowIcon(QIcon("Mywin.ico"));
    ui->setupUi(this);



    this->image = new QImage();

    if(image->load("zanzhu.jpg"))
            {
                QGraphicsScene *scene = new QGraphicsScene;
                scene->addPixmap(QPixmap::fromImage(*image));
                ui->graphicsView->setScene(scene);
                ui->graphicsView->resize(image->width() + 10, image->height() + 10);
                ui->graphicsView->show();
            }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save_ini()
{
    qDebug()<<"save_ini";
}
void MainWindow::on_pushButton_wjj_clicked()
{

    QString dir = QFileDialog::getOpenFileName(this, tr("Open Files"));
     ui->comboBox->setCurrentIndex(ui->comboBox->findText(dir));

     QString nowline =  QString("/Configure/");

             if(!dir.isEmpty())
             {
                 QByteArray dome2 = dir.toLocal8Bit();
                 strcpy(OWNPATH, dome2.data());

                 qDebug()<<dome2.data();


                 //配置
                 QSettings *configIniWrite = new QSettings("./conf.ini", QSettings::IniFormat);


                 if(ui->comboBox->findText(dir)==-1)
                        ui->comboBox->addItem(dir);
                 ui->comboBox->setCurrentIndex(ui->comboBox->findText(dir));

                 QMessageBox mb( "提示",
                         "确认将当前程序路径写入配置\n"
                         "继续?",
                         QMessageBox::Information,
                         QMessageBox::Yes | QMessageBox::Default,
                         QMessageBox::No,
                         QMessageBox::Cancel | QMessageBox::Escape );
                 mb.setButtonText( QMessageBox::Yes, "继续" );
                 mb.setButtonText( QMessageBox::No, "放弃" );
                 mb.setButtonText( QMessageBox::Cancel, "取消" );
                 switch( mb.exec() ) {
                     case QMessageBox::Yes:
                         // 保存并且退出
                        //printf("save");


                        nowline.append(ui->comboBoxlist->currentText());
                        qDebug()<<nowline;
                        qDebug()<<dir;
                        configIniWrite->setValue(nowline, dir);

                        qDebug()<<"sav";
                         break;
                     case QMessageBox::No:
                         // 不保存退出

                        qDebug()<<"Unsav";
                         break;
                     case QMessageBox::Cancel:
                         // 不保存并且不退出
                        qDebug()<<"cancel";

                         break;
                 }
                 //QDebug.putString("finish");
                 qDebug()<<"finish";

             }
             else
             {
                 QMessageBox box(QMessageBox::Information,"消息",QString("未选择")); //"服务开启成功！");
                 box.setStandardButtons (QMessageBox::Ok);
                 box.setButtonText (QMessageBox::Ok,QString("确定"));
                 box.exec ();
             }
}

void MainWindow::on_radioButton_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "dism++");
    ui->comboBoxlist->insertItem(1, "diskgenius");
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "PATH备份还原");
    ui->comboBoxlist->insertItem(1, "Python维护");
    ui->comboBoxlist->insertItem(2, "Java维护");
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "diskgenius");
    ui->comboBoxlist->insertItem(1, "hdtune");
    ui->comboBoxlist->insertItem(2, "sniffer");
    ui->comboBoxlist->insertItem(3, "everything");
    ui->comboBoxlist->insertItem(3, "PyFileCheck");

}

void MainWindow::on_radioButton_4_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "一键备份重要资料");
    ui->comboBoxlist->insertItem(1, "手动文件备份清单");
    ui->comboBoxlist->insertItem(2, "bgo");
    ui->comboBoxlist->insertItem(3, "坚果云");
    ui->comboBoxlist->insertItem(4, "多重备份建议");
    ui->comboBoxlist->insertItem(5, "镜像备份");
    ui->comboBoxlist->insertItem(6, "手机镜像检查");
    ui->comboBoxlist->insertItem(7, "云文件健康检查备份");
    ui->comboBoxlist->insertItem(8, "账号维护");
}

void MainWindow::on_radioButton_5_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "网卡口");
    ui->comboBoxlist->insertItem(1, "电池信息查看battery");
    ui->comboBoxlist->insertItem(2, "拆机装置");
    ui->comboBoxlist->insertItem(3, "本机全部信息");

}

void MainWindow::on_radioButton_6_clicked()
{
    ui->comboBoxlist->clear();
    ui->comboBoxlist->insertItem(0, "不可缺软件清单");
    ui->comboBoxlist->insertItem(1, "常用功能与软件");
    ui->comboBoxlist->insertItem(2, "工程：方法与经验");
}

void MainWindow::on_pushButton_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/dism++").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_pushButton_2_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/diskgenius").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_pushButton_3_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/diskgenius").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_pushButton_4_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/hdtune").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_pushButton_5_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/sniffer").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_pushButton_6_clicked()
{
    QProcess pro;
    QSettings *configIniRead = new QSettings("./conf.ini", QSettings::IniFormat);
    QString strPath = configIniRead->value("/Configure/everything").toString();
    if(strPath != "")
        pro.startDetached(strPath);
}

void MainWindow::on_actionOpen_triggered()
{
    qDebug()<<"open";
}

void MainWindow::on_actionExport_triggered()
{
    QFileDialog fileDialog;

    QString sourceFile = "./conf.ini";
    QString fileName = fileDialog.getSaveFileName(this,"导出配置文件","","文件名(*.ini)");
    if(fileName == "")
    {
        return;
    }

    //////////
    if (sourceFile == fileName){
        return;
    }
    if (!QFile::exists(sourceFile)){
        return;
    }

    QDir *createfile = new QDir;
    bool exist = createfile->exists(fileName);
    bool replaceConfirm = false;
    if (exist){

        QMessageBox mb( "文件冲突",
                "文件检测已存在\n"
                "确认替换?",
                QMessageBox::Information,
                QMessageBox::Yes | QMessageBox::Default,
                QMessageBox::No,
                QMessageBox::Cancel | QMessageBox::Escape );
        mb.setButtonText( QMessageBox::Yes, "确认" );
        mb.setButtonText( QMessageBox::No, "放弃" );
        mb.setButtonText( QMessageBox::Cancel, "取消" );
        switch( mb.exec() ) {
            case QMessageBox::Yes:
                // 保存并且退出
            replaceConfirm = true;
               qDebug()<<"sav";
                break;
            case QMessageBox::No:
                // 不保存退出
               qDebug()<<"Unsav";
                break;
            case QMessageBox::Cancel:
                // 不保存并且不退出
               qDebug()<<"cancel";
                break;
        }

        if(replaceConfirm){
            createfile->remove(fileName);
        }
    }//end if

    if(!QFile::copy(sourceFile, fileName))
    {
        QMessageBox box(QMessageBox::Information,"消息","导出失败，已取消覆盖");
        box.setStandardButtons (QMessageBox::Ok);
        box.setButtonText (QMessageBox::Ok,QString("确定"));
        box.exec ();
        return;
    }
    QMessageBox box(QMessageBox::Information,"消息","导出成功");
    box.setStandardButtons (QMessageBox::Ok);
    box.setButtonText (QMessageBox::Ok,QString("确定"));
    box.exec ();
    qDebug()<<"export";
    return;



}

void MainWindow::on_actionExit_2_triggered()
{
    QApplication::exit();
}

void MainWindow::on_action_triggered()
{
    QMessageBox box(QMessageBox::Information,"关于","开源工具@Silas\n""QQ 673007484");
    box.exec ();
}

void MainWindow::on_action_2_triggered()
{
    QMessageBox box(QMessageBox::Information,"使用方法",
                    "配置文件对应conf.ini\n"
                    "打开维护程序请先配置维护");
    box.exec ();

    ui->tabWidget->setCurrentWidget(ui->tab_8);
}
