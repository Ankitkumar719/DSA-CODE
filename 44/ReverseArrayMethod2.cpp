#include <iostream> // Include the iostream library for input/output operations
using namespace std;

int main() {

    // Step 1: Initialize an array with 10 elements and its size
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; // Array elements are explicitly defined
    int size = 10; // Variable to store the size of the array

    // Step 2: Define two pointers to assist with reversing the array
    int start = 0; // Pointer 'start' begins at the first index of the array
    int end = size - 1; // Pointer 'end' starts at the last index of the array

    // Step 3: Reverse the array using a two-pointer approach
    while (start < end) { // Loop continues until 'start' meets or exceeds 'end'
        // Swap the elements at the indices pointed by 'start' and 'end'
        int temp = arr[start]; // Temporarily store the value at 'start' or put one integer from array to int type variable.
        arr[start] = arr[end]; // Assign the value at 'end' to 'start' or over write the value which is already present in it.
        arr[end] = temp; // Assign the temporarily stored value to 'end' or put back the value of integer which pass by first array to it, also over write the value.

        // Move the pointers closer to each other
        start++; // Increment 'start' to move it forward in the array
        end--; // Decrement 'end' to move it backward in the array
    }

    // Step 4: Print the reversed array
    for (int i = 0; i < size; i++) { // Iterate through each index of the array
        cout << arr[i] << " "; // Output the value at the current index followed by a space
    }

    return 0; // Indicate successful termination of the program
}
