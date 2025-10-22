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

    // for stars
    for(int stars=0; stars<2*rows+1; stars++){
        if(stars==0 || stars==2*rows){ // condition to print stars and spaces.
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }

    cout<<endl;
}


// for rows
for(int rows=0; rows<n; rows++){
    // for spaces
    for(int spaces=0; spaces<rows; spaces++){
        cout<<" ";
    }

    //for stars
    for(int stars=0; stars<2*n-2*rows-1; stars++){
        if(stars==0 || stars==2*n-2*rows-2){ // condition for stars and spaces.
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
return 0;
}