#include <iostream>
using namespace std;

int main() {
    float x;
    float y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    float t = 3*(x*x+3)/(y/4+3);
    cout << t << endl;
    return 0;
}
