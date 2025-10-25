#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();
    
    cout<<q.size()<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    cout<<q.size()<<endl;

    if(q.empty() == true){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}
