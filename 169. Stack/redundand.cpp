#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i]; // store first character of string
            
            if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                st.push(ch);
            }
            else if(ch==')'){
                bool operatorFound = false;
                
                while(!st.empty() && st.top()!='('){ // removing elements until find open bracket
                    char value = st.top();
                    if(value=='+' || value=='-' || value=='*' || value=='/'){
                        operatorFound = true;
                    }
                    st.pop();
                }
                
                if(operatorFound == false){
                    return true;
                }
                else{
                    st.pop();
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    string expressions[] = {
        "((a+b))",    
        "(a+(b)/c)",  
        "(a+b*(c-d))" 
    };

    for (string expr : expressions) {
        cout << "Expression: " << expr << endl;
        if (sol.checkRedundancy(expr)) {
            cout << "Result: Redundant brackets found.\n" << endl;
        } else {
            cout << "Result: No redundant brackets.\n" << endl;
        }
    }

    return 0;
}
