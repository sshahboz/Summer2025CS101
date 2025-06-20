#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    char arr[100];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int uppercase = 0, lowercase = 0, digit = 0, special = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            uppercase++;
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            lowercase++;
        } else if (arr[i] >= '0' && arr[i] <= '9') {
            digit++;
        } else {
            special++;
        }
    }

    cout << "uppercase: " << uppercase << endl;
    cout << "lowercase: " << lowercase << endl;
    cout << "digit: " << digit << endl;
    cout << "special: " << special << endl;

    return 0;
}
