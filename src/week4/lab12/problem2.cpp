#include <iostream>
using namespace std;

int main() {
    int depth;
    cin >> depth;

    if (depth == 0) {
        cout << "the depth is 0" << endl;
    } else {
        for (int i = 1; i <= depth; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i;
            }
            cout << endl;
        }
    }

    return 0;
}
