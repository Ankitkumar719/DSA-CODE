#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int> &s, int value) {
    if (s.empty()) {
        s.push(value);
        return;
    }

    int topValue = s.top();
    s.pop();

    insertAtBottom(s, value);
    s.push(topValue);
}

// Function to reverse the entire stack
void reverseStack(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int value = s.top();
    s.pop();

    reverseStack(s);
    insertAtBottom(s, value);
}

int main() {
    stack<int> s;

    // Pushing elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Step 1: Reverse the stack
    reverseStack(s);

    // Step 2: Print the final stack (top to bottom)
    cout << "Printing Stack : " << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;

    return 0;
}




// #include <iostream>
// #include <limits.h>
// #include <string>
// #include <vector>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int> &s, int value) {
// 	//base case
// 	if(s.empty()) {
// 		s.push(value);
// 		return;
// 	}

// 	//1 case main solve krunga, baaaki recursion
// 	int topValue = s.top();
// 	s.pop();
// 	///recursion
// 	insertAtBottom(s, value);
// 	//wapas - backtracking
// 	s.push(topValue);
// }

// void reverseStack(stack<int>& s) {
// 	//base case
// 	if(s.empty()) {
// 		return;
// 	}

// 	//1 case main solve krunga and baaki recursion 
// 	int value = s.top();
// 	s.pop();
// 	//recursion - reverseStack
// 	reverseStack(s);
// 	//wapasi - backtracking 
// 	insertAtBottom(s,value);
	
// }

// int main() {

// 	stack<int> s;

// 	s.push(1);
// 	s.push(2);
// 	s.push(3);
// 	s.push(4);

// 	reverseStack(s);
	
// 	cout << "printing stack: " << endl;
// 	while(!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;
	
// 	int value = 101;
// 	insertAtBottom(s, value);
// 	//stack bottom -> 101 -> 10 -> 20 -> 30 ->40
// 	//print Stack 
// 	while(!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;

// 	return 0;
// }