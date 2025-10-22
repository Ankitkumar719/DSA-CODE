#include<iostream>
using namespace std;

int main() {

    // Initialize an array with 10 elements and its size
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;

    // Define two pointers: 
    // 'start' pointing to the beginning of the array
    // 'end' pointing to the last element of the array
    int start = 0;
    int end = size - 1;

    // Reverse the array using a two-pointer approach
    while (start <= end) {
        // Swap the elements at 'start' and 'end' indices
        swap(arr[start], arr[end]);
        // Move the 'start' pointer forward
        start++;
        // Move the 'end' pointer backward
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Output each element of the array
    }

    return 0; // Indicate that the program ended successfully
}
