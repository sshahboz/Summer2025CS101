#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num > 0) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
