#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
        count++;

        if (count % 5 == 0) {
            cout << endl;
        }
    }

    if (count % 5 != 0) {
        cout << endl;
    }

    return 0;
}
