#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    int choice;

    do {
        cout << "----Days of the week----" << endl;
        cout << "Choose a number (1-7): " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid output" << endl;
        }
    } while (choice !=0);

    int calculate;
    double num1, num2;
    double answer;

    do {
        cout << "-----Calculator-----" << endl;
        cout << ""



        cout << "Enter two numbers" << endl;
        cin >> calculate;

        switch (calculate) {
            case 1: 
                double answer = num1 + num2;

            case 2:
            case 3: 
            case 4:
        }
    }

    return 0;
}