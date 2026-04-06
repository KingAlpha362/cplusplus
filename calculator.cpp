#include <iostream>
#include <string>

using namespace std;

int main () {
    double num1, num2, num3;

    cout << "Please Enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Largest: " << num1 << endl;

    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Largest: " << num2 << endl;

    } else {
        cout << "Largest: " << num3 << endl;
    }

    int calculate;

    do {
        int number1, number2;

        cout << "\n===== CALCULATOR =====" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> calculate;

        if (calculate >= 1 && calculate <= 4) {
            cout << "Enter two numbers: "; 
            cin >> number1 >> number2;
        }

        switch (calculate) {
            case 1: {
                int add = number1 + number2;
                cout << "The answer is: " << add << endl;
                break;
            }

            case 2: {
                int subtract = number1 - number2;
                cout << "The answer is: " << subtract << endl;
                break;
            }

            case 3: {
                int multiply = number1 * number2;
                cout << "The answer is: " << multiply << endl;
                break;
            }

            case 4: {
                if (number2 == 0) {
                    cout << "Cannot divide by zero!" << endl;
                } else {
                    double divide = (double)number1 / number2;
                    cout << "The answer is: " << divide << endl;
                }
                break;
            }

            case 5:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while (calculate != 5);

    cout << "\nPrint numbers 1-20:" << endl;
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}