#include<iostream>
#include<stack>
using namespace std;

// class Stack{
//     public:
//         int* arr;
//         int size;
//         int top;

//         Stack(int capacity){
//             arr = new int[capacity];
//             size = capacity;
//             top = -1;
//         }

//         void push(int val){
//             if(top == size-1){
//                 cout<<"Stack Overflow"<<endl;
//             }
//             else{
//                 top++;
//                 arr[top] = val;
//             }
//         }

//         void pop(){
//             if(top == -1){
//                 cout<<"Stack Underflow"<<endl;
//             }
//             else{
//                 arr[top] = -1;
//                 top--;
//             }
//         }

//         int getSize(){
//             return top+1;
//         }

//         bool isEmpty(){
//             if(top == -1){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         int getTop(){
//             if(top == -1){
//                 cout<<"Empty Stack"<<endl;
//             }
//             else{
//                 return arr[top];
//             }
//         }

//         void print(){
//             for(int i=0; i<size; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// ----------------------------------------------------------------------------------------------------

// class Stack{
//     public:
//         int* arr;
//         int size;
//         int top1;
//         int top2;

//         Stack(int capacity){
//             arr = new int[capacity];
//             size = capacity;
//             top1 = -1;
//             top2 = size;
//         }

//         void push1(int val){
//             if(top2-top1 == 1){
//                 cout<<"Stack Overflow"<<endl;
//             }
//             else{
//                 top1++;
//                 arr[top1] = val;
//             }
//         }

//         void push2(int val){
//             if(top2-top1 == 1){
//                 cout<<"Stack Overflow"<<endl;
//             }
//             else{
//                 top2--;
//                 arr[top2] = val;
//             }
//         }

//         void pop1(){
//             if(top1 == -1){
//                 cout<<"Stack empty"<<endl;
//             }
//             else{
//                 arr[top1] = -1;
//                 top1--;
//             }
//         }

//         void pop2(){
//             if(top2 == size){
//                 cout<<"Stack empty"<<endl;
//             }
//             else{
//                 arr[top2] = -1;
//                 top2++;
//             }
//         }

//         void print(){
//             cout<<"Top1: "<<top1<<endl;
//             cout<<"Top2: "<<top2<<endl;
//             for(int i=0; i<size; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// -----------------------------------------------------------------------------------------------------------------------------------------------

void insertAtBottom(stack<int>& s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    else{
        int topElement = s.top();
        s.pop();
        insertAtBottom(s, value);
        s.push(topElement);
    }
}

// -----------------------------------------------------------------------------------------------------------------------------------------------

void reverseStack(stack<int>& s){
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, topElement);
}

void print(stack<int>& s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){

    // Stack s(5);

    // s.print();
    // s.push(10);
    // s.print();
    // s.push(20);
    // s.print();
    // s.push(30);
    // s.print();
    // s.push(40);
    // s.print();
    // s.push(50);
    // s.print();
    // s.push(60);

    // cout<<s.getTop()<<endl;
    // cout<<s.getSize()<<endl;

    // ------------------------------------------------------------------------------
    // Stack s(5);
    // s.push1(10);
    // s.print();
    // s.push2(20);
    // s.print();

    // ---------------------------------------------------------------------------------

    // stack<char> s;
    // string name = "amitwala";

    // for(int i=0; i<name.length(); i++){
    //     char ch = name[i];
    //     s.push(ch);
    // }

    // while(!s.empty()){
    //     cout<<s.top();
    //     s.pop();
    // }

    // ---------------------------------------------------------------------------------


    // stack<int> s;

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // int value = 60;

    // insertAtBottom(s, value);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;

// -----------------------------------------------------------------------------------------------------------------------------------------------

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    print(s);

    return 0;
}