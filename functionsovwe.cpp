#include <iostream>
#include <cmath>

using namespace std;

double circle_area(double radius) {
    return 3.142 * pow(radius, 2);
}

double circle_area(int length, int width) {
    return length * width;
}

double circle_area(int side) {
    return side * side;
}

double circle_area(int length, double width){
    return length * width;
}

int main () {
    cout << "Circle area: " << circle_area(7.0) << endl;
    cout << "Rectangle area: " << circle_area(5, 3) << endl;
    cout << "Rectangle area: " << circle_area(5, 4.0) << endl;
    cout << "Square area: " << circle_area(4) << endl;

    return 0;
}