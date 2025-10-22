#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node *&Head, Node *&Tail)
{
    if (Head == NULL && Tail == NULL)
    {
        Node *newNode = new Node(value);
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = Head;
        Head = newNode;
    }
}

void insertAtTail(int value, Node *&Head, Node *&Tail)
{
    if (Head == NULL && Tail == NULL)
    {
        Node *newNode = new Node(value);
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        Tail->next = newNode;
        Tail = newNode;
    }
}

bool search(Node *Head, int target)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int getLengthOfLinkedList(Node *Head)
{
    int count = 0;
    Node *temp = Head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printLinkedList(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtPosition(int position, int value, Node *&Head, Node *&Tail)
{
    if (position == 1)
    {
        insertAtHead(value, Head, Tail);
        return;
    }

    int length = getLengthOfLinkedList(Head);
    if (position == length + 1)
    {
        insertAtTail(value, Head, Tail);
        return;
    }

    Node *newNode = new Node(value);
    Node *temp = Head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromPosition(int position, Node *&head, Node *&tail)
{
    int length = getLengthOfLinkedList(head);

    if (position > length || head == NULL)
    {
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        if (head == NULL) // list became empty
            tail = NULL;
        delete temp;
        return;
    }
    else
    {
        Node *previous = head;
        for (int i = 1; i <= position - 2; i++)
        {
            previous = previous->next;
        }
        Node *current = previous->next;
        Node *forward = current->next;

        previous->next = forward;
        if (forward == NULL) // deleted last node
            tail = previous;

        delete current;
    }
}

Node* reverseLLRecursive(Node* &head, Node* prev)
{
    Node* curr = head;
    if(curr == nullptr){
        return prev;
    }

    Node* forward = curr->next;

    curr->next = prev;
    return reverseLLRecursive(forward, curr);
}

void reverseLinkedList(Node*& head){

    if(head == nullptr){
        return;
    }

    Node* prev = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

Node* getMidNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


bool checkPelindromeLL(Node* head){
    int len = getLengthOfLinkedList(head);

    Node* mid = getMidNode(head);

    Node* finalMid = nullptr;

    if(len == 1){
        finalMid = mid->next;
    }
    else{
        finalMid = mid;
    }

    reverseLinkedList(finalMid);

    Node* temp = head;
    while(temp != nullptr && finalMid != nullptr){
        if(temp->data != finalMid->data){
            return false;
        }
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *prev = nullptr;

    insertAtHead(30, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(10, head, tail);
    // printLinkedList(head);

    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);
    insertAtTail(60, head, tail);

    head = reverseLLRecursive(head, prev);
    printLinkedList(head);

    Node* middle = getMidNode(head);
    cout<<middle->data;

    // bool result = search(head, 50);
    // if (result)
    // {
    //     cout << "Element is found" << endl;
    // }

    // cout << "Length: " << getLengthOfLinkedList(head) << endl;

    // insertAtPosition(5, 500, head, tail);
    // cout << "Modified List: " << endl;
    // printLinkedList(head);

    // deleteFromPosition(1, head, tail);
    // cout << "Modified List : " << endl;
    // printLinkedList(head);
    return 0;
}
