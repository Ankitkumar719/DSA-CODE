#include<iostream>
using namespace std;
int main(){ 

    int arr[]={1,0,1,0,1,0,1,1,0,0,1,1};
    int numZero=0, numOne=0;

    for(int i=0 ; i<12; i++){
        if(arr[i]==1){
            numOne++;
        }
        else{
            numZero++;
        }
    }

    cout<<"Number of zeroes : "<<numZero<<endl;
    cout<<"Number of ones : "<<numOne<<endl;
    return 0;
}