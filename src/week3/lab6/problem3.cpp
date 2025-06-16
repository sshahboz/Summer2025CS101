#include <iostream>
using namespace std;

void fun(double r) {
    if (r < 0) {
        cout << "error: r<0!" << endl;
        return;
    }

    double c = 2 * 3.14 * r;
    double a = 3.14 * r * r;

    cout << "circumference: " << c << endl;
    cout << "area: " << a << endl;
}

int main() {
    double r;
    cout << "radius: ";
    cin >> r;

    fun(r);

    return 0;
}
