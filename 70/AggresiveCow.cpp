#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSol(vector<int>& stalls, int cows, int mid){
    int cow = 1;
    int pos = stalls[0];

    for(int i=1; i<stalls.size(); i++){
        cout<<"i : "<<i<<endl;
        cout<<"stalls"<<"["<<i<<"] : "<<stalls[i]<<endl;
        cout<<"pos : "<<pos<<endl;
        cout<<"stalls"<<"["<<i<<"]"<< " - pos: "<<stalls[i] - pos<<endl;

        if(stalls[i] - pos >= mid){
            cow++;
            cout<<"cow : "<<cow<<endl;
            pos = stalls[i];
            cout<<"pos : "<<pos<<endl;
        }

        cout<<"cow : "<<cow<<endl;
        cout<<"cows : "<<cows<<endl;

        if(cow == cows){
            return true;
        }
    }
    return false;
}
    
int solve(int size, int cows, vector<int>& stalls){

    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    cout<<"end : "<<end<<endl;
    
    int ans = -1;

    while(start <= end){

        cout<<"start : "<<start<<endl;
        cout<<"end : "<<end<<endl;

        int mid = start + (end - start)/2;
        cout<<"mid : "<<mid<<endl;

        if(isPossibleSol(stalls, cows, mid) == true){
            ans = mid;
            cout<<"ans : "<<ans<<endl;

            start = mid + 1;
            cout<<"start : "<<start<<endl;
        }
        else{
            end = mid - 1;
            cout<<"end :"<<end<<endl;
        }
    }
    return ans;
}

int main(){
    vector<int> stalls = {1, 2, 4, 8, 9};
    int size = stalls.size();
    int cows = 3;

    int ans = solve(size, cows, stalls);
    cout << "The largest minimum distance is: " << ans << endl;
    return 0;
}
