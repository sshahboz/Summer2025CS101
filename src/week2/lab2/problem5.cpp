#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;


    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "equilateral" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "isosceles" << endl;
        } else {
            cout << "scalene" << endl;
        }
    } else {
        cout << "not a triangle" << endl;
    }

    return 0;
}
