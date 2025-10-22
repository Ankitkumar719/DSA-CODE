// #include<iostream>
// using namespace std;

// void recursion(int arr[], int n, int i){

//     //* Base case
//     if(i >= n){
//         return;
//     }

//     //* Print value
//     cout<<arr[i]<<" ";

//     //* Calling
//     recursion(arr, n, i+1);

// }

// int main(){

//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int i = 0;

//     recursion(arr, n, i);
//     return 0;
// }



#include<iostream>
#include<limits.h>
using namespace std;

void maxNum(int arr[], int n, int i, int& max){

    //* base case
    if(i >= n){
        return;
    }

    //* 1 case solve
    if(arr[i] > max){
        max = arr[i];
    }

    //* recursively calling 
    maxNum(arr, n, i+1, max);

    cout<<max<<endl;
}

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    int max = INT_MIN;

    maxNum(arr, n, i, max);
    return 0;
}