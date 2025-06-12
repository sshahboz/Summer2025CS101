#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    num = num - 1;
    num = num * 7;
    num = num - 14;
    num = num / 12;
    num = num + 3;

    int r = num % 3;

    cout << "num = " << num << endl;
    cout << "r = " << r << endl;

    return 0;
}
