#include<iostream>
#include<vector>
using namespace std;

// Function to find the unique element in the array
// The unique element is determined using XOR operation
// XOR has the property: a^a = 0 and a^0 = a
int findUnique(vector<int> arr) {
    int ans = 0; // Initialize the result variable

    // Traverse through the array
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i]; // XOR each element with ans
    }
    return ans; // Return the unique element
}

int main() {
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n; // Input the size of the array

    vector<int> arr(n); // Declare a vector of size n

    cout << "Enter the elements " << endl;
    // Taking input for the array elements
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    // Call the function to find the unique element
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is " << uniqueElement << endl; // Output the result
    return 0; // Exit the program
}
