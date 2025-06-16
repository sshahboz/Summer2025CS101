#include <iostream>
using namespace std;

void fun(double r) {
    if (r < 0) {
        cout << "error: r>0!" << endl;
        return;
    }
    double c = 2 * 3.14 * r;
    double a = 3.14 * r * r;

    cout << "circle:" << endl;
    cout << "circumference: " << c << endl;
    cout << "area: " << a << endl;
}

void fun(double a, double b) {
    if (a < 0 || b < 0) {
        cout << "error: a,b>0!" << endl;
        return;
    }
    double perimeter = 2 * (a + b);
    double area = a * b;

    cout << "rectangle:" << endl;
    cout << "perimeter: " << perimeter << endl;
    cout << "area: " << area << endl;
}

int main() {
    double r;
    cout << "radius: ";
    cin >> r;
    fun(r);

    double a, b;
    cout << "\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    fun(a, b);

    return 0;
}
