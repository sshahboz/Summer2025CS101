#include <iostream>
using namespace std;

int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}


int maximum(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int x, y, z;

    cout << "enter 3 numbers: ";
    cin >> x >> y >> z;

    cout << "Minimum: " << minimum(x, y, z) << endl;
    cout << "Maximum: " << maximum(x, y, z) << endl;

    return 0;
}
