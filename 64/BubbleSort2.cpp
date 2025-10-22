#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size(); //* array size

    sort(arr.begin(), arr.end()); //* sort function

    for(int i=0; i<n; i++){ //* for printing array elements
        cout<<arr[i]<<" ";
    }
    return 0;
}