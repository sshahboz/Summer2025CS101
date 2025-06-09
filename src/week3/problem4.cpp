#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

int main() {
    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a == 0) {
        cout << "a≠0" << endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    double x1, x2;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "x1=x2=" << x1 << endl;
    } else {
        cout << "complex roots" << endl;
    }

    return 0;
}
