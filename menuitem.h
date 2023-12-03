#ifndef MENUITEM_H
#define MENUITEM_H

#include <QString>
#include <QPushButton>

class MenuItem
{
private:
    QPushButton* ID;
    QString Name;
    double Price;
public:
    // constructor
    MenuItem(QPushButton* id, const QString name, double price);
    // gets
    QPushButton* get_ID();
    double get_price();
    QString get_name();
};

#endif // MENUITEM_H
