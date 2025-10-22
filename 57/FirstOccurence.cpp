#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2; // middle value update
    }
    return ans;
}

int main(){
    vector<int> arr{1,3,4,4,4,4,4,6,7};
    int target = 4;
    int indexOfFirstOcc = firstOcc(arr, target);
    cout<<"First occurence of "<<target<<" is "<<indexOfFirstOcc<<endl;
    return 0;
}