#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{0, 1, 0, 1, 1, 1, 0, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end) { // Ensure `i` only traverses till `end`
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++;
        } 
        else {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    // Print the sorted array
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    // cout << endl;

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
