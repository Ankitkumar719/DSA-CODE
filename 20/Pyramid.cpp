#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of rows : ";
cin>>n;

for(int rows=0; rows<n; rows++){
    // for spaces

    for(int spaces= 0; spaces<n-rows-1; spaces++){
        cout<<" ";
    }

    // for stars
    for(int stars=0; stars<rows+1; stars++){
        cout<<"* ";
    }

    cout<<endl;
}
    return 0;
}