#ifndef SQLITEHELPER_H
#define SQLITEHELPER_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <qdebug.h>
#include <QSqlQuery>

namespace Helper {
class SQLiteHelper;
}

class SQLiteHelper
{
public:
    SQLiteHelper();

    // 创建表
    void create_table(const QString& sql);

    // 查询数据
    QSqlQuery query_execute(const QString& sql);

    // 插入数据
    bool insert_execute(const QString& sql);

private:
    QSqlDatabase database;
};

#endif // SQLITEHELPER_H
