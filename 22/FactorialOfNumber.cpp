#include<iostream>
using namespace std;

void factorial(int n){
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial = factorial*i;
    }
    cout<<"Factorial of number is : "<<factorial<<endl;
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    factorial(n);
    return 0;
}