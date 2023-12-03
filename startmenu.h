#ifndef STARTMENU_H
#define STARTMENU_H

#include <QMainWindow>
#include "menuitem.h"
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class StartMenu; }
QT_END_NAMESPACE

class StartMenu : public QMainWindow
{
    Q_OBJECT

public:
    StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private slots:
    void on_pBstartOrder_clicked();

    void on_pBbreakfast_clicked();

    void on_pBlightMeals_clicked();

    void on_pBburgers_clicked();

    void on_pBfamousGrills_clicked();

    void on_pBsharingMeals_clicked();

    void on_pBkids_clicked();

    void on_pBdesserts_clicked();

    void on_pBcoffeemore_clicked();

    void on_pByummydrinks_clicked();

    void on_sWmenu_currentChanged(int arg1);

    void handleButtonClick(MenuItem currentItem);

    void on_pBCheckout_clicked();

    void on_lWcheckout_itemDoubleClicked(QListWidgetItem *item);

    void on_pBbacktomenu_clicked();

private:
    Ui::StartMenu *ui;
};
#endif // STARTMENU_H
