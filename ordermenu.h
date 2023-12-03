#ifndef ORDERMENU_H
#define ORDERMENU_H

#include <QMainWindow>

namespace Ui {
class OrderMenu;
}

class OrderMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrderMenu(QWidget *parent = nullptr);
    ~OrderMenu();

private:
    Ui::OrderMenu *ui;
};

#endif // ORDERMENU_H
