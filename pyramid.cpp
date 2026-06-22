#include <iostream>
using namespace std;

int main() {
    int height = 10;

    for (int i = 1; i <= height; i++) {
        // Print spaces (decreasing)
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        // Print stars (increasing odd numbers)
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}