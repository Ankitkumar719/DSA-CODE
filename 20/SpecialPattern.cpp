#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

// for rows
for(int rows=0; rows<n; rows++){


    // for spaces
    for(int spaces=0; spaces<n-rows-1; spaces++){
        cout<<" ";
    }
    

    // for numbers pattern
    for(int column=0; column<rows+1; column++){
        cout<<rows + column + 1;
    }

    // for reverse counting
    int start=2*rows; 
    for(int column=0; column<rows; column++){
        cout<<start;
        start--;
    }


cout<<endl; // for next line
}

return 0;
}