#include <iostream>
using namespace std;

void power_two(int &x) {
    x = x * x;
}

int main() {
    int num;
    cout << "x: ";
    cin >> num;
    power_two(num);
    cout << "x² = " << num << endl;

    return 0;
}
