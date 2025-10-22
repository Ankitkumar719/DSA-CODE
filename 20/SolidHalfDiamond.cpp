#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    // for upper right triangle
    for(int row = 0; row < n; row ++){
        for(int stars = 0; stars < row + 1; stars ++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // for lower right triangle
    for(int row = 0; row < n; row ++){
        for(int stars = 0; stars < n - row - 1; stars ++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}