#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "enter a real number: ";
    cin >> number;

    cout << "address of variable 'number': " << &number << endl;

    double* ptr = &number;

    cout << "address stored in pointer 'ptr': " << ptr << endl;

    cout << "address of pointer variable 'ptr': " << &ptr << endl;

    cout << "value pointed to by 'ptr': " << *ptr << endl;

    return 0;
}
