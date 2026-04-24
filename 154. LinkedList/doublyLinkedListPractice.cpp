#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;

        Node(int value){
            this->prev=NULL;
            this->data=value;
            this->next=NULL;
        }
};


void insertAtHead(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);

        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);

        newNode->next = head;
        head->prev=newNode;
        head=newNode;
    }
}


void insertAtTail(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);

        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}


int lengthOfLinkedList(Node* head){
    Node* temp = head;

    int length=0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}


void insertAtPosition(int value, int position, Node* &head, Node* &tail){

    int size = lengthOfLinkedList(head);

    if(position == 1 || head == NULL && tail == NULL){
        insertAtHead(value, head, tail);
    }else if(position == size+1){
        insertAtTail(value, head, tail);
    }else{
        Node* temp = head;

        for(int i=1; i<position-1; i++){
            temp = temp->next;
        }

        // Node* backward = temp;
        // Node* curr = new Node(value);
        // Node* forward = temp->next;

        // curr->next = forward;
        // curr->prev = backward;
        // backward->next = curr;
        // forward->prev = curr;

        Node* newNode = new Node(value);
        Node* forward = temp->next;

        newNode->prev = temp;
        newNode->next = forward;
        temp->next = newNode;
        forward->prev = newNode;

    }
}


void deleteFromPosition(int position, Node* head, Node* tail){
    int size = lengthOfLinkedList(head);

    if(head == NULL && tail == NULL){
        cout<<"No nodes to delete"<<endl;
        return;
    }else if(head == tail){
        Node* temp = head;

        head = NULL;
        tail = NULL;

        delete temp;
    }else if(position == 1){
        Node* temp = head;

        head = head->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
    }else if(size == position){
        Node* temp = tail;

        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        temp->next = NULL;

        delete temp;

    }else{
        Node* backward = head;

        for(int i=1; i<position-1; i++){
            backward = backward->next;
        }

        Node* curr = backward->next;
        Node* forward = curr->next;

        backward->next = forward;
        forward->prev = backward;
        curr->prev = NULL;
        curr->next = NULL;

        delete curr;
    }
}


bool searchInLinkedList(int target, Node* head){
    Node* temp = head;

    while(temp != NULL){
        if(target == temp->data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


void printReverse(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL";
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);
    insertAtHead(40, head, tail);
    insertAtHead(50, head, tail);
    // insertAtTail(20, head, tail);
    // insertAtPosition(30, 3, head, tail);

    // deleteFromPosition(2, head, tail);

    print(head);

    // printReverse(tail); 

    // if(searchInLinkedList(10, head)){
    //     cout<<"Found";
    // }else{
    //     cout<<"Not Found";
    // }

    return 0;
}