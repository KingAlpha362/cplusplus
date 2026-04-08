#include <iostream>
using namespace std;

int main () {
      double length, width, area, perimeter;
       
       cout << "Enter length: ";
       cin >> length;

       cout << "Enter width: ";
       cin >> width;

       perimeter = 2 * (length + width);
       area = length * width;

      cout << "Length = " << length << endl;
      cout << "Width = " << width << endl;
      cout << "Perimeter = " << perimeter << endl;
      cout << "Area = " << area << endl;

    if (area > 100) {
    // Code to run if the condition is TRUE
    cout << "This is a large area." << endl;
}
else {
    // Code to run if the condition is FALSE
    cout << "This is a small area." << endl;
}

    return 0;
}