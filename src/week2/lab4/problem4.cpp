#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "n = ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " = prime " << endl;
    else
        cout << num << " ≠ prime " << endl;

    return 0;
}
