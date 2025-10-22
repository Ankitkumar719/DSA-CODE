#include<iostream>
#include<vector>
using namespace std;

int lastOcc(vector<int> v, int target){
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){
        if(v[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(v[mid] < target){
            s = mid + 1; // move right
        }
        else if(v[mid] > target){
            e = mid - 1; // move left 
        }
        mid = s + (e - s)/2; // udate middle term
    }
    return ans;
}

int main(){
    vector<int> v{1,3,7,7,7,7,7,7,7,7,9};
    int target = 7;

    int ans = lastOcc(v, target);
    cout<<"Last occurence is at : "<<ans<<endl;

    return 0;
}