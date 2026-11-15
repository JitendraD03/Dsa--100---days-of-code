// Name: Jitendra Deora
// Language: C++
// Day 02 - Contains Duplicate (LeetCode 217)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Create an unordered set to store unique numbers
        unordered_set<int> st;

        // Traverse the array
        for(int i = 0; i < nums.size(); i++) {

            // Check whether current number already exists
            if(st.find(nums[i]) != st.end()) {

                // Duplicate found
                return true;
            }

            // Insert current number into the set
            st.insert(nums[i]);
        }

        // No duplicate found
        return false;
    }
};

// Time Complexity: O(n) average
// Space Complexity: O(n)