#ifndef DIALOG_H
#define DIALOG_H

#include <QtXml/QDomElement>
#include <QDialog>
#include <QtWidgets>

namespace Ui {
class Dialog;
}
class QTreeWidgetItem;
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void listDom(QDomElement& docElem, QTreeWidgetItem* pItem);
    void openXML(QString fileName);

    ~Dialog();

private:
    Ui::Dialog *ui;
private slots:
    void openFile();
    void showEdit();

};

#endif // DIALOG_H
