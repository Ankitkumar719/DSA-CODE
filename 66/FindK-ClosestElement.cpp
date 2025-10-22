#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48};
    int l = 0;
    int h = arr.size() - 1;
    int k = 4;
    int x = 35;

    //* Adjust the range to find k closest elements
    while (h - l >= k) {
        if (x - arr[l] > arr[h] - x) {
            l++;
        } else {
            h--;
        }
    }

    //* Store the result in a vector

    //& Method 1
    // vector<int>ans;
    // for(int i=l; i<=h; i++){
    //     arr.push_back(arr[i]);
    // }

    //& Method 2
    vector<int> result(arr.begin() + l, arr.begin() + h + 1);

    //* Print the result( using foreach loop)
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
