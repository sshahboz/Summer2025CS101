#include <iostream>
#include <iomanip>
using namespace std;

double sumSeries(int n) {
    if (n == 1)
        return 1.0 / (1 * (1 + 2));
    else
        return 1.0 / (n * (n + 2)) + sumSeries(n - 1);
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    double result = sumSeries(n);

    cout << fixed << setprecision(6);
    cout << "sum(" << n << ") = " << result << endl;

    return 0;
}
