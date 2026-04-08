#include <iostream>

using namespace std;

int main () {

    // Loop 1: Print "Hello" 5 times with numbers
    for (int i = 1; i <= 5; i++) {
        cout << "Hello " << i << endl;
    }

    // Loop 2: While loop from 2 to 5
    int i = 2;
    while (i <= 5) {
        cout << i << endl;
        i++; // increase i each time
    }

    // Loop 3: Print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    // Loop 4: Print even numbers from 2 to 20
    i = 2; // reuse variable (don't redeclare)
    while (i <= 20) {
        cout << i << endl;
        i += 2; // jump by 2 to stay even
    }

    // Loop 5: Count backwards from 10 to 1
    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }

    // Loop 6: Multiplication table (1 to 12)
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int j = 1;
    while (j <= 12) {
        cout << num1 << " x " << j << " = " << num1 * j << endl;
        j++;
    }
    // Everything after return 0; will NEVER run
    // So we move this part ABOVE return

    // Loop 7: Multiplication table (1 to 20)
    int num2;
    cout << "Enter another number: ";
    cin >> num2;

    for (int b = 1; b <= 20; b++) {
        cout << num2 << " x " << b << " = " << num2 * b << endl;
    }

    return 0; // program ends here
}