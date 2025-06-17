#include <iostream>
using namespace std;

int printn(int n) {
    if (n == 0)
        return 0;

    printn(n - 1);
    cout << n << " ";
    return 0;
}
int main() {
    int num;
    cout << "n: ";
    cin >> num;
    cout << "numbers (1-" << num << "): ";
    printn(num);
    cout << endl;

    return 0;
}
