#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int choice;
    
    do {

        cout << "===== CANTEEN KIOSK =====" << endl;
        cout << "1. Calculate meal cost" << endl;
        cout << "2. View nutrition summary" << endl;
        cout << "3. Enter calorie log" << endl;
        cout << "4. Exit: " << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch (choice) {

            case 1: 

            double main_meal = 45.00;
            double snack = 18.00;
            double beverage = 12.00;
            double combo_deal = 65.00;
            
            char category;
            int quantity;
            double price = 0;
            string item;

            cout << "\n-- Meal Category" << endl;
            cout << "A. Main meal (R45.00)" << endl;
            cout << "B. Snack (R18.00)" << endl;
            cout << "C. Beverage (R12.00)" << endl;
            cout << "D. Combo deal (R65.00)" << endl;
            cout << "Enter category" << endl;
            cin >> category;

            switch (toupper(category)) {
                case 'A': price = main_meal; item = "main meal"; break;
                case 'B': price = snack; item = "Snack"; break;
                case 'C': price = beverage; item = "Beverage"; break;
                case 'D': price = combo_deal; item = "Combo deal"; break;
                default:
                cout << "Invalid category." << endl;
                break;
            }
            do {
                cout << "Entery quantity (1-10: )" << endl;
                cin >> quantity;
            } while (quantity < 1 || quantity > 10);

            double subtotal = price * quantity;
        }
    }
}

