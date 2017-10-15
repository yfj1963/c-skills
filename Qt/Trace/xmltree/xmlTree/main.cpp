#include "mainwindow.h"
#include <QApplication>
#include "dialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget();
    Dialog *dlg = new Dialog(window);
    QString file_name  = "d:/xmltree/xmlfile/test1.xml";

    dlg->openXML(file_name);
    window->show();
/*
    QString file_name  = "d:/xmltree/xmlfile/test1.xml";
    if(file_name.isEmpty())
        return 0;

    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(NULL, QString("title"), QString("open!"));

        return 0;
    }

    QDomDocument document;
    QString error;
    int row = 0, column = 0;
    if(!document.setContent(&file, false, &error, &row, &column))
    {
        QMessageBox::information(NULL, QString("title"), QString("parse file failed at line row and column") + QString::number(row, 10) + QString(",") + QString::number(column, 10));

        return 0;
    }

    if(document.isNull())
    {
        QMessageBox::information(NULL, QString("title"), QString("document is null!"));

        return 0 ;
    }

    QDomElement root = document.documentElement();

    //root_tag_name为persons
    QString root_tag_name = root.tagName();
    if(root.hasAttribute("name"))
    {
        //name为Qt
        QString name = root.attributeNode("name").value();
    }

    //获取id="1"的节点
    QDomElement person = root.firstChildElement();
    if(person.isNull())
        return 0 ;

    QString person_tag_name = person.tagName();

    //id为1
    QString id = person.attributeNode("id").value();

    //获取子节点，数目为2
    QDomNodeList list = root.childNodes();
    int count = list.count();
    for(int i=0; i <count; ++i)
    {
        QDomNode dom_node = list.item(i);
        QDomElement element = dom_node.toElement();

        //获取id值，等价
        QString id_1 = element.attributeNode("id").value();
        QString id_2 = element.attribute("id");

        //获取子节点，数目为4，包括：name、age、email、website
        QDomNodeList child_list = element.childNodes();
        int child_count = child_list.count();
        for(int j=0; j <child_count; ++j)
        {
            QDomNode child_dom_node = child_list.item(j);
            QDomElement child_element = child_dom_node.toElement();
            QString child_tag_name = child_element.tagName();
            QString child__tag_value = child_element.text();
        }
    }

    //按照name、age、email、website的顺序获取值
    QDomElement element = person.firstChildElement();
    while(!element.isNull())
    {
        QString tag_name = element.tagName();
        QString tag_value = element.text();
        element = element.nextSiblingElement();
    }*/
    return a.exec();
}
