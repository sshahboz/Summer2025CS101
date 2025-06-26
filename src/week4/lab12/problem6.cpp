#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;

    cout << "enter numbers (0 to stop): ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        nums.push_back(input);
    }

    if (!nums.empty()) {
        cout << "front: " << nums.front() << endl;
        cout << "back: " << nums.back() << endl;
    } else {
        cout << "vector is empty!" << endl;
        return 0;
    }

    for (auto it = nums.begin(); it != nums.end(); ) {
        if (*it < 10) {
            it = nums.erase(it);
        } else {
            ++it;
        }
    }

    if (nums.size() >= 1)
        nums.insert(nums.begin() + 1, 33);
    else
        nums.push_back(33);

    if (nums.size() >= 2)
        nums.insert(nums.end() - 1, 55);
    else
        nums.push_back(55);

    cout << "result: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
