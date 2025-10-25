#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(5);
    dq.push_front(1);
    dq.push_front(0);

    cout<<dq.size()<<endl;

    dq.insert(dq.begin(), 100);
    dq.pop_back();
    dq.pop_front();

    cout<<dq.size()<<endl;

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.at(2)<<endl;

    dq.clear();
    cout<<dq.size()<<endl;

    if(dq.empty() == true){
        cout<<"Deque is empty"<<endl;
    }else{
        cout<<"Deque is not empty"<<endl;
    }

    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}