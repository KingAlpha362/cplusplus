#include <iostream>

using namespace std;

int main() {

    int score;

    cout << "Please enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else if (score >= 50) {
        cout << "Grade: E" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    int num, factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * 1;

    }
    cout << "Factorial = " << factorial;

    int num1;

    cout << "Enter a number: ";
    cin >> num1;

    if (num1 % 2 == 0) {

        cout << "Even";

    } else {
        cout << "Odd";
    }

    int num2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num2;

    if (num2 <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < num2; i++) {
        if (num2 % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Prime number";
    } else {
        cout << "Not prime"; 
    }

    return 0;
}