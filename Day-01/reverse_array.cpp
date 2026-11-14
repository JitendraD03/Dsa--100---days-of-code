// Name: Jitendra Deora
// Language: C++
// Day 01 - Reverse an Array

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize array
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    // Initialize two pointers
    int start = 0;
    int end = n - 1;

    // Reverse array using two pointers
    while(start < end) {

        // Swap first and last elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards each other
        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed Array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/* we use here two pointers approach because by applying 2 for loop will make our time complexity n2 so we create 2 pointers 1 from start and one from end and swap elements. 