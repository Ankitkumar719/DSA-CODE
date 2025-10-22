#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){ //* function declare
    int start = 0; //* first index
    int end = size - 1; //* (size - 1) means accessing array last index
    int mid = start + (end - start)/2; // *mid declare abd calculate

    while(start <= end){ // *loop continue til the last index of array 
        int element = arr[mid]; // *assign the value of mid element of array to variable 'element'

        if(element == target){
            return mid; //* return index of target element
        }
        else if(target < element){ // ^search in left
            end = mid - 1; // *new end create
        }
        else{ // ^search in right
            start = mid + 1; // *new start create
        }

        //! updation part
        mid = start + (end - start)/2; // *new mid create 
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;
    int target = 10;

    int indexOftarget = binarySearch(arr, size, target); //* get index of the element

    if(indexOftarget == -1){
        cout<<"Enlement not found"<<endl;
    }
    else{
        cout<<"Element is found at "<<indexOftarget<<" index"<<endl;
    }
    return 0;
}