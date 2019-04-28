#include "mainwindow.h"
#include "sqlitehelper.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SQLiteHelper sql;
    sql.create_table("create table student (id int primary key, name varchar(30), age int)");

   CREATE TABLE "config" (
    "id"	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
    "key"	TEXT NOT NULL UNIQUE,
    "value"	TEXT
);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //定义文件对话框类
    QFileDialog *fileDialog = new QFileDialog(this);
    //定义文件对话框标题
    fileDialog->setWindowTitle(tr("选择配置文件"));
    //设置默认文件路径
//    fileDialog->setDirectory(".");
    //设置文件过滤器
    fileDialog->setNameFilter(tr("xml(*.xml)"));
    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    fileDialog->open();
}


void MainWindow::on_buildBtn_clicked()
{
    QFile file("./debug/Version.xml");
    if(!file.open(QIODevice::Text)){
        QMessageBox::warning(this,"error","打开文件失败!");
    }else{
        while (!file.atEnd()) {
               qDebug()<< file.readLine();
        }
    }
    file.close();
}
