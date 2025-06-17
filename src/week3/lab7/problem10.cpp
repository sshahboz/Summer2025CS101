#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1)
        return 1;
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "n: ";
    cin >> num;

    if (num < 0) {
        cout << "error: enter positive number";
    } else {
        cout << "factorial = " << num << factorial(num) << endl;
    }

    return 0;
}
