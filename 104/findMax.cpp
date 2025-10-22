#include <iostream>
#include <limits.h>

using namespace std;

int findMax(int arr[], int n, int i, int maxi) {
    if (i == n) {
        return maxi;
    }

    if (arr[i] > maxi) {
        maxi = arr[i];
    }

    findMax(arr, n, i + 1, maxi);
}

int main() {
    int arr[] = {10, 30, 120, 50, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int maxi = INT_MIN;

    int result = findMax(arr, n, i, maxi);
    cout << "The maximum element in the array is: " << result << endl;

    return 0;
}