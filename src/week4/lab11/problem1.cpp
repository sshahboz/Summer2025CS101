#include <iostream>
using namespace std;

int main() {
    int arr[10];
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 100;
    }

    int * ptrA = arr;


    for (int i = 0; i < 10; ++i) {
        cout << (ptrA + i) << "\t" << *(ptrA + i) << endl;
    }

    return 0;
}
