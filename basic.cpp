#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    int choice;

    // PART 1: DAYS OF THE WEEK
    do {
        cout << "\n---- Days of the week ----" << endl;
        cout << "Choose a number (1-7) or 0 to go to Calculator: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Monday" << endl; break;
            case 2: cout << "Tuesday" << endl; break;
            case 3: cout << "Wednesday" << endl; break;
            case 4: cout << "Thursday" << endl; break;
            case 5: cout << "Friday" << endl; break;
            case 6: cout << "Saturday" << endl; break;
            case 7: cout << "Sunday" << endl; break;
            case 0: cout << "Moving to Calculator..." << endl; break;
            default: cout << "Invalid input. Please enter 1-7." << endl;
        }
    } while (choice != 0);

    // PART 2: THE CALCULATOR
    int calculate;
    double num1, num2;

    do {
        cout << "\n----- Calculator -----" << endl;
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> calculate;

        if (calculate >= 1 && calculate <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (calculate) {
            case 1: { 
                // Using braces {} allows us to declare 'result' locally within this case
                double result = num1 + num2;
                cout << "Result: " << result << endl;
                break; 
            }
            case 2: {
                double result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            }
            case 3: {
                double result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            }
            case 4: {
                if (num2 != 0) {
                    double result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            }
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (calculate != 0);

    return 0;
}