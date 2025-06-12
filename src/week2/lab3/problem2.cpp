#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "grade (0 - 100): ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
        cout << "wrong input. grade = 0-100" << endl;
        return 1;
    }

    switch (grade / 10) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
    }

    return 0;
}
