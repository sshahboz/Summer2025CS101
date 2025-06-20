#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    cin >> base;
    cin >> exponent;

    double result = power(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
