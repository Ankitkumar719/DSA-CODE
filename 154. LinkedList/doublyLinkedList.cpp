#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int value)
    {
        this->prev = nullptr;
        this->data = value;
        this->next = nullptr;
    }
};

void insertAtHead(int value, Node *&head, Node *&tail)
{
    if (head == nullptr && tail == nullptr)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(int value, Node *&head, Node *&tail)
{
    if (head == nullptr && tail == nullptr)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLengthOfLinkedList(Node *Head)
{
    int count = 0;
    Node *temp = Head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node *&head, Node *&tail)
{
    int length = getLengthOfLinkedList(head);
    if (position <= 1)
    {
        insertAtHead(value, head, tail);
    }
    else if (position >= length + 1)
    {
        insertAtTail(value, head, tail);
    }
    else
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void deleteAtPosition(int position, Node *&head, Node *&tail)
{
    int length = getLengthOfLinkedList(head);

    if (position > length || head == nullptr)
    {
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        temp->next = nullptr;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if (temp->next != nullptr)
        {
            temp->next->prev = temp->prev;
        }
        else
        {
            tail = temp->prev; // Important fix for deleting last node
        }
        delete temp;
    }
}

void print(Node *head)
{
    Node *temp = head;
    cout << "nullptr <-> ";
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    cout << "nullptr <-> ";
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtHead(20, head, tail);
    insertAtHead(10, head, tail);

    insertAtTail(30, head, tail);
    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);
    insertAtTail(60, head, tail);

    insertAtPosition(2, 100, head, tail);
    deleteAtPosition(3, head, tail);

    cout << "Forward List: ";
    print(head);

    cout << "Reverse List: ";
    printReverse(tail);

    return 0;
}