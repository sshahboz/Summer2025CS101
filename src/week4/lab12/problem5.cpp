#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = rand() % 1001;
            cout << setw(5) << value;
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));

    int n;
    cout << "n: ";
    cin >> n;

    cout << "\nGenerated " << n << " x " << n << " matrix:\n";
    printMatrix(n);

    return 0;
}
