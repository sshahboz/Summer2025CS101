#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;

    int s1 = a + b;
    int s2 = c + d;

    if (s1 > s2) {
        cout << "s1>s2" << endl;
    } else if (s1 < s2) {
        cout << "s1<s2" << endl;
    } else {
        cout << "s1=s2" << endl;
    }

    return 0;
}
