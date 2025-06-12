#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "n: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "fizzbuzz" << endl;
    } else if (number % 3 == 0) {
        cout << "fizz" << endl;
    } else if (number % 5 == 0) {
        cout << "buzz" << endl;
    } else {
        cout << "not divisible by 3 nor 5" << endl;
    }

    return 0;
}
