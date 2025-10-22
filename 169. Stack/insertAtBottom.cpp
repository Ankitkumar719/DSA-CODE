#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value){
    if(s.empty()){ // jab stack khali hoga to ye kaam karega
        s.push(value); // aur value ko last me add kardega
        return;
    }

    int topValue = s.top();
    s.pop();

    insertAtBottom(s, value);
    s.push(topValue);
}

int main(){
    stack<int> s;

    s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

    int value = 101;
	insertAtBottom(s, value);

    cout << "printing stack: " << endl;
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

    return 0;
}