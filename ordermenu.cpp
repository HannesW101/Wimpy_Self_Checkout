#include "ordermenu.h"
#include "ui_ordermenu.h"

OrderMenu::OrderMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrderMenu)
{
    ui->setupUi(this);
}

OrderMenu::~OrderMenu()
{
    delete ui;
}
