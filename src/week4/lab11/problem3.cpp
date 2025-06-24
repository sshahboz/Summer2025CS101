#include <iostream>
using namespace std;

int evenCount(const int* a, int size) {
    int count = 0;
    const int* ptr = a;

    for (int i = 0; i < size; ++i) {
        if (*(ptr + i) % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int size;
    cout << "n: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        cin >> *(arr + i);
    }

    int result = evenCount(arr, size);
    cout << result << endl;

    delete[] arr;
    return 0;
}
