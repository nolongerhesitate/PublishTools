#ifndef SQLITEHELPER_H
#define SQLITEHELPER_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <qdebug.h>
#include <QSqlQuery>

class SQLiteHelper
{
public:
    SQLiteHelper();

    void create_table(const QString& sql);

private:
   QSqlDatabase database;
};

#endif // SQLITEHELPER_H
