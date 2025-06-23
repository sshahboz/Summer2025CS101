#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int occurrences = 0;
    for (char c : s) {
        if (c == a) {
            occurrences++;
        }
    }
    return occurrences;
}

int main() {
    char target;
    string input;

    cout << "enter character: ";
    cin >> target;
    cin.ignore();

    cout << "enter text: ";
    getline(cin, input);

    int result = count(input, target);
    cout << result << endl;

    return 0;
}
