#include<iostream>
using namespace std;

int main(){

    // character array;
    char ch[20];
    cout<<"Enter name : ";
    // cin>>ch;
    // cin.getline(ch,20); // for taking full line character
    int i=0;
    int size=0;
    while(ch[i] != '\0'){
        size++;
        i++;
    }

    cout<<size;
    return 0;
}