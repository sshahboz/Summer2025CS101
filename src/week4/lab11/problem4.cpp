#include <iostream>
using namespace std;

bool is_mirrored(const int* a, const int* b, int size) {
    const int* ptrA = a;
    const int* ptrB = b + size - 1;

    for (int i = 0; i < size; ++i) {
        if (*(ptrA + i) != *(ptrB - i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "n: ";
    cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    cout << "a1:\n";
    for (int i = 0; i < size; ++i) {
        cin >> *(arr1 + i);
    }

    cout << "a2:\n";
    for (int i = 0; i < size; ++i) {
        cin >> *(arr2 + i);
    }

    bool result = is_mirrored(arr1, arr2, size);
    cout << result << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}
