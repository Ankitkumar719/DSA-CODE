#include<iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid){
    // -------------------------------------------
    int leftArrayLength = mid - s + 1;
    int rightArrayLength = e - mid;

    int* arr1 = new int[leftArrayLength];
    int* arr2 = new int[rightArrayLength];
    // -------------------------------------------

    int mainIndex = s;

    // Copy left part
    for(int i = 0; i < leftArrayLength; i++){
        arr1[i] = arr[mainIndex++];
    }

    // Copy right part
    mainIndex = mid + 1;
    for(int i = 0; i < rightArrayLength; i++){
        arr2[i] = arr[mainIndex++];
    }


    // -------------------------------------------
    int i = 0, j = 0;
    mainIndex = s;

    // Merge
    while(i < leftArrayLength && j < rightArrayLength){
        if(arr1[i] < arr2[j]){
            arr[mainIndex++] = arr1[i++];
        } else {
            arr[mainIndex++] = arr2[j++];
        }
    }

    // Remaining elements
    while(i < leftArrayLength){
        arr[mainIndex++] = arr1[i++];
    }

    while(j < rightArrayLength){
        arr[mainIndex++] = arr2[j++];
    }

    
    // -------------------------------------------
    // Free memory
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int s, int e){
    if(s >= e) return;

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e, mid);
}

int main(){
    int arr[] = {5, 7, 2, 4, 1, 3, 9, 8};
    int size = 8;

    mergeSort(arr, 0, size - 1);

    cout << "Printing sorted array" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}