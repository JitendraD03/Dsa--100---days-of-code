// Name: Jitendra Deora
// Language: C++
// Day 03 - Best Time to Buy and Sell Stock (LeetCode 121)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Store the minimum price
    int minPrice = INT_MAX;

    // Store the maximum profit
    int maxProfit = 0;

    // Traverse the prices array
    for(int i = 0; i < prices.size(); i++) {

        // Update minimum price if current price is smaller
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate profit
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if(profit > maxProfit) {
            maxProfit = profit;
        }
    }

    // Print maximum profit
    cout << "Maximum Profit: " << maxProfit;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)