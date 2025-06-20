#include <iostream>
using namespace std;

int main() {
    const int rolls = 10000;
    int count[7] = {0};

    srand(time(0));

    for (int i = 0; i < rolls; ++i) {
        int face = rand() % 6 + 1;
        count[face]++;
    }

    for (int i = 1; i <= 6; ++i) {
        cout  << i << ": " << count[i] << endl;
    }

    return 0;
}
