#include <iostream>
using namespace std;

// Function to compute factorial; default parameter is 1
int factorial(int n = 1) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    cout << "n: ";
    cin >> number;

    if (number > 0)
        cout << number << "! = " << factorial(number) << endl;
    else
        cout << "1" << factorial() << endl;

    return 0;
}
