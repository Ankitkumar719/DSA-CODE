#include<iostream>
#include<stack>
#include<climits>
using namespace std;

void printMiddleFromStack(stack<int>& s, int count, int totalSize){
    if(count == totalSize/2){
        cout<<s.top();
        return;
    }
    else{
        int value = s.top();
        s.pop();
        count++;

        printMiddleFromStack(s, count, totalSize);

        s.push(value);
    }
}

bool checkSorted(stack<int>& s, int prev){
    if(s.empty()){
        return true;
    }
    else{
        int next = s.top();
        if(next > prev){
            return false;
        }
        else{
            prev = next;
            s.pop();
            return checkSorted(s, prev);
        }
    }
}

void insertSortedStack(stack<int>& s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    else{
        if(value >= s.top()){
            s.push(value);
            return;
        }
        else{
            int top = s.top();
            s.pop();
            insertSortedStack(s, value);
            s.push(top);
        }
    }
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
    // printMiddleFromStack(s, count, totalSize);

    int prev = INT_MAX;
    // checkSorted(s, prev) ? cout<<"Sorted" : cout<<"Not sorted";

    int value = 35;
    // insertSortedStack(s, value);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    
    return 0;
}