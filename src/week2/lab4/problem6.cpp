#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "sum = " << sum << endl;

    return 0;
}
