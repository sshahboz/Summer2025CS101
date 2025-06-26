#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    double* arr = new double[n];
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    double* ptr = arr + n - 1;
    for (int i = 0; i < n; ++i) {
        cout << *ptr-- << " ";
    }

    cout << endl;
    delete[] arr;
    return 0;
}
