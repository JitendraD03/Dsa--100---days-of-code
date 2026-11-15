// Name: Jitendra Deora
// Language: C++
// Day 02 - Two Sum (LeetCode 1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Store number as key and its index as value
        unordered_map<int, int> mp;

        // Traverse the array
        for(int i = 0; i < nums.size(); i++) {

            // Find the number needed to complete the target
            int need = target - nums[i];

            // Check whether the needed number exists in map
            if(mp.find(need) != mp.end()) {

                // Return the indices of both numbers
                return {mp[need], i};
            }

            // Store current number and its index in map
            mp[nums[i]] = i;
        }

        // Return empty vector if no pair is found
        return {};
    }
};

// Time Complexity: O(n) average
// Space Complexity: O(n)