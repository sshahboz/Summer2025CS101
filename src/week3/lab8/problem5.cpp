#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b < 0)
        return -multiply(a, -b);

    if (b == 0)
        return 0;
    else
        return a + multiply(a, b - 1);
}

int main() {
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int result = multiply(a, b);
    cout << "product = " << result << endl;

    return 0;
}
