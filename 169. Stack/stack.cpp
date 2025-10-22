#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int top;
        int size;

        Stack(int capacity){
            arr = new int[capacity]; //! dynamic memory allocation
            top = -1;
            size = capacity;
        }

        void push(int value){ //* insert the element in the stack
            if(top == size - 1){
                cout<<"Stack overflow"<<endl;
            }
            else{
                top++;
                arr[top] = value;
            }
        }

        void pop(){ //* remove the element from stack
            if(top == -1){
                cout<<"Stack underflow"<<endl;
            }
            else{
                top--;
            }
        }

        int getSize(){ //* get the size of stack
            return top + 1;
        }

        bool isEmpty(){ //* check whether stack is empty or not
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        int getTopElement(){ //* get the which is on the top of stack
            if(top == -1){
                cout<<"Empty Stack"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }
};


int main(){
    Stack s(100);

    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();

    cout<<s.getSize()<<endl;
    cout<<s.getTopElement()<<endl;

    return 0;
}