#include <iostream>
using namespace std;

int yearToCentury(int year) {
    return (year + 99) / 100;
}

int main() {
    int year;
    cout << "enter a year: ";
    cin >> year;

    int century = yearToCentury(year);
    cout << century << endl;

    return 0;
}
