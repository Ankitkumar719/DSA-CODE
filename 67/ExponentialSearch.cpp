#include<iostream>
#include<algorithm>
using namespace std;

//* Binary search function
int binarySearch(int arr[], int start, int end, int target){
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){ //*Left Search
            end = mid - 1;
        }
        else{
            start = mid + 1; //* Right Search
        }
        mid = (start + end)/2;
    }
    return -1;
}


//* Exponential Search function
int expSearch(int arr[], int size, int target){
    if(arr[0] == target){
        return 0;
    }

    // int i = 1;
    // while(i<size && arr[i] <= target){
    //     i = i * 2;
    // }

    int i;
    for (i = 1; i < size && arr[i] <= target; i = i * 2);

    return binarySearch(arr, i/2, min(i, size-1), target); //* Binary Search function call
}


//* Main function
int main(){
    int arr[] = {3,4,5,6,11,13,16,14,15,56,70};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + size); //* Sorting the array

    int target = 13;
    int ans = expSearch(arr, size, target); //* Exponential Search function call

    if(ans != -1){
        cout<<target<<" found at index "<<ans<<endl;
    }
    else{
        cout<<target<<" not found "<<endl;
    }
    return 0;
}



/*#include<iostream>       // Including standard input-output stream library
#include<algorithm>      // Including algorithm library for sort() and min() functions
using namespace std;     // Using standard namespace to avoid std:: prefix

//* Binary search function: Performs binary search in a sorted array
int binarySearch(int arr[], int start, int end, int target) {
    int mid = (start + end) / 2;  // Calculate mid-point of the search range

    // Loop until the search range is valid
    while (start <= end) {
        // If target value is found, return the index
        if (arr[mid] == target) {
            return mid;
        }
        // If target is smaller, narrow the search to the left half
        else if (arr[mid] > target) { 
            end = mid - 1;
        }
        // If target is larger, narrow the search to the right half
        else {
            start = mid + 1;
        }
        mid = (start + end) / 2; // Recalculate mid-point for the new search range
    }
    return -1; // Return -1 if target is not found
}

//* Exponential Search function: Efficiently searches for the target element
int expSearch(int arr[], int size, int target) {
    // Check the first element; return index 0 if target is found
    if (arr[0] == target) {
        return 0;
    }

    int i; // Variable to control the exponential growth

    // Loop exponentially until target is larger or array bounds are exceeded
    for (i = 1; i < size && arr[i] <= target; i = i * 2);

    // Perform binary search within the found range
    // min(i, size-1) ensures the search does not go out of bounds
    return binarySearch(arr, i / 2, min(i, size - 1), target);
}

//* Main function: Entry point of the program
int main() {
    // Array declaration and initialization
    int arr[] = {3, 4, 5, 6, 11, 13, 16, 14, 15, 56, 70};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(int);

    // Sort the array to ensure exponential and binary searches work correctly
    sort(arr, arr + size);

    int target = 13; // Element to search in the array

    // Call exponential search and store the result
    int ans = expSearch(arr, size, target);

    // Check the result of exponential search
    if (ans != -1) {
        // If target is found, display index
        cout << target << " found at index " << ans << endl;
    }
    else {
        // If target is not found, display message
        cout << target << " not found " << endl;
    }

    return 0; // Exit the program successfully
}
*/