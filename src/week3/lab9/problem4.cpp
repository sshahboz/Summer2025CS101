#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (array[i] >= array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    const int SIZE = 15;
    double arr[SIZE];

    cout << "enter 15 numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    int index = indexOfLargestElement(arr, SIZE);
    cout << index << endl;

    return 0;
}
