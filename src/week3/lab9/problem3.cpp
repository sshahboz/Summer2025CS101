#include <iostream>
using namespace std;

int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int n;
    cout << "n numbers: ";
    cin >> n;

    int arr[100];

    cout << "enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int minValue = findMinimum(arr, n);
    cout << "minimum number: " << minValue << endl;

    return 0;
}
