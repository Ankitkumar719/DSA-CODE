#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr{5,4,3,2,1};
	int n = arr.size();
	
	for(int i=0; i<n-1; i++){
		int minIndex = i; //* assign first index element as minimum
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j; //* assign value to miniIndex
			}
		}
    swap(arr[i], arr[minIndex]);
    }

	for(int i=0; i<n; i++){
		cout<<arr[i];
	}

	return 0;
}