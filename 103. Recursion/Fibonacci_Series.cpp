#include<iostream>
using namespace std;

int fib(int n){

    //* base case
    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    //* recursive relation
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){

    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int result = fib(n);
    cout<<result<<endl;

    return 0;
}