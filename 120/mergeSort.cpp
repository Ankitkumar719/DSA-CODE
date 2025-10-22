#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //copy values
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    //copy values
    int m = mid+1;
    for(int i=0; i<len1; i++){
        right[i] = arr[m];
        m++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndex] = left[leftIndex];
            mainIndex++;
            leftIndex++;
        }else{
            arr[mainIndex] = right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    //copy logic for left array
    while(leftIndex < len1){
        arr[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    //copy logic for right array
    while(rightIndex < len2){
        arr[mainIndex] = right[rightIndex];
        mainIndex++;
        rightIndex++;
    }
}

void mergeSort(int arr[], int s, int e){
    // base case
    //s == e -> single element
    //s > e -> invalid array
    if(s >= e){
        return;
    }

    int mid = (s + e) / 2;

    // left part sort kardo recursin se
    mergeSort(arr, s, mid);

    // right part sort kardo recursion se
    mergeSort(arr, mid+1, e);

    // now merge both arrays
    merge(arr, s, e);
}

int main(){

    int arr[]={7,3,21,6,24,4,11,9};
    int n = 8;

    int s = 0;
    int e = n-1;

    mergeSort(arr, s, e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}