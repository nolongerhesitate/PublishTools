#include "sqlitehelper.h"

#include <QDir>
#include <QSqlError>



SQLiteHelper::SQLiteHelper()
{
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("local.db");
        database.setUserName("PublishTools");
        database.setPassword("123456");
    }
}


void SQLiteHelper::create_table(const QString& sql){
    qDebug()<< QDir::currentPath() << " =============== ";
    if(!database.open()){
        qDebug() << "开启db失败";
        return;}
    else{
        qDebug() << "开启成功";
    }
    QSqlQuery sql_query;
    sql_query.prepare(sql);
    if(!sql_query.exec())
    {
        QSqlError error = database.lastError();
        qDebug() << "Error =========" << error.text() << error.type();
    }
    else
    {
        qDebug() << "Success =========";
    }
    database.close();
}
