#include<iostream>
#include<string.h>
using namespace std;

void reverseCharacter(char ch[], int size){
    int i=0, j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout<<ch;
}

int main(){

    char ch[20];

    cout<<"Enter any character : ";
    // cin.getline(ch, 20);
    cin>>ch;

    int i=0, size=0;

    // while(ch[i] != '\0'){ // size calculate 
    //     size++;
    //     i++;
    // }

    size = strlen(ch); // predefined function

    reverseCharacter(ch, size);
    return 0;
}