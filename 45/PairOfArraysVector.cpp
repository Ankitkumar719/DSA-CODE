#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,20,30,40,60,70};

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        for(int j=0; j<arr.size(); j++){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}