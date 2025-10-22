#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{10, 20, 30, 40, 60, 70};
    int sum = 80;

    // Outer loop to fix the first element
    for (int i = 0; i < arr.size(); i++) {
        int element1 = arr[i];

        // Inner loop to fix the second element
        for (int j = i + 1; j < arr.size(); j++) { // `j` starts from `i + 1` to avoid duplicates
            int element2 = arr[j];

            // Loop to find the third element
            for (int k = j + 1; k < arr.size(); k++) { // `k` starts from `j + 1` to avoid duplicates
                int element3 = arr[k];

                // Check if the triplet sums up to the target
                if (element1 + element2 + element3 == sum) {
                    cout << "Triplet: (" << element1 << ", " << element2 << ", " << element3 << ")" << endl;
                }
            }
        }
    }

    return 0;
}
