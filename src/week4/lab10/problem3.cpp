#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; ++i) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    int rows;
    cout << "rows: ";
    cin >> rows;

    double matrix[100][SIZE];

    cout << "\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int col = 0; col < SIZE; ++col) {
        double result = sumColumn(matrix, rows, col);
        cout << "sum of column " << col << " = " << result << endl;
    }

    return 0;
}
