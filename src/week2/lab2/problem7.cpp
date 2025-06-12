#include <iostream>
using namespace std;

int main() {
    int num;


    while (true) {
        cout << "enter three-digit number: ";
        cin >> num;

        if (num >= 100 && num <= 999) {
            break;
        } else {
            cout << "wrong input. enter three-digit number" << endl;
        }
    }

    int hundreds = num / 100;
    int ones = num % 10;

    if (hundreds == ones) {
        cout << num << " = palindrome." << endl;
    } else {
        cout << num << " ≠ palindrome." << endl;
    }

    return 0;
}
