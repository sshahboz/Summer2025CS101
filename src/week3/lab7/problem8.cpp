#include <iostream>
using namespace std;

int sum(int n) {
    if (n <= 1)
        return n;
    else
        return n + sum(n - 1);
}

int main() {
    int num;
    cout << "n: ";
    cin >> num;

    int result = sum(num);
    cout << "sum(1-" << num << ") = " << result << endl;

    return 0;
}
