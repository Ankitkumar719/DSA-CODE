#include<iostream>
#include<string>
using namespace std;

void printAllPermutation(string& s, int i){
    if(i >= s.length()){
        cout<<s<<endl;
        return;
    }

    for(int j=i; j<s.length(); j++){
        swap(s[i], s[j]);
        printAllPermutation(s, i+1);
        swap(s[i], s[j]);
    }
}

int main(){
    string s = "abcd";
    printAllPermutation(s, 0);
    return 0;
}