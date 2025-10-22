#include<iostream>
#include<stack>
#include<limits.h>

using namespace std;

bool checkSorted(stack<int> &s, int prev){
    if(s.empty()){
        return true;
    }

    int next = s.top();

    if(next < prev){
        return false;
    }
    else{
        prev = next;
        s.pop();

        return checkSorted(s, prev);
    }
}

int main(){

    stack<int> s;

    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    
    int prev = INT_MIN;

    if(checkSorted(s, prev)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }

    return 0;
}