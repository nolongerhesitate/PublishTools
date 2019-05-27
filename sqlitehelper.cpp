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
    sql_query = QSqlQuery(database);
}


void SQLiteHelper::create_table(const QString& sql){
    if(!database.open()){
        qDebug() << "开启db失败";
        return;}
    else{
        qDebug() << "开启成功";
    }
    sql_query.prepare(sql);
    if(!sql_query.exec()) //执行SQL语句
    {
        QSqlError error = database.lastError();
    }
    else
    {
    }
    database.close();
}


QSqlQuery SQLiteHelper::query_execute(const QString &sql){
    if(!database.open()){
        qDebug() << "开启db失败";
    }else {
        sql_query.prepare(sql);
        sql_query.exec(sql);
        database.close();
    }
    return sql_query;
}


bool SQLiteHelper::insert_execute(const QString &sql){
    if(!database.open()){
        qDebug()<< "开启失败";
        return false;
    }
    else {
        sql_query.prepare(sql);
        bool r = sql_query.exec(sql);
        database.close();
        return r;
    }
}

QString SQLiteHelper::get_single_config(const QString &key){
    if(!database.open()){
        qDebug()<<"开启失败";
    }else {
        sql_query.prepare("select value from config where key = '"+key+"'");
        sql_query.exec();
        if(sql_query.next())
            return sql_query.value(0).toString();
        //        sql_query.finish(); //通常不用使用此函数，有助于释放锁或者游标等资源
    }
    return "";
}

bool SQLiteHelper::is_table_exist(const QString &tablename){
    if(database.open()){
        sql_query.prepare("SELECT count(*) FROM sqlite_master WHERE type='table' AND name = '"+tablename+"'");
        sql_query.exec();
        if(sql_query.next())
            return sql_query.value(0).toInt() > 0;
    }
    return false;
}

bool SQLiteHelper::update_single_config(const QString &key, const QString &value){
    if(database.open()){
        sql_query.prepare("UPDATE config SET value='"+value+"' WHERE key = '"+key+"';");
        return sql_query.exec();
    }
    return false;
}


