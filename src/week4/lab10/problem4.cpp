#include <iostream>
using namespace std;

const int SIZE = 4;

// Function to sum the major diagonal of a 4x4 matrix
double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += m[i][i];
    }
    return sum;
}

int main() {
    double matrix[SIZE][SIZE];

    cout << "enter 4x4 matrix of double values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    double result = sumMajorDiagonal(matrix);
    cout << "\n" << result << endl;

    return 0;
}
