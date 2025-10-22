#include<iostream>
using namespace std;

void lowerToUpper(char ch[], int size){
    for(int i=0; i<size; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    cout<<ch;
}

int main(){

    // character array;
    char ch[20];
    cout<<"Enter name : ";
    cin>>ch;
    // cin.getline(ch,20); // for taking full line character
    int i=0;
    int size=0;
    while(ch[i] != '\0'){
        size++;
        i++;
    }
    // cout<<size;
    lowerToUpper(ch, size);
    // cout<<ch;
    return 0;
}