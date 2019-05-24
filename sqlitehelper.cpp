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
    if(!database.open()){
        qDebug() << "开启db失败";
        return;}
    else{
        qDebug() << "开启成功";
    }
    QSqlQuery sql_query;
    sql_query.prepare(sql);
    if(!sql_query.exec()) //执行SQL语句
    {
        QSqlError error = database.lastError();
        qDebug() << "Error =========" << error.text() << "qeuer error:" << sql_query.lastError().text() << error.type();
    }
    else
    {
        qDebug() << "Success =========";
    }
    sql_query.finish();
    database.close();
}


QSqlQuery SQLiteHelper::query_execute(const QString &sql){
    QSqlQuery sql_query;
    if(!database.open()){
        qDebug() << "开启db失败";
    }else {
        sql_query.prepare(sql);
        sql_query.exec(sql);
        sql_query.finish();
        database.close();
    }
    return sql_query;
}


bool SQLiteHelper::insert_execute(const QString &sql){
    QSqlQuery sql_query;
    if(!database.open()){
        qDebug()<< "开启失败";
        return false;
    }
    else {
        sql_query.prepare(sql);
        bool r = sql_query.exec(sql);
        sql_query.finish();
        database.close();
        return r;
    }
}
