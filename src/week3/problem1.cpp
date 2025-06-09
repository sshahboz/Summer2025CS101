#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "x: ";
    cin >> x;

    if (x > 0) {
        cout << "positive" << endl;
    } else if (x < 0) {
        cout << "negative" << endl;
    } else {
        cout << "neither positive nor negative" << endl;
    }

    return 0;
}
