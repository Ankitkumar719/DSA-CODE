#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int i = 1, decimal = 0;
    while(n>0){
        int bit = n % 10;
        decimal = decimal + bit * i;
        i = i * 2;
        n = n / 10;

    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter binary no = ";
    cin>>n;
    int decimal = binaryToDecimal(n);
    cout<<"Decimal : "<<decimal;
    return 0;
}