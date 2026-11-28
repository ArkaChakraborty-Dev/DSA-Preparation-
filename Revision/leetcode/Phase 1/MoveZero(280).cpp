#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int pos = 0;

    for (int i = 0; i < (int)nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[pos]);
            pos++;
        }
    }
}

void printArray(vector<int>& nums) {
    for (int i = 0; i < (int)nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original Array: ";
    printArray(nums);

    moveZeroes(nums);

    cout << "After Moving Zeroes: ";
    printArray(nums);

    return 0;
}