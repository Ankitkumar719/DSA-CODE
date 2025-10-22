#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Initialize two arrays arr and brr with their respective sizes
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5; // Size of arr
    int brr[] = {2, 4, 6, 8};
    int sizeb = 4; // Size of brr

    vector<int> ans; // Vector to store the combined elements of arr and brr

    // Add all elements of arr to the vector ans
    for(int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]); // Insert each element of arr into ans
    }

    // Add all elements of brr to the vector ans
    for(int i = 0; i < sizeb; i++) {
        ans.push_back(brr[i]); // Insert each element of brr into ans
    }

    // Print all elements of the vector ans
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl; // Output each element in ans
    }

    return 0;
}
