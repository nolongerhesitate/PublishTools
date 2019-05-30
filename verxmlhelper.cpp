#include "verxmlhelper.h"

VerXMLHelper::VerXMLHelper()
{

}

void VerXMLHelper::setDevice(QFile *file){
        writer.setDevice(file);
}

void VerXMLHelper::writeVerXml(const QString& version, const QString& url,const QString& changelog,const bool& mandatory){
    if(writer.device() == nullptr){ // 未设置device
        return;
    }
    writer.setAutoFormatting(true);
    writer.writeStartDocument();
    writer.writeStartElement("item");
    writer.writeTextElement("version",version);
    writer.writeTextElement("url",url);
    writer.writeTextElement("changelog",changelog);
    writer.writeTextElement("mandatory",mandatory?"true":"false");
    writer.writeEndElement();
    writer.writeEndDocument();
}
