#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    cout<<"Size of queue : "<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;


    return 0;
}


