#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include<stack>
using namespace std;

class Stack{
    public:
        int* arr;
        int top1;
        int top2;
        int size;

        Stack(int capacity){
            arr = new int[capacity];
            size = capacity;
            top1 = -1;
            top2 = size;
        }

        void push1(int value){
            if(top2 - top1 == 1){
                cout<<"Stack overflow"<<endl;
            }
            else{
                top1++;
                arr[top1] = value;
            }
        }

        void push2(int value){
            if(top2 - top1 == 1){
                cout<<"Stack overflow"<<endl;
            }
            else{
                top2--;
                arr[top2] = value;
            }
        }

        void pop1(){
            if(top1 == -1){
                cout<<"Stack underflow"<<endl;
            }
            else{
                top1--;
            }
        }

        void pop2(){
            if(top2 == size){
                cout<<"Stack underflow"<<endl;
            }
            else{
                top2++;
            }
        }

        void print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<endl;
            }
            cout<<endl;
        }
};

int main(){

    Stack s(10);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(10);
    s.push2(20);
    s.push2(30);
    s.push2(10);
    s.push2(10);
    s.push2(20);

    s.print();

    return 0;
}
