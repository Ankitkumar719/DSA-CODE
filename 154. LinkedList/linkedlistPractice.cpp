#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

// Insert at Head
void InsertAtHead(int value, Node* &head, Node* &tail) {
    if(head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
}

// Insert at Tail
void InsertAtTail(int value, Node* &head, Node* &tail) {
    if(head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}

// Print Linked List
void printLinkedList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Search
bool searchLinkedList(int target, Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == target) return true;
        temp = temp->next;
    }
    return false;
}

// Length
int getLengthOfLinkedList(Node* head) {
    int length = 0;
    Node* temp = head;
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

// Insert at Position
void insertAtPosition(int position, int value, Node* &head, Node* &tail) {
    int length = getLengthOfLinkedList(head);

    if(position < 1 || position > length + 1) {
        cout << "Invalid Position\n";
        return;
    }

    if(position == 1) {
        InsertAtHead(value, head, tail);
    }
    else if(position == length + 1) {
        InsertAtTail(value, head, tail);
    }
    else {
        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Delete from Position
void deleteFromPosition(int position, Node* &head, Node* &tail) {
    int length = getLengthOfLinkedList(head);

    if(position > length || head == NULL) return;

    // Single node
    if(head == tail && position == 1) {
        delete head;
        head = tail = NULL;
        return;
    }

    // Delete head
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = head;
    for(int i = 1; i < position - 1; i++) {
        prev = prev->next;
    }

    Node* curr = prev->next;
    prev->next = curr->next;

    if(curr == tail) {
        tail = prev;
    }

    delete curr;
}

// Reverse Iterative
void reverseLinkedList(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

// Reverse Recursive
Node* reversedLLRecursive(Node* head, Node* prev) {
    if(head == NULL) return prev;

    Node* forward = head->next;
    head->next = prev;

    return reversedLLRecursive(forward, head);
}

// Get Middle
Node* getMid(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool checkPalindromeLL(Node* head){
    int len = getLengthOfLinkedList(head);

    Node* mid = getMid(head);
    Node* finalMid = NULL; // abhi tak final mid decide nahi hua hai

    if(len%2 != 0){ // odd
        finalMid = mid->next;
    }else{
        finalMid = mid; // even
    }

    reverseLinkedList(finalMid);

    Node* temp = head;
    while(temp != NULL && finalMid != NULL){
        if(temp->data != finalMid->data){
            return false;
        }
        temp = temp->next;
        finalMid = finalMid->next;
    }

    return true;
}

// MAIN
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(10, head, tail);
    InsertAtHead(20, head, tail);
    InsertAtTail(30, head, tail);
    InsertAtTail(40, head, tail);

    cout << "Original List:\n";
    printLinkedList(head);

    // Reverse (Recursive)
    head = reversedLLRecursive(head, NULL);

    cout << "\nReversed List:\n";
    printLinkedList(head);

    // Middle Node
    Node* mid = getMid(head);
    cout << "\nMiddle Node: " << mid->data << endl;

    // Check Palindrome
    cout<<checkPalindromeLL(head);

    return 0;
}