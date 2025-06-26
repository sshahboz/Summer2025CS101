#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    int count = 0;
    int* ptr = arr;
    for (int i = 0; i < n; ++i) {
        if (*(ptr + i) % 2 != 0) {
            count++;
        }
    }

    cout << "output: " << count << endl;

    delete[] arr;
    return 0;
}
