#include<iostream>
using namespace std;

char evenOdd(int num){
    if(num%2==0){
        return 'E'; // E for even
    }
    else{
        return 'O'; // O for odd
    }
}

int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    char determine = evenOdd(num);
    if(determine == 'E'){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
    return 0;
}