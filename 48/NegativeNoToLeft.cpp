#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, -5, -9, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int left = 0, right = n - 1; // size of array minus one gives right last index

    // Two-pointer approach
    while (left <= right) { // Starts a loop that runs until the left pointer crosses the right pointer.
        if (arr[left] < 0) { // Checks if the element at the left pointer is negative: 
            left++;          // If true, the left pointer moves one step to the right.
            
        } else if (arr[right] >= 0) { // Checks if the element at the right pointer is positive:
            right--;                  // If true, the right pointer moves one step to the left.
            
        } else {
            // If neither of the above conditions is true:
            swap(arr[left], arr[right]); // Swaps the positive element at left with the negative element at right.
            left++; right--; // Moves both pointers toward the center (left++ and right--)
             
        }
    }

    // Print the rearranged array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
