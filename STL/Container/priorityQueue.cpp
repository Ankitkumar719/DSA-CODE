#include<iostream>
#include<queue>
using namespace std;

int main() {

    // min-heap -> minimum value -> highest priority
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(100);
    pq1.push(50);
    pq1.push(75);

    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;


    priority_queue<int> pq;
    // max-heap -> maximum value -> highest priority
    pq.push(10);
    pq.push(50);
    pq.push(30);
    pq.push(20);
    pq.push(40);

    pq.pop();

    cout<<pq.size()<<endl;

    // top elements -> highest priority element
    cout<<pq.top()<<endl;

    cout<<pq.empty()<<endl;
    return 0;
}
