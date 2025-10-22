#include<iostream>
using namespace std;

bool checkKey(string s, int n, int i, char key){
    if(i >= n){
        return false;
    }

    if(s[i] == key){
        return true;
    }

    checkKey(s, n, i+1, key);
}

int main(){
    string s = "Ankit";
    int n = s.length();
    int i = 0;
    char key = 't';

    if(checkKey(s, n, i, key)){
        cout << "Key found";
    } else {
        cout << "Key not found";
    }

    return 0;
}
