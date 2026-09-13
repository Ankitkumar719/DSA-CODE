#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        if (rear == size - 1)
        {
            cout << "OverFlow";
            return;
        }

        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "UnderFlow";
            return;
        }

        if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }

    bool checkEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getFrontElement()
    {
        if (front == -1)
        {
            cout << "Queue Empty";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRearElement()
    {
        if (rear == -1)
        {
            cout << "Queue Empty";
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};

class Dequeue{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        Dequeue(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear = -1;
        }

        void pushFront(int value){
            if(front == 0){
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[front] = value;
            }
            else{
                front--;
                arr[front] = value;
            }
        }

        void pushBack(int value){
            if(rear == size - 1){
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[rear] = value;
            }
            else{
                rear++;
                arr[rear] = value;
            }
        }

        void popFront(){
            if(front == -1 and rear == -1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                arr[front] = -1;
                front++;
            }
        }

        void popBack(){
            if(front == -1 && rear == -1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                arr[rear] = -1;
                rear--;
            }
        }

        int print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

class Cqueue{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        Cqueue(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear = -1;
        }

        void push(int value){
            if((front == 0 && rear == size-1) || (rear == front-1)){
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[rear] = value;
            }
            else if(rear == size-1 && front != 0){
                rear = 0;
                arr[rear] = value;
            }
            else{
                rear++;
                arr[rear] = value;
            }
        }

        void pop(){
            if(front == -1 && rear == -1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            else if(front == size-1){
                arr[front] = -1;
                front = 0;
            }
            else{
                arr[front] = -1;
                front++;
            }
        }

        int getFront(){
            if(front == -1){
                cout<<"No front"<<endl;
            }
            else{
                int value = arr[front];
                return value;
            }
        }

        int getSize(){
            if(front == -1 && rear == -1){
                return 0;
            }
            else if(rear >= front){
                return size-front+rear+1;
            }
        }

        bool checkEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
        }

        int print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    // Queue q(5);

    // q.push(1);
    // q.push(2);
    // q.push(3);

    // cout << q.getSize() << endl;

    // Dequeue dq(7);
    // dq.pushFront(10);
    // dq.pushBack(20);
    // dq.pushBack(30);
    // dq.pushBack(40);
    // dq.pushBack(50);
    // dq.popBack();
    // dq.print();

    Cqueue cq(5);

    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cout<<cq.getFront();
    cout<<cq.getSize();

    cq.print();

    return 0;
}