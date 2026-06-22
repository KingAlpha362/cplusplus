#include <iostream>
#include <cmath>

using namespace std;

double calculateFine(int daysLate) {
    return abs(daysLate) * 2.5;
}

void printReceipt(string borrower, int days, double fine) {
    cout << "====== RECEIPT ======\n";
    cout << "Borrower: " << borrower << "\n";
    cout << "Days Late: " << days << "\n";
    cout << "Fine     : $" << fine << "\n";
}

int main() {
    string name = "Alice";
    int late = -3;
    double fine = calculateFine(late);
    printReceipt(name, late, fine);

    return 0;
}
