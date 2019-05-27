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

    QString config_tablename() const{return CONFIG_TABLENAME;}

    // 创建表
    void create_table(const QString& sql);

    // 查询数据
    QSqlQuery query_execute(const QString& sql);

    // 插入数据
    bool insert_execute(const QString& sql);

    // 读取config表的某个值
    QString get_single_config(const QString& key);

    // 更新config表的某个值 执行成功返回true 否则返回false
    bool update_single_config(const QString& key, const QString& value);

    // 判断表是否存在 存在返回true 否则返回false; 参数传递表名
    bool is_table_exist(const QString& tablename);

private:
    QSqlDatabase database;
    QSqlQuery sql_query;
    const QString CONFIG_TABLENAME = "config"; // 配置表表名
};

#endif // SQLITEHELPER_H
