#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    cout << "0 < " << n << " / 10:" << endl;
    for (int i = 0; i <= n; i++) {
        if (i % 10 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
