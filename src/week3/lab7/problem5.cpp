#include <iostream>
using namespace std;

void powertwo(int &x) {
    x = x * x;
}

int main() {
    int num;
    cout << "x: ";
    cin >> num;
    powertwo(num);
    cout << "x² = " << num << endl;

    return 0;
}
