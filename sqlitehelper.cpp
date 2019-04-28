#include "sqlitehelper.h"



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


void SQLiteHelper::create_table(QString sql){
    if(!database.open()){
        qDebug() << "开启db失败";
        return;}
    QSqlQuery sql_query;
    sql_query.prepare(sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error =========";
    }
    else
    {
        qDebug() << "Success =========";
    }
    database.close();
}
