#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "swapped: x = " << x << ", y = " << y << endl;

    return 0;
}
