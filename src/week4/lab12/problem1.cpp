#include <iostream>
using namespace std;

int main() {
    int num;
    bool hasNonNegative = false;

    cout << "enter 5 numbers:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        if (num >= 0) {
            hasNonNegative = true;
        }
    }

    cout << (hasNonNegative ? 1 : 0) << endl;

    return 0;
}
