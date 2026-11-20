
// Name: Jitendra Deora
// Language: C++
// Day 05 - Move Zeroes (LeetCode 283)

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};

    int j = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] != 0) {

            swap(nums[i], nums[j]);

            j++;
        }
    }

    cout << "Array after moving zeroes: ";

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
