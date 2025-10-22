#include <iostream>
#include <vector>
using namespace std;

// Function to find the pivot index in a rotated sorted array
int findPivot(const vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    // If the array is already sorted (no rotation), return the first index
    if (arr[start] <= arr[end]) {
        return start;
    }

    // Perform binary search to find the pivot
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // If mid is the pivot (greater than the next element)
        if (mid < end && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        // If mid-1 is the pivot (greater than mid)
        if (mid > start && arr[mid - 1] > arr[mid]) {
            return mid - 1;
        }

        // Move search range towards the unsorted portion
        if (arr[start] <= arr[mid]) {
            start = mid + 1;  // Search in right half
        } else {
            end = mid - 1;  // Search in left half
        }
    }
    return -1;  // No pivot found (should not happen for valid rotated arrays)
}

// Function to perform binary search within a given range
int binarySearch(const vector<int>& arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // If the target is found, return the index
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller, search in left half
        if (arr[mid] > target) {
            end = mid - 1;
        } else {  // If target is greater, search in right half
            start = mid + 1;
        }
    }
    return -1;  // Target not found
}

// Function to search for a target in a rotated sorted array
int search(const vector<int>& nums, int target) {
    int pivotIndex = findPivot(nums);

    // If the target lies in the left sorted portion
    if (target >= nums[0] && target <= nums[pivotIndex]) {
        return binarySearch(nums, 0, pivotIndex, target);
    } else {  // Else search in the right sorted portion
        return binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
    }
}

int main() {
    vector<int> arr{9, 10, 2, 4, 6, 8};  // Rotated sorted array
    int target = 4;  // Target to search

    int index = search(arr, target);

    // Output the search result
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
        cout << "Target value: " << arr[index] << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
