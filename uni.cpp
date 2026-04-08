#include <iostream>
#include <iomanip> // Needed for fixed and setprecision (formatting currency)

using namespace std;

int main() {
    int choice;
    
    // Main program loop - keeps the kiosk running until the user chooses to exit
    do {
        // Display the Main Menu
        cout << "\n===== CANTEEN KIOSK =====" << endl;
        cout << "1. Calculate meal cost" << endl;
        cout << "2. View nutrition summary" << endl;
        cout << "3. Enter calorie log" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: // MEAL COST CALCULATION
            {
                // Define constant prices for menu items
                double main_meal = 45.00;
                double snack = 18.00;
                double beverage = 12.00;
                double combo_deal = 65.00;
                
                char category;
                int quantity;
                double price = 0;
                string item;

                // Display Category Menu
                cout << "\n-- Meal Category" << endl;
                cout << "A. Main meal (R45.00)" << endl;
                cout << "B. Snack (R18.00)" << endl;
                cout << "C. Beverage (R12.00)" << endl;
                cout << "D. Combo deal (R65.00)" << endl;
                cout << "Enter category: ";
                cin >> category;

                // Match user input to price and item name
                // toupper() ensures 'a' and 'A' both work
                switch (toupper(category)) {
                    case 'A': price = main_meal; item = "Main Meal"; break;
                    case 'B': price = snack; item = "Snack"; break;
                    case 'C': price = beverage; item = "Beverage"; break;
                    case 'D': price = combo_deal; item = "Combo Deal"; break;
                    default:
                        cout << "Invalid category." << endl;
                        break;
                }

                // Input Validation: Ensure quantity is between 1 and 10
                do {
                    cout << "Enter quantity (1-10): ";
                    cin >> quantity;
                } while (quantity < 1 || quantity > 10);

                double subtotal = price * quantity;
                
                int tier;
                double discount_rate = 0;
                string tier_name = "None";

                // Discount Tier System
                cout << "Enter tier (1=Gold, 2=Silver, 3=Bronze): ";
                cin >> tier;

                switch (tier) {
                    case 1:
                        discount_rate = 0.20; tier_name = "Gold"; break; // 20% Discount
                    case 2:
                        discount_rate = 0.10; tier_name = "Silver"; break; // Note: adjusted to 0.10 as 0.30 was higher than Gold
                    case 3:
                        discount_rate = 0.05; tier_name = "Bronze"; break; // 5% Discount
                    default:
                        cout << "No valid discount tier selected." << endl;
                }

                // Final Calculations
                double discount = subtotal * discount_rate;
                double total = subtotal - discount;

                // Output formatting: Display values with 2 decimal places
                cout << fixed << setprecision(2);
                cout << "\n========== Payment Summary ==========" << endl;
                cout << "Item: " << item << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Tier: " << tier_name << " (" << (discount_rate * 100) << "%)" << endl;
                cout << "Discount: R" << discount << endl;
                cout << "Amount due: R" << total << endl;

                break;
            }
            case 2:
                cout << "Option 2 selected - Nutrition logic goes here." << endl;
                break;
            case 3:
                cout << "Option 3 selected - Calorie log logic goes here." << endl;
                break;
            case 4:
                cout << "Exiting program... Goodbye!" << endl;
                break;
            default:
                cout << "Invalid menu choice. Please try again." << endl;
        }

    } while (choice != 4); // Loop continues until user enters 4

    return 0;
}