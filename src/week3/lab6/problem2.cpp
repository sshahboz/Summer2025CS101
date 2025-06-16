#include <iostream>
using namespace std;


double linearAcceleration(double v1, double v2, double t) {
    if (t == 0) {
        cerr << "error: t ≠ " << endl;
        return 0;
    }
    return (v2 - v1) / t;
}

int main() {
    double v1, v2, t;

    cout << "v1: ";
    cin >> v1;
    cout << "v2: ";
    cin >> v2;
    cout << "t: ";
    cin >> t;

    double a = linearAcceleration(v1, v2, t);
    cout << "a = " << a  << endl;

    return 0;
}
