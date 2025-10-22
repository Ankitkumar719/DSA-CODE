#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {20, 15, 10, 17};
    int target = 7;
    int ans = -1;

    int start = 0;
    int end = *max_element(arr.begin(), arr.end());

    while(start <= end){
        int mid = start + (end - start) / 2;

        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > mid){
                sum = sum + arr[i] - mid;
            }
        }

        if(sum >= target){
            ans = mid;
            start = mid + 1; 
        }
        else{
            end = mid - 1;
        }
    }

    cout << "Answer : " << ans << endl;
    return 0;
}
