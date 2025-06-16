#include <iostream>
using namespace std;


int cubeOfDigits(int number) {
    int sum = 0;
    int n = number;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;  // Cube of digit
        n /= 10;
    }
    return sum;
}


bool isArmstrong(int number) {
    return cubeOfDigits(number) == number;
}

int main() {
    int num;
    cout << "n: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
