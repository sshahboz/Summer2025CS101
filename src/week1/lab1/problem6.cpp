#include <iostream>

using namespace std;

int main() {
    double diameter;
    cout << "d: ";
    cin >> diameter;

    double radius = diameter / 2.0;
    double area = 4 * 3.14 * radius * radius;  // Surface area formula

    cout << "S: " << area << endl;

    return 0;
}
