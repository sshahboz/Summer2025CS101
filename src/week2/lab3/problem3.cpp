#include <iostream>
using namespace std;

int main() {
    float weight;
    cout << "w = ";
    cin >> weight;

    if (weight <= 0) {
        cout << "invalid input" << endl;
    } else if (weight > 20) {
        cout << "cannot be shipped" << endl;
    } else {
        int category;
        if (weight <= 2) category = 1;
        else if (weight <= 3) category = 2;
        else if (weight <= 5) category = 3;
        else if (weight <= 8) category = 4;
        else category = 5;

        switch (category) {
            case 1:
                cout << "3500" << endl;
                break;
            case 2:
                cout << "5500" << endl;
                break;
            case 3:
                cout << "8500" << endl;
                break;
            case 4:
                cout << "10500" << endl;
                break;
            default:
                cout << "undefined cost" << endl;
        }
    }

    return 0;
}
