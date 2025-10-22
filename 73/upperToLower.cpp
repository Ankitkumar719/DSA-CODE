#include<iostream>
using namespace std;

void upperToLower(char ch[], int size){
    for(int i=0; i<size; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] = ch[i] - 'A' + 'a';
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
    upperToLower(ch, size);
    // cout<<ch;
    return 0;
}