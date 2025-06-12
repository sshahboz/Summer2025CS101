#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "a<b? " << (a < b ? "yes" : "no") << endl;
    cout << "a>b? " << (a > b ? "yes" : "no") << endl;
    cout << "a=b? " << (a == b ? "yes" : "no") << endl;

    return 0;
}
