#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Initialize two vectors arr and brr with integers
    vector<int> arr{1, 2, 3, 4, 6, 8};
    vector<int> brr{3, 4, 9, 10};
    vector<int> ans; // Vector to store common elements between arr and brr

    // Iterate over each element of arr vector
    for(int i = 0; i < arr.size(); i++) {
        int element = arr[i]; // Current element of arr

        // Check if the current element exists in brr
        for(int j = 0; j < brr.size(); j++) {
            if(element == brr[j]) {
                ans.push_back(element); // If match found, add it to ans
            }
        }
    }
    
    // Print the common elements stored in ans
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl; // Output each common element
    }

    return 0;
}
