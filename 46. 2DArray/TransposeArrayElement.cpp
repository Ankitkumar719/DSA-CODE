#include <iostream>
using namespace std;

// Function to transpose a square matrix
void transpose(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) { // Avoid redundant swaps
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Print original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call the transpose function
    transpose(arr, 3, 3);

    // Print transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
