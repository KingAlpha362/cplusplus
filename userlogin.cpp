#include <iostream>
#include <string>

using namespace std;

int main () {
    string user, pass;

    cout << "=== User Login System ===";

    do {
        cout << "Username: ";
        cin >> user;

        cout << "password: ";
        cin >> pass;

        if (user != "admin" || pass != "1234")
        cout << "Invalid, Try again.\n\n";

    } while (user != "admin" || pass != "1234");
    cout << "Login successful!\n";
    return 0;
}