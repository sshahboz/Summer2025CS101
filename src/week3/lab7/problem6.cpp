#include <iostream>
using namespace std;

void reverse(int &x) {
    int reversed = 0;
    int original = x;

    bool isNegative = (x < 0);
    if (isNegative) x = -x;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    x = isNegative ? -reversed : reversed;
}

int main() {
    int num;
    cout << "number: ";
    cin >> num;

    reverse(num);

    cout << "reversed number: " << num << endl;

    return 0;
}
