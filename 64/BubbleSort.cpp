#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{5,4,3,2,1};
	int n = arr.size();

    for(int i=0; i<n-1; i++){ //* external loop
        for(int j=0; j<n-i-1; j++){ //* internal loop
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

