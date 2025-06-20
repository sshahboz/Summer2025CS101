#include <iostream>
using namespace std;

double average(int arr[], int n) {
    if (n == 0) return 0;

    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];

    return static_cast<double>(sum) / n;
}

int main() {
    int n;
    cout << "n numbers: ";
    cin >> n;

    int arr[100];

    cout << "enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    double avg = average(arr, n);
    cout << "average = " << avg << endl;

    return 0;
}
