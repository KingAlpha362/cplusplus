
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
            {
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
            
            int tier;
            double discount_rate = 0;
            string tier_name = "None";

            cout << "Enter tier (1=Gold, 2=Silver, 3=Bronze)" << endl;
            cin >> tier;

            switch (tier) {
                case 1:
                    discount_rate = 0.20; tier_name = "Gold"; break;
                case 2:
                    discount_rate = 0.30; tier_name = "Silver"; break;
                case 3:
                    discount_rate = 0.05; tier_name = "Bronze"; break;
                default:
                    cout << "Invalid, try again." << endl;
            }

            double discount = subtotal * discount_rate;
            double total = subtotal - discount;

            cout << fixed << setprecision(2);
            cout << "\n========== Payment Summary ==========" << endl;
            cout << "Item: " << item << endl;
            cout << "Combo deal Quantity: " << quantity << endl;
            cout << "Tier: " << tier << endl;
            cout << "Discount: " << discount << endl;
            cout << "Amount due: R" << total << endl;

            break;
            }
        case 2:
            cout << "Option 2 selected" << endl;
            break;
        case 3:
            cout << "Option 3 selected." << endl;
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid, try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

