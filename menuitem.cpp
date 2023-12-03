#include "menuitem.h"
#include <QTextDocument>

// implement constructor
MenuItem::MenuItem(QPushButton* id, const QString name, double price){
    ID = id;
    Name = name;
    Price = price;
}

// implement gets
QPushButton* MenuItem::get_ID(){
    return ID;
}
double MenuItem::get_price(){
    return Price;
}
QString MenuItem::get_name(){
    QTextDocument textDocument;
    textDocument.setHtml(Name);
    return textDocument.toPlainText();
}
