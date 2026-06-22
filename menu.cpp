#include <iostream>
#include <string>

using namespace std;

void greet() {
    cout << "Hello, user!" << endl;
}

void addTwoNumbers() {
    int num1, num2;
    int add;

    cout << "Type a number: ";
    cin >> num1;

    cout << "Type another number: ";
    cin >> num2;

    add = num1 + num2;
    cout << "The answer is: " << add << endl;
}
int main () {
    int choice;

    do { 
        cout << "====== MENU ======" << endl;
        cout << "1. Greet";
        cout << "2. Add Two Numbers";
        cout << "3. Exit";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            greet();
        } 
        else if (choice == 2) {
            addTwoNumbers();
        }
        else if (choice == 3) {
            cout << "Goodbye" << endl;
        }
    
    } while (choice !=3);

    return 0;
}