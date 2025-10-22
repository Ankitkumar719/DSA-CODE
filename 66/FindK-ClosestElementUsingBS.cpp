#include<iostream>
#include<vector>
using namespace std;

//* lowerBound function
int lowerBound(vector<int>& arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = end;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48};
    int k = 4;
    int x = 35;

    int h = lowerBound(arr, x); //* function call
    int l = h - 1;

    //* Using own approach
    while (k--) {
        if (l < 0) {
            h++;
        } else if (h >= arr.size()) {
            l--;
        } else if (x - arr[l] <= arr[h] - x) {
            l--;
        } else {
            h++;
        }
    }

    //* Returning k closest elements
    vector<int> result(arr.begin() + l + 1, arr.begin() + h);

    //* Print the result
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
