#include <iostream>
#include <string>

using namespace std;

int main () {
   
    // Exercise 1

    cout << "Hello, Alpha!" << endl;
    cout << "Welcome to C++" << endl;

    // Exercise 2
    int age = 22;
    cout << "I am " << age << " years old" << endl;

    // Exercise 3
    string name;
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    cout << "Hello, " << name << endl;

    // Exercise 4
    double num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;

    // Exercise 5
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 10) {
        cout << "Big number" << endl;

    } else {

        cout << "Small number" << endl;
    }

    // Exercise 6
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    if (number % 2 == 0) {

        cout << "Even" << endl;

    } else {

        cout << "Odd" << endl;
    }

    int choice;

    // Exercise 7
    do {
        cout << "\n1. Say Hello " << endl;
        cout << "2. Exit" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello!" << endl;
            break;

            case 2:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    }  while (choice != 2);

    // Exercise 8
    cout << "\nPrint numbers 1-5: " << endl;
   for ( int i = 1; i <= 5; i++) {
    cout << i << "\n";
   }

    return 0;
}