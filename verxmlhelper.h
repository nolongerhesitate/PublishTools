#ifndef VERXMLHELPER_H
#define VERXMLHELPER_H

#include <QFile>
#include <QXmlStreamReader>
#include <qdebug.h>


namespace Helper {
class VerXMLHelper;
}

// VersionXML 读取帮助文件
class VerXMLHelper
{
public:
    VerXMLHelper();

    void setDevice(QFile* file);

    void writeVerXml(const QString& version, const QString& url,const QString& changelog,const bool& mandatory);

private:
    // 跳过未知元素
//    void skipUnknownElement();

private :
    QXmlStreamWriter writer;
};

#endif // VERXMLHELPER_H
