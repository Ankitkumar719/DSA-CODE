#include<iostream>
using namespace std;

bool findKey(int arr[][3], int row, int col, int key){
    for(int i=0; i<col; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // findKey(arr, 3, 3, 5);
    if (findKey(arr, 3, 3, 5)) {
        cout << "Element is found.";
    } else {
        cout << "Element is not found.";
    }

    return 0;
}