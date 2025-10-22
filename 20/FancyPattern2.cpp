

// this code is only valid for n = "4";


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int num = 1;

    // First Half - Incremental numbers pattern with '*'
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout << num;
            num++;
            if(col < row) { // Print '*' after every number except the last one in the row
                cout << "*";
            }
        }
        cout << endl;
    }

    // Second Half - Star pattern with numbers
    int start=num-n;
    for(int row=0; row<n; row++){
        int k=start;
        for(int col=0; col<=n-row-1; col++){
            cout<<k;
            k++;
            if(col<n-row-1){
                cout<<"*";
            }
        }
        start=start-(n-row-1);
        cout<<endl;
    }
    return 0;
}
