#include<iostream>
using namespace std;


int factorial(int n){
    if(n == 1){
        return 1;
    }

    int result = n * factorial(n-1);

    return result;
}

int main(){
    int n;

    cout<<"Enter any number : ";
    cin>>n;

    int result = factorial(n);

    cout<<result<<endl;

    return 0;
}

