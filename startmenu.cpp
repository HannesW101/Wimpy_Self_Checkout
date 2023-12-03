#include "startmenu.h"
#include "ui_startmenu.h"
#include "menuitem.h"
#include <QFontDatabase>
#include <vector>
#include <QLabel>

// global variables
QString museoSans900;
QString museoSlab900;
// list of all items on the menu
std::vector<MenuItem> ListOfItems;
// list of all items in the cart
std::vector<MenuItem> CartList;

// setting the side bar
void set_sidebar_to_default(Ui::StartMenu* ui){
    // sidebar
    ui->pBbreakfast->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                  "QPushButton:hover{background-color:white; color:black}");
    ui->pBlightMeals->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                   "QPushButton:hover{background-color:white; color:black}");
    ui->pBburgers->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                "QPushButton:hover{background-color:white; color:black}");
    ui->pBfamousGrills->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                     "QPushButton:hover{background-color:white; color:black}");
    ui->pBsharingMeals->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                     "QPushButton:hover{background-color:white; color:black}");
    ui->pBkids->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                             "QPushButton:hover{background-color:white; color:black}");
    ui->pBdesserts->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                 "QPushButton:hover{background-color:white; color:black}");
    ui->pBcoffeemore->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                   "QPushButton:hover{background-color:white; color:black}");
    ui->pByummydrinks->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; font-size:20px; border:none; background-color:rgb(163,34,23);}"
                                                                                    "QPushButton:hover{background-color:white; color:black}");
}
// styling the various pages
void setup_breakfast_page_styles(Ui::StartMenu* ui){
    ui->lblBreakfastText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText4->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText5->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText6->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText7->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText8->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText9->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText10->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText11->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText12->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBreakfastText13->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_lightMeals_page_styles(Ui::StartMenu* ui){
    ui->lblLightmealsText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblLightmealsText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblLightmealsText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_burgers_page_styles(Ui::StartMenu* ui){
    ui->lblBurgersText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBurgersText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblBurgersText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_grills_page_styles(Ui::StartMenu* ui){
    ui->lblGrillsText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblGrillsText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblGrillsText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_sharingMeals_page_styles(Ui::StartMenu* ui){
    ui->lblSharingMealsText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblSharingMealsText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblSharingMealsText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_kids_page_styles(Ui::StartMenu* ui){
    ui->lblKidsText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblKidsText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblKidsText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_desserts_page_styles(Ui::StartMenu* ui){
    ui->lblDessertsText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblDessertsText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblDessertsText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_coffeeMore_page_styles(Ui::StartMenu* ui){
    ui->lblCoffeeMoreText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblCoffeeMoreText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblCoffeeMoreText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
void setup_yummyDrinks_page_styles(Ui::StartMenu* ui){
    ui->lblYummyDrinksText1->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblYummyDrinksText2->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblYummyDrinksText3->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
}
// adding items to ListOfItems (also used to populate prices / style them and also adding ID to each object)
void add_breakfast_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {44.90, 52.90, 56.90, 59.90, 62.90, 64.90, 69.90, 72.90, 74.90, 74.90, 86.90, 99.90, 99.90};

    // loop through all labels
    for (int i = 0; i < 13; i++) {
        // Create label name dynamically
        QString labelText = "lblBreakfastText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->breakfastPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBBreakfast" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->breakfastPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblBreakfastTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->breakfastPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_lightMeals_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {59.90,72.90,79.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblLightmealsText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->lightMealsPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBLightmeals" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->lightMealsPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent,label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblLightMealsTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->lightMealsPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_burgers_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {59.90,72.90,79.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblBurgersText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->burgersPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBBurgers" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->burgersPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblBurgersTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->burgersPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_grills_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {74.90,129.90,229.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblGrillsText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->famousGrillsPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBGrills" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->famousGrillsPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblGrillsTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->famousGrillsPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_sharingMeals_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {169.90,249.90,269.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblSharingMealsText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->SharingMealsPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBSharingMeals" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->SharingMealsPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblSharingMealsTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->SharingMealsPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_kids_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {59.90,69.90,34.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblKidsText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->KidsPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBKidsText" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->KidsPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblKidsTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->KidsPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_desserts_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {46.90,56.90,62.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblDessertsText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->DessertsPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBDesserts" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->DessertsPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblDessertsTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->DessertsPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_coffeeMore_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {25.90,49.90,32.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblCoffeeMoreText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->coffeeMorePage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBCoffeeMore" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->coffeeMorePage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblCoffeeMoreTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->coffeeMorePage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
void add_yummyDrinks_items_to_list(Ui::StartMenu* ui) {
    // vector of prices
    std::vector<double> prices = {49.90,49.90,54.90};

    // loop through all labels
    for (int i = 0; i < 3; i++) {
        // Create label name dynamically
        QString labelText = "lblYummyDrinksText" + QString::number(i+1);
        // Access the label by name
        QLabel* label_text = ui->YummyDrinksPage->findChild<QLabel*>(labelText);

        // Create button name dynamically
        QString btnText = "pBYummyDrinks" + QString::number(i+1);
        // Access the button by name
        QPushButton* btnCurrent = ui->YummyDrinksPage->findChild<QPushButton*>(btnText);

        // create menu item object with parameters relating to that object
        MenuItem menuitem(btnCurrent, label_text->text(), prices[i]);
        // add object to the list of objects
        ListOfItems.push_back(menuitem);

        // create label price dynamically
        QString labelPrice = "lblYummyDrinksTextPrice" + QString::number(i+1);
        // access the label by name (corrected to use labelPrice)
        QLabel* label_price = ui->YummyDrinksPage->findChild<QLabel*>(labelPrice);
        // setting the price on the label
        label_price->setText("R " + QString::number(prices[i], 'f', 2));

        // styling the lbl to display price
        label_price->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    }
}
// function to display items on checkout page
void display_checkout(Ui::StartMenu* ui) {
    // set the list widgets so the user cannot select items and scroll
    ui->lWcheckout->clear();
    ui->lWcheckoutPrices->clear();

    ui->lWcheckout->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->lWcheckout->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->lWcheckoutPrices->setSelectionMode(QAbstractItemView::NoSelection);
    ui->lWcheckoutPrices->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->lWcheckoutPrices->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QHash<QString, int> itemCounts; // Hash to store item counts
    QHash<QString, double> itemPrices; // Hash to store total prices for each item

    double sum = 0.00;

    if (CartList.size() == 0) {
        ui->lWcheckout->addItem("Cart is Empty");
    } else {
        // Count occurrences and calculate total prices
        for (auto& item : CartList) {
            QString itemName = item.get_name();
            double itemPrice = item.get_price();
            itemCounts[itemName]++;
            itemPrices[itemName] += itemPrice;
            sum += itemPrice;
        }

        // Display items with counts and total prices
        for (const QString& itemName : itemCounts.keys()) {
            int count = itemCounts[itemName];
            double totalPrice = itemPrices[itemName];

            QString itemDisplay = QString("%1 x%2").arg(itemName).arg(count);

            // Display item in lWcheckout
            ui->lWcheckout->addItem(itemDisplay);
            ui->lWcheckout->addItem(" ");

            // Display total price in lWcheckoutPrices
            QString itemPriceDisplay = QString("R%1").arg(QString::number(totalPrice, 'f', 2));
            ui->lWcheckoutPrices->addItem(itemPriceDisplay);
            ui->lWcheckoutPrices->addItem(" ");
        }
    }

    ui->lblCheckoutTotalAmount->setText("R " + QString::number(sum, 'f', 2));
}

StartMenu::StartMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartMenu)
{
    ui->setupUi(this);

    // set the start page as the first page
    ui->sWpages->setCurrentWidget(ui->startPage);

    // setting custom font for museoSans900
    int museoSans900Id = QFontDatabase::addApplicationFont(":/fonts/MuseoSans-900.ttf");
    museoSans900 = QFontDatabase::applicationFontFamilies(museoSans900Id).at(0);
    // setting custom font for museoSlab900
    int museoSlab900Id = QFontDatabase::addApplicationFont(":/fonts/Museo Slab W00 900.ttf");
    museoSlab900 = QFontDatabase::applicationFontFamilies(museoSlab900Id).at(0);

    // start page
    ui->pBstartOrder->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; border-radius:30px; border:3px solid white;}""QPushButton:hover{background-color:rgb(163,34,23);}");
    ui->lblHeading->setStyleSheet("font-family: '" + museoSlab900 + "'; border:none; color:rgb(219,31,36); font-size:64px;");
    ui->lblsubHeading->setStyleSheet("font-family: '" + museoSans900 + "'; border:none; color:black; font-size:32px;");

    // checkout bar
    ui->lblCheckout->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:15px;");
    ui->lblHeadingCheckout->setStyleSheet("font-family: '" + museoSlab900 + "'; border:none; color:white; font-size:64px;");
    ui->lblCounter->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:11px;");

    // checkout page
    ui->lWcheckout->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:20px; border-right:none; background-color:rgb(163,34,23); padding-top:7px;");
    ui->lWcheckoutPrices->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:20px; border-left:none; background-color:rgb(163,34,23); padding-top:7px;");
    ui->lblCheckoutTotalText->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:20px; border-right:none; background-color:rgb(163,34,23);");
    ui->lblCheckoutTotalAmount->setStyleSheet("font-family: '" + museoSans900 + "'; color:white; font-size:20px; border-left:none; background-color:rgb(163,34,23);");
    ui->pBpay->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; border-radius:30px; border:3px solid white;}""QPushButton:hover{background-color:rgb(163,34,23);}");
    ui->pBbacktomenu->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "'; color:white; border-radius:30px; border:3px solid white;}""QPushButton:hover{background-color:rgb(163,34,23);}");

    // call function to set sidebar to default
    set_sidebar_to_default(ui);

    // call function to setup page styles for different food pages
    setup_breakfast_page_styles(ui);
    setup_lightMeals_page_styles(ui);
    setup_burgers_page_styles(ui);
    setup_grills_page_styles(ui);
    setup_sharingMeals_page_styles(ui);
    setup_kids_page_styles(ui);
    setup_desserts_page_styles(ui);
    setup_coffeeMore_page_styles(ui);
    setup_yummyDrinks_page_styles(ui);

    // call functions to add items to  (also updates prices / styles)
    add_breakfast_items_to_list(ui);
    add_lightMeals_items_to_list(ui);
    add_burgers_items_to_list(ui);
    add_grills_items_to_list(ui);
    add_sharingMeals_items_to_list(ui);
    add_kids_items_to_list(ui);
    add_desserts_items_to_list(ui);
    add_coffeeMore_items_to_list(ui);
    add_yummyDrinks_items_to_list(ui);

    // connecting all buttons to the same signal (this will be used to add items to cart)
    for (unsigned long long i = 0; i < ListOfItems.size(); i++) {
        connect(ListOfItems[i].get_ID(), &QPushButton::clicked, [this, i]() {
            handleButtonClick(ListOfItems[i]);
        });
    }
}

StartMenu::~StartMenu()
{
    delete ui;
}

// button to go from start page to order page
void StartMenu::on_pBstartOrder_clicked()
{
    ui->sWpages->setCurrentWidget(ui->orderPage);
    ui->sWmenu->setCurrentWidget(ui->breakfastPage);
    ui->pBbreakfast->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
}

// breakfast button
void StartMenu::on_pBbreakfast_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->breakfastPage);
}

// light meals button
void StartMenu::on_pBlightMeals_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->lightMealsPage);
}

// burgers button
void StartMenu::on_pBburgers_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->burgersPage);
}

// famous grills
void StartMenu::on_pBfamousGrills_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->famousGrillsPage);
}

// sharing meals button
void StartMenu::on_pBsharingMeals_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->SharingMealsPage);
}

// kids button
void StartMenu::on_pBkids_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->KidsPage);
}

// desserts button
void StartMenu::on_pBdesserts_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->DessertsPage);
}

// coffee & more button
void StartMenu::on_pBcoffeemore_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->coffeeMorePage);
}

// yummy drinks button
void StartMenu::on_pByummydrinks_clicked()
{
    ui->sWmenu->setCurrentWidget(ui->YummyDrinksPage);
}

// what happens when the menu changes
void StartMenu::on_sWmenu_currentChanged(int arg1)
{
    // call function to set sidebar to default
    set_sidebar_to_default(ui);

    // switch to change background color of buttons when they are clicked
    switch (arg1) {
    case 0:
        ui->pBbreakfast->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 1:
        ui->pBlightMeals->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 2:
        ui->pBburgers->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 3:
        ui->pBfamousGrills->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 4:
        ui->pBsharingMeals->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 5:
        ui->pBkids->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 6:
        ui->pBdesserts->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 7:
        ui->pBcoffeemore->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    case 8:
        ui->pByummydrinks->setStyleSheet("QPushButton {font-family: '" + museoSans900 + "';color:black; font-size:20px; border:none; background-color:white;}");
        break;
    }
}

// slot to add items to cart (also update number of items in the cart)
void StartMenu::handleButtonClick(MenuItem currentItem){
    CartList.push_back(currentItem);

    double sum = 0.00;
    for (auto it = CartList.begin(); it != CartList.end(); it++){
        sum += it->get_price();
    }
    ui->lblCheckout->setText("R " + QString::number(sum,'f',2));
    ui->lblCounter->setText(QString::number(CartList.size()));
}

// button to go from order page to checkout page
void StartMenu::on_pBCheckout_clicked()
{
    ui->sWpages->setCurrentWidget(ui->CheckoutPage);
    display_checkout(ui);
}

// button to remove from cart after double click on checkout page
void StartMenu::on_lWcheckout_itemDoubleClicked(QListWidgetItem *item)
{
    QString itemText = item->text();
    // Extract the name before the "x" (trimming spaces at the end)
    QString itemName = itemText.split('x').at(0).trimmed();

    for (auto it = CartList.begin(); it != CartList.end(); ) {
        if (it->get_name() == itemName) {
            it = CartList.erase(it);  // Erase the element and get the next iterator
            break;
        } else {
            ++it;
        }
    }

    ui->lWcheckout->clear();
    ui->lWcheckoutPrices->clear();

    display_checkout(ui);
}

// button to go from checkout page to order page
void StartMenu::on_pBbacktomenu_clicked()
{
    ui->sWpages->setCurrentWidget(ui->orderPage);

    double sum = 0.00;
    for (auto it = CartList.begin(); it != CartList.end(); it++){
        sum += it->get_price();
    }
    ui->lblCheckout->setText("R " + QString::number(sum,'f',2));
    ui->lblCounter->setText(QString::number(CartList.size()));
}

