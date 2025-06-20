#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "n numbers: ";
    cin >> n;

    vector<int> numbers(n);
    int sum = 0;

    cout << "enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "sum = " << sum << endl;

    return 0;
}
