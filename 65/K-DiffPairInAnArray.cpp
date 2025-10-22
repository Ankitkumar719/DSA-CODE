#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    vector<int> nums{3,1,4,1,5};
    int k = 2;

    sort(nums.begin(), nums.end());
    set<pair<int,int>>ans;

    int i=0, j=1;

    while(j<nums.size()){
        int diff = nums[j]-nums[i];

        if(diff == k){
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if(diff > k){
            i++;
        }
        else{
            j++;
        }
        if(i==j){
            j++;
        }
    }
    cout<<ans.size();
}


//* First approach:- 

// int n = nums.size();
    // int count = 0;
    // vector<int> nums1{};


    //^  by own
    // sort(nums.begin(), nums.end());
    // for(int i=0; i<nums.size(); i++){
    //     for(int j=i+1; j<nums.size(); j++){
    //         if(nums[i] != nums[j]){
    //             nums1[i] = nums[i];
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    // }
    //^


    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(abs(nums1[i] - nums1[j]) == k){
                // cout<<"("<<arr[i]<<","<<arr[j]<<")";
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;

    // return 0;