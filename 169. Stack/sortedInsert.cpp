#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    if(value <= s.top()){
        s.push(value);
        return;
    }
    else{
        int topValue = s.top();
        s.pop();

        sortedInsert(s, value);
        s.push(topValue);
    }
}

int main(){

    stack<int> s;
    
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int value = 45;
    sortedInsert(s, value);

    cout<<"Printing Stack : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}