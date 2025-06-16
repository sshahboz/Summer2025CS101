#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int p = multiply(a, b);

    cout << a << " * " << b << " = " << p << endl;

    return 0;
}
