#include<iostream>
using namespace std;


bool isSorted(int array[], int size, int i){
    
    //* base case
    if(i == size-1){
        return true;
    }

    // if(array[i] < array[i+1]){
    //     isSorted(array, size, i+1); //* recursively calling 
    // }
    // else{
    //     return false;
    // }

    //* 1 case solve
    if(array[i] > array[i+1]){
        return false;
    }

    //* recursively calling
    bool ans;
    return  ans = isSorted(array, size, i+1);  

}

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int i=0;

    bool result = isSorted(array, size, i);

    if(result == false){
        cout<<"Array is not sorted"<<endl;
    }
    else{
        cout<<"Array is sorted"<<endl;
    }


    return 0;
}