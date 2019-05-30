#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sqlitehelper.h"

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDate>
#include <QFileDialog>
#include <QMessageBox>
#include <qdebug.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_buildBtn_clicked();

    void on_savePushButton_clicked();

    void on_saveAndBuildPushButton_clicked();

    bool save(); // 保存配置

    void build(); //生成xml

private:
    Ui::MainWindow *ui;
    SQLiteHelper sql;
};

#endif // MAINWINDOW_H
