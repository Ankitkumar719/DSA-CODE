#include<iostream>
#include<vector>
using namespace std;

//* Assign Function
bool isPossibleSol(vector<int>& stalls, int cows, int mid){
    int cow = 1;
    int position = 1;
    
    for(int i = 1; i<stalls.size(); i++){
        if(stalls[i] - position >= mid){
            cow++;
            position = stalls[i];
        }

        if(cow == cows){
            return true;
        }
    }
}


//* Binary Search
int solve(vector<int>& stalls, int size, int cows){
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];

    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossibleSol(stalls, cows, mid) == true){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}


//* Main Function
int main(){
    vector<int> stalls = {1, 2, 4, 8, 9};
    int size = stalls.size();
    int cows = 3;

    int ans = solve(stalls, size, cows);
    cout<<"The largest minimum distance is: "<<ans<<endl;
    return 0;
}