#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void reverseQueueRecursively(queue<int>& q){
    if(q.empty()){
        return;
    }
    else{
        int element = q.front();
        q.pop();
        reverseQueueRecursively(q);
        q.push(element);
    }
}

void reverseInKGroup(queue<int>& q, int k, int unUsedElementCount){
    if(unUsedElementCount >= k){
        stack<int> st;
        for(int i=0; i<k; i++){ // pahle k element ko queue se nikal ke stack me daal diya
            int element = q.front();
            q.pop();
            st.push(element);
        }

        for(int i=0; i<k; i++){ // phir k element ko stack se nikal ke queue me wapis daal diya ( element reverse ho gya )
            int element = st.top();
            st.pop();
            q.push(element);
        }
        reverseInKGroup(q, k, unUsedElementCount-k); // phir se call kiya
    }
    else{
        for(int i=0; i<unUsedElementCount; i++){ // 
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }
}

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    // printQueue(q);

    // reverseQueue(q);
    // reverseQueueRecursively(q);

    int k=3;
    reverseInKGroup(q, k, q.size());
    
    printQueue(q);

    return 0;
}