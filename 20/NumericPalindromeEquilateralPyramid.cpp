#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int row = 0; row < n; row ++){

        //for spaces
        for(int spaces = 0; spaces < n - row - 1; spaces ++){
            cout<<" ";
        }
        
        
        // for first number
        for(int num = 0; num < row + 1; num ++){
            cout<<num + 1;
        }


        // for second number
        for(int num = row; num >= 1; num --){
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}