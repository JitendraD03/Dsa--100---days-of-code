#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    int maxElement = arr[0];
 /* select the element of index 0 as a reference for comparing other elements. 
 */

    for(int i = 1; i < n; i++) {

        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum Element: " << maxElement;

    return 0;
}