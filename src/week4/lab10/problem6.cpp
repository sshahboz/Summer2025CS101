#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    vector<int> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }

    int minGrade = numeric_limits<int>::max();
    int maxGrade = numeric_limits<int>::min();
    double sum = 0;

    for (int grade : grades) {
        if (grade < minGrade)
            minGrade = grade;
        if (grade > maxGrade)
            maxGrade = grade;
        sum += grade;
    }

    double average = sum / n;

    cout << "minimum = " << minGrade << endl;
    cout << "maximum = " << maxGrade << endl;
    cout << "average = " << average << endl;

    return 0;
}
