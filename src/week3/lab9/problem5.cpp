#include <iostream>
using namespace std;

// Function to check if two arrays are strictly identical
bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (list1[i] != list2[i])
            return false;
    }
    return true;
}

int main() {
    int n1, n2;
    cout << "n1 = ";
    cin >> n1;

    int list1[100];
    for (int i = 0; i < n1; ++i) {
        cin >> list1[i];
    }

    cout << "n2 = ";
    cin >> n2;

    int list2[100];
    for (int i = 0; i < n2; ++i) {
        cin >> list2[i];
    }

    if (n1 != n2) {
        cout << "two lists are not strictly identical" << endl;
    } else if (strictlyEqual(list1, list2, n1)) {
        cout << "two lists are strictly identical" << endl;
    } else {
        cout << "two lists are not strictly identical" << endl;
    }

    return 0;
}
