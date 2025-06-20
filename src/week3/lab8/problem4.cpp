#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "n: ";
    cin >> num;

    if (num < 0) num = -num;

    int result = sumOfDigits(num);
    cout << "sum = " << result << endl;

    return 0;
}
