#include <iostream>
#include <stack>
using namespace std;

void displayEven(int number) {
    if (number == 0) {
        cout << "0 is even." << endl;
        return;
    }

    if (number < 0)
        number = -number;

    stack<int> digits;
    while (number > 0) {
        digits.push(number % 10);
        number /= 10;
    }

    cout << "even digits: ";
    bool found = false;
    while (!digits.empty()) {
        int d = digits.top();
        digits.pop();
        if (d % 2 == 0) {
            cout << d << " ";
            found = true;
        }
    }

    if (!found)
        cout << " ";

    cout << endl;
}

int main() {
    int num;
    cout << "n: ";
    cin >> num;

    displayEven(num);

    return 0;
}
