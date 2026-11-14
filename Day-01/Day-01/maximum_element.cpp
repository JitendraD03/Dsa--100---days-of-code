// Name: Jitendra Deora
// Language: C++
// Day 01  - Maximum Element in Array

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize array
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    // Assume first element is maximum
    int maxElement = arr[0];

    // Traverse array to find maximum
    for(int i = 1; i < n; i++) {

        // Update maximum if current element is greater
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Print maximum element
    cout << "Maximum Element: " << maxElement;

    return 0;
}