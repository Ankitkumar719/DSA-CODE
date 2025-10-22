#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of rows";
cin>>n;

// for rows
for(int rows=0; rows<n; rows++){
    // for half pyramid
    for(int stars=0; stars<n-rows; stars++){
        cout<<"*";
    }

    // for pyramid made of spaces
    for(int spaces=0; spaces<2*rows+1; spaces++){
        cout<<" ";
    }

    // for half pyramid
    for(int stars=0; stars<n-rows; stars++){
        cout<<"*";
    }

    cout<<endl;
}

for(int rows=0; rows<n; rows++){
    // for half pyramid
    for(int stars=0; stars<rows+1; stars++){
        cout<<"*";
    }

    // for pyramid made of spaces
    for(int spaces=0; spaces<2*n-2*rows-1; spaces++){
        cout<<" ";
    }

    // for half pyramid
    for(int stars=0; stars<rows+1; stars++){
        cout<<"*";
    }

    cout<<endl;
}
return 0;}
