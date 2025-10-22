// // note : only true for n=3.

// #include<iostream>
// using namespace std;
// // int main(){

// //     int n;
// //     cout<<"Enter any number : ";
// //     cin>>n;


// //     // METHOD = 1

// //     for(int row=0; row<=n; row++){

// //         // for initial stars
// //         cout<<"* ";

// //         // for initial number or increasing numbers
// //         for(int num=0; num<row; num++){
// //             cout<<num+1<<" ";
// //         }

// //         // for final number or decreasing numbers
// //         for(int num=row; num>1; num--){
// //             cout<<num-1<<" ";
// //         }

// //         // for final stars
// //         cout<<"*";

// //         cout<<endl;
// //     }



// //     for(int row=0; row<n; row++){

// //         //for initial star
// //         cout<<"* ";

// //         // for initial number
// //         for(int num=0; num<n-row-1; num++){
// //             cout<<num+1<<" ";
// //         }

// //         // for final number
// //         for(int num=n-row-1; num>1; num--){
// //             cout<<num-1<<" ";
// //         }

// //         // for last star
// //         cout<<"*";
// //         cout<<endl;
// //     }

// //     // for(int row=0; row<n; row++){
// //     //     int cond= row<=n/2 ? 2*row : 2*(n-row-1);
// //     //     for(int col=0; col<=cond; col++){
// //     //         if(col<=cond/2){
// //     //             cout<<col+1;
// //     //         }
// //     //         else{
// //     //             cout<<cond-col+1;
// //     //         }
// //     //     }
// //     //     cout<<endl;
// //     // }
// //     return 0;
// // }


#include <iostream>
using namespace std;

void printPattern(int maxNum) {
    // Top half
    for (int i = 1; i <= maxNum; i++) {
        // Print leading asterisk
        cout << "* ";
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        
        // Print trailing asterisk
        cout << "*" << endl;
    }

    // Bottom half
    for (int i = maxNum - 1; i >= 1; i--) {
        // Print leading asterisk
        cout << "* ";
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        
        // Print trailing asterisk
        cout << "*" << endl;
    }
}

int main() {
    int maxNum = 5; // You can change this value to increase or decrease the size of the pattern
    printPattern(maxNum);
    return 0;
}