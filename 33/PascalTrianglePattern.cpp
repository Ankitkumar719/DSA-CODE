#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    
    for(int row=1; row<=n; row++){
        int start = 1;
        for(int col=1; col<=row; col++){
            cout<<start<<" ";
            start = start * (row - col)/col; // Formula
        }
        cout<<endl;
    }
    return 0;
}