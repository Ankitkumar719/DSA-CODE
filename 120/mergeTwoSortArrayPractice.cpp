#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSort(int arr1[], int size1, int arr2[], int size2){
    vector<int> ans;
    int i=0;
    int j=0;

    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < size1){
        ans.push_back(arr1[i]);
            i++;
    }

    while(i < size1){
        ans.push_back(arr2[j]);
            j++;
    }

    return ans;
}

int main(){

    int arr1[] = {10, 20, 30, 40};
    int size1 = 4;

    int arr2[] = {15, 25};
    int size2 = 2;

    vector<int> result = mergeSort(arr1, size1, arr2, size2);
    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}