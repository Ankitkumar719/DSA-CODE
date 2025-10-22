#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& array, int start, int end, int target){

    int mid = start + (end - start)/2;

    //* base case 

    if(start > end){
        return -1;
    }

    if(array[mid] == target){
        return mid;
    }

    //* 1 case solve
    if(array[mid] > target){
        return binarySearch(array, start, mid - 1, target); //* recursively call for left side
    }
    else{
        return binarySearch(array, mid + 1, end, target); //* recursively call for right side
    }
}


int main(){

    vector<int> array = {1,2,3,4,5,6,7,8,9};
    int size = array.size();
    int start = 0;
    int end = size-1;
    int target = 2;

    int result = binarySearch(array, start, end, target);

    cout<<"'"<<target<<"'"<<" found at index : "<<result<<endl;

    return 0;
}