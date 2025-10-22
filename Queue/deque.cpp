#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_front(5);
    dq.push_front(6);
    dq.push_back(7);
    dq.push_back(8);
    dq.push_back(9);

    dq.pop_front();
    dq.pop_back();
    

    return 0;
}