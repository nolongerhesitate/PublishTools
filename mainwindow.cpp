#include "mainwindow.h"
#include "sqlitehelper.h"
#include "ui_mainwindow.h"

#include <QXmlStreamReader>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建表
    if(!sql.is_table_exist(sql.config_tablename())){ // 判断配置表是否一存在，不存在创建并插入初始数据
        sql.create_table("CREATE TABLE 'config' ( 'id'	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE, 'key' TEXT NOT NULL UNIQUE,'value' TEXT  )");
        sql.insert_execute("INSERT INTO config (key, value) VALUES( 'path','')");
        sql.insert_execute("INSERT INTO config (key, value) VALUES( 'version','0.0.0.0')");
        sql.insert_execute("INSERT INTO config (key, value) VALUES( 'url','http://localhost/downloads/update.zip')");
        sql.insert_execute("INSERT INTO config (key, value) VALUES( 'changelog','http://localhost/downloads/update.html')");
        sql.insert_execute("INSERT INTO config (key, value) VALUES( 'mandatory','')");
    }
    ui->pathLineEdit->setText(sql.get_single_config("path"));
    ui->versionLineEdit->setText(sql.get_single_config("version"));
    ui->urlLineEdit->setText(sql.get_single_config("url"));
    ui->changelogLineEdit->setText(sql.get_single_config("changelog"));
    ui->mandatoryCheckBox->setChecked("true" == sql.get_single_config("mandatory"));
    this->setWindowTitle("发版小工具(PublishTool)");
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
    fileDialog->setFileMode(QFileDialog::Directory);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    sql.update_single_config("path", fileDialog->getExistingDirectory());
    ui->pathLineEdit->setText(sql.get_single_config("path"));
}


void MainWindow::on_buildBtn_clicked()
{
    QDir dir(sql.get_single_config("path"));
    QString filename = dir.absoluteFilePath("Version.xml");
   QFile file(filename);
   QXmlStreamReader reader;
   reader.setDevice(&file);
   if(file.exists()){ // 文件已存在
       if(!file.open(QFile::ReadWrite)){
           QMessageBox::critical(this,"错误","无法打开:"+filename);
           return;
       }

       while(!reader.atEnd()){
           if(reader.isStartElement()){
               qDebug()<<"+++++"<< reader.name()<<endl;
           }else {
            reader.readNext();
}
       }
   }else {
       if(!file.open(QFile::WriteOnly)){
           QMessageBox::critical(this,"错误","无法创建:"+filename);
           return;
       }
    }
}

// 保存修改
void MainWindow::on_savePushButton_clicked()
{
    if(sql.update_single_config("path",ui->pathLineEdit->text()) &&
            sql.update_single_config("version",ui->versionLineEdit->text()) &&
            sql.update_single_config("url",ui->urlLineEdit->text()) &&
            sql.update_single_config("changelog",ui->changelogLineEdit->text()) &&
            sql.update_single_config("mandatory",ui->mandatoryCheckBox->isChecked()?"true":"false")){
        QMessageBox::information(this,"成功","保存成功!");
    }else {
        QMessageBox::warning(this,"失败","有项目保存失败!");
    }
}
