#include<iostream>
using namespace std;

int main() {
    // Initialize the array and its size
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    // Variables to point to the start and end of the array
    int start = 0;
    int end = 7;

    // Loop to print elements from start and end moving toward the center
    while (start <= end) {
        cout << arr[start] << " "; // Print the current start element
        if (start != end) {       // Avoid printing the middle element twice in case of odd-sized arrays
            cout << arr[end] << " "; // Print the current end element
        }
        start++; // Move start pointer forward
        end--;   // Move end pointer backward
    }

    return 0; // Indicate that the program ended successfully
}
