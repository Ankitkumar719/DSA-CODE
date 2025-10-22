#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 2, 4, 5}; // Adjusted array size to match the number of elements

    int i, j; // variables declare

    for (i = 0; i < 6; i++) { // outer loop
        for (j = i + 1; j < 6; j++) { // inner loop starts from i + 1 to compare distinct elements
            if (arr[i] == arr[j]) { // check for duplicates
                cout << arr[i] << " is duplicate" << endl;
            }
        }
    }

    return 0;
}
