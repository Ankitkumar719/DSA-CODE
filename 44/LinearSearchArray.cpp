#include<iostream>
using namespace std;

// Function to search for a given key in an array
// Parameters:
// arr[]: The array in which to search
// size: The size of the array
// key: The value to search for
// Returns:
// true if the key is found, false otherwise
bool find(int arr[], int size, int key) {
    // Loop through the array to find the key
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) { // If the key is found
            return true; // Return true immediately
        }
    }
    // If the loop completes without finding the key, return false
    return false;
}

int main() {
    // Initialize an array and its size
    int arr[5] = {1, 3, 5, 7, 9};
    int size = 5;

    // Prompt the user to enter the key to search
    int key;
    cout << "Enter the key to find: ";
    cin >> key;

    // Check if the key exists in the array
    if (find(arr, size, key)) {
        // If found, print "Found"
        cout << "Found" << endl;
    } else {
        // If not found, print "Not found"
        cout << "Not found" << endl;
    }

    return 0; // Indicate that the program ended successfully
}
