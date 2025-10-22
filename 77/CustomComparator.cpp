#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(char x, char y){
    return x>y;
}

int main(){

    string arr = {"ankit"};
    sort(arr.begin(), arr.end(), cmp);
    cout<<arr<<endl;
    return 0;
}