#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "after swapping:\n";
    cout << "a = " << *ptrA << ", b = " << *ptrB << endl;

    return 0;
}
