#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    int row = 5;
    int col = 5;
    int initiate = 0;

     // For declare 2D vector : 
    // vector<vector< data type >>vector name (row size, vector< data type >(column size, initiative value)) 

    vector<vector<int>>arr(row, vector<int>(col, initiate));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}