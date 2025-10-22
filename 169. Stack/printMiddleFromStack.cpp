#include<iostream>
#include<stack>
using namespace std;

void printMiddleFromStack(stack<int>& s, int count, int totalSize){
    if(count == (totalSize / 2)){
        cout<<s.top();
        return;
    }

    int value = s.top();
    s.pop();

    printMiddleFromStack(s, count + 1, totalSize);

    s.push(value);
}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int count = 0;
    int totalSize = s.size();
    printMiddleFromStack(s, count, totalSize);
    return 0;
}