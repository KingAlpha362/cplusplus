#include <iostream>
#include <string>

using namespace std;

int main () {
    // PART 1: FINDING THE LARGEST NUMBER
    double num1, num2, num3;

    cout << "Please Enter 3 numbers: " << endl;
    // Sequential input: values are stored in the order they are typed
    cin >> num1 >> num2 >> num3;

    // Logic: Compare each number against the other two using the AND (&&) operator
    if (num1 >= num2 && num1 >= num3) {
        cout << "Largest: " << num1 << endl;

    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Largest: " << num2 << endl;

    } else {
        // If neither num1 nor num2 are the largest, num3 must be
        cout << "Largest: " << num3 << endl;
    }

    // PART 2: THE CALCULATOR (Using a Loop)
    int calculate;

    // The 'do-while' loop ensures the menu displays at least once
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

        // Validation: Only ask for operands if the user chose an operation (1-4)
        if (calculate >= 1 && calculate <= 4) {
            cout << "Enter two numbers: "; 
            cin >> number1 >> number2;
        }

        // Process the calculation based on the user's menu choice
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
                // Safety check: Prevent program from crashing due to division by zero
                if (number2 == 0) {
                    cout << "Cannot divide by zero!" << endl;
                } else {
                    // (double) cast ensures decimal results (e.g., 5 / 2 = 2.5 instead of 2)
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

    } while (calculate != 5); // Keep looping until the user enters '5'

    // PART 3: REPETITION AND MODULO
    cout << "\nPrint numbers 1-20:" << endl;
    // 'for' loop: starts at 1, continues while i <= 20, increments by 1 each time
    for (int i = 1; i <= 20; i++) {
        // The modulo operator (%) checks for remainders
        // If i % 3 is 0, the number is a multiple of 3
        if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}