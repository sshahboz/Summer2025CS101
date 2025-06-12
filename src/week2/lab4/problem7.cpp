#include <iostream>
using namespace std;

int main() {
    int n, num, maxNum;

    cout << "n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n<=0 : " << endl;
        return 1;
    }

    cout << "enter " << n << " integers: " << endl;

    cin >> num;
    maxNum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }

    cout << "max: " << maxNum << endl;

    return 0;
}
