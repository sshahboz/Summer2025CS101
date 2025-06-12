#include <iostream>
using namespace std;

int main() {
    char signal;

    cout << "enter: g for green, y for yellow, r for red: ";
    cin >> signal;

    switch (signal) {
        case 'g':
            cout << "go!" << endl;
            break;
        case 'y':
            cout << "get ready!" << endl;
            break;
        case 'r':
            cout << "stop" << endl;
            break;
        default:
            cout << "wrong input. please enter g, y, or r." << endl;
    }

    return 0;
}
