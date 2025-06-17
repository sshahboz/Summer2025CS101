#include <iostream>
using namespace std;

void updateMax(int x) {
    static int maxVal = 0;
    if (x > maxVal) {
        maxVal = x;
    }
    cout << "Current maximum: " << maxVal << endl;
}

int main() {
    updateMax(10);
    updateMax(5);
    updateMax(25);
    updateMax(12);
    return 0;
}
