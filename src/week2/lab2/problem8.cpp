#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cout << "enter positive 4-digit integer: ";
        cin >> num;

        if (num >= 1000 && num <= 9999) {
            break;
        } else {
            cout << "wrong input. enter positive 4-digit number." << endl;
        }
    }

    int evenCount = 0;
    int oddCount = 0;
    int temp = num;

    for (int i = 0; i < 4; i++) {
        int digit = temp % 10;
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        temp /= 10;
    }

    if (evenCount > oddCount)
        cout << "more even digits" << endl;
    else if (oddCount > evenCount)
        cout << "more odd digits" << endl;
    else
        cout << "equal even and odd digits" << endl;

    return 0;
}
