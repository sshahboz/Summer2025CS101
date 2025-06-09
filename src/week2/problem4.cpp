#include <iostream>
using namespace std;

int main() {
    double v0, v1, t;

    cout << "vO: ";
    cin >> v0;

    cout << "v: ";
    cin >> v1;

    cout << "t: ";
    cin >> t;

    if (t == 0) {
        cout << "t≠0" << endl;
    } else {
        double a = (v1 - v0) / t;
        cout << "a= " << a << endl;
    }

    return 0;
}
