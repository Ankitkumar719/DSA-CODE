#include<iostream>             // Include header file for input and output operations.
#include<vector>               // Include header file to use the vector container.
#include<algorithm>            // Include header file for algorithms like binary_search.
using namespace std;           // Allows usage of standard library components without prefixing 'std::'.

int main(){                    // Entry point of the program.
    vector<int> v{1,2,3,4,5,6}; // Initialize a vector with integers from 1 to 6.

    // Initialize an array with integers from 1 to 6.
    int arr[] = {1,2,3,4,5,6};

    // Calculate the size of the array.
    int size = sizeof(arr)/sizeof(arr[0]); // Total size of array divided by size of one element gives the number of elements.

    // Perform binary search on the array to check if the value '4' is present.
    // The function 'binary_search' works only on sorted arrays or containers.
    if(binary_search(arr, arr + size, 4)){ // * size mean size of data type i.e. integer
        // If the element is found, print a success message.
        cout<<"Element is found"<<endl;
    }
    // Uncomment this section to perform binary search using the vector instead of the array.
    /*
    if(binary_search(v.begin(), v.end(), 4)){ // Search within the vector using iterators.
        cout<<"Element is found"<<endl;      // Print if the element is found.
    }
    */
    else{ // If the element is not found, print a failure message.
        cout<<"Element is not found"<<endl;
    }

    return 0; // Return 0 to indicate successful program execution.
}
